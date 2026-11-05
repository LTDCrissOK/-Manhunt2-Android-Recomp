#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD330
// Address: 0x1fd330 - 0x1fd370
void sub_001FD330_0x1fd330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD330_0x1fd330");
#endif

    switch (ctx->pc) {
        case 0x1fd360u: goto label_1fd360;
        default: break;
    }

    ctx->pc = 0x1fd330u;

    // 0x1fd330: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1fd330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fd334: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd338: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x1fd338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1fd33c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd33cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd340: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1fd344: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1fd344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1fd348: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1fd348u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fd34c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fd350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd354: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fd354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fd358: 0xc07db98  jal         func_1F6E60
    ctx->pc = 0x1FD358u;
    SET_GPR_U32(ctx, 31, 0x1FD360u);
    ctx->pc = 0x1FD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD358u;
    // 0x1fd35c: 0xc3280b  movn        $a1, $a2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6E60u, 0x1FD358u, 0x1FD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD360u;
label_1fd360:
    // 0x1fd360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd364: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD364u;
        // 0x1fd368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD36Cu;
    // 0x1fd36c: 0x0  nop
    ctx->pc = 0x1fd36cu;
    // NOP
    ctx->pc = 0x1fd370u;
}
