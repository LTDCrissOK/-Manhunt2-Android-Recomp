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

// Function: sub_00377338
// Address: 0x377338 - 0x3773a8
void sub_00377338_0x377338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377338_0x377338");
#endif

    switch (ctx->pc) {
        case 0x37736cu: goto label_37736c;
        default: break;
    }

    ctx->pc = 0x377338u;

    // 0x377338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x377338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37733c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x377340: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x377340u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x377344: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x377344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x377348: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x377348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x37734c: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x37734cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x377350: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x377350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF914u));
    // 0x377354: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x377354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x377358: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x377358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x37735c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37735Cu;
    {
        const bool branch_taken_0x37735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37735Cu;
        // 0x377360: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37735c) {
            ctx->pc = 0x377370u;
            goto label_377370;
        }
    }
    ctx->pc = 0x377364u;
    // 0x377364: 0xc0dc442  jal         func_371108
    ctx->pc = 0x377364u;
    SET_GPR_U32(ctx, 31, 0x37736Cu);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x377364u, 0x37736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37736Cu;
label_37736c:
    // 0x37736c: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x37736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_377370:
    // 0x377370: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x377370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x377374: 0x34049800  ori         $a0, $zero, 0x9800
    ctx->pc = 0x377374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x377378: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x377378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x37737c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x377380: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x377380u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x377384: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x377384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x377388: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x377388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x37738c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x37738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x377390: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x377390u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x377394: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x377394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x377398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x377398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37739c: 0x3e00008  jr          $ra
    ctx->pc = 0x37739Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3773A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37739Cu;
        // 0x3773a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37739Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3773A4u;
    // 0x3773a4: 0x0  nop
    ctx->pc = 0x3773a4u;
    // NOP
    ctx->pc = 0x3773a8u;
}
