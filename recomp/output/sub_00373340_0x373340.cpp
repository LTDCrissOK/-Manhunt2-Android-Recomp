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

// Function: sub_00373340
// Address: 0x373340 - 0x373388
void sub_00373340_0x373340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373340_0x373340");
#endif

    ctx->pc = 0x373340u;

    // 0x373340: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x373340u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x373344: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x373344u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x373348: 0x34a20040  ori         $v0, $a1, 0x40
    ctx->pc = 0x373348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x37334c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x37334cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x373350: 0xa6100a  movz        $v0, $a1, $a2
    ctx->pc = 0x373350u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x373354: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x373354u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x373358: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x373358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x37335c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37335cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x373360: 0x47180a  movz        $v1, $v0, $a3
    ctx->pc = 0x373360u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x373364: 0x24a55b00  addiu       $a1, $a1, 0x5B00
    ctx->pc = 0x373364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
    // 0x373368: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x373368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x37336c: 0x356be030  ori         $t3, $t3, 0xE030
    ctx->pc = 0x37336cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)57392);
    // 0x373370: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x373370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x373374: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x373374u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x373378: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x373378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37337c: 0x68100a  movz        $v0, $v1, $t0
    ctx->pc = 0x37337cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x373380: 0x3e00008  jr          $ra
    ctx->pc = 0x373380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373380u;
        // 0x373384: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373388u;
}
