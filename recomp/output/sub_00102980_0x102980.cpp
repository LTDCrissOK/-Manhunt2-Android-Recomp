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

// Function: sub_00102980
// Address: 0x102980 - 0x1029e8
void sub_00102980_0x102980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102980_0x102980");
#endif

    switch (ctx->pc) {
        case 0x102994u: goto label_102994;
        default: break;
    }

    ctx->pc = 0x102980u;

    // 0x102980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x102988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10298c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x10298Cu;
    SET_GPR_U32(ctx, 31, 0x102994u);
    ctx->pc = 0x102990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10298Cu;
    // 0x102990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x10298Cu, 0x102994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102994u;
label_102994:
    // 0x102994: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x102994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x102998: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102998u;
    {
        const bool branch_taken_0x102998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102998) {
            ctx->pc = 0x10299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102998u;
            // 0x10299c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029A8u;
            goto label_1029a8;
        }
    }
    ctx->pc = 0x1029A0u;
    // 0x1029a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1029A0u;
    {
        const bool branch_taken_0x1029a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029A0u;
        // 0x1029a4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029a0) {
            ctx->pc = 0x1029D4u;
            goto label_1029d4;
        }
    }
    ctx->pc = 0x1029A8u;
label_1029a8:
    // 0x1029a8: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x1029a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x1029ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1029acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1029b0: 0x2c43001a  sltiu       $v1, $v0, 0x1A
    ctx->pc = 0x1029b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1029b4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1029B4u;
    {
        const bool branch_taken_0x1029b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1029b4) {
            ctx->pc = 0x1029B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1029B4u;
            // 0x1029b8: 0x2482ffbf  addiu       $v0, $a0, -0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967231));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1029C4u;
            goto label_1029c4;
        }
    }
    ctx->pc = 0x1029BCu;
    // 0x1029bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1029BCu;
    {
        const bool branch_taken_0x1029bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029BCu;
        // 0x1029c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029bc) {
            ctx->pc = 0x1029C8u;
            goto label_1029c8;
        }
    }
    ctx->pc = 0x1029C4u;
label_1029c4:
    // 0x1029c4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1029c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1029c8:
    // 0x1029c8: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x1029c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1029cc: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1029ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1029d0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1029d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1029d4:
    // 0x1029d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1029d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1029d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1029d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1029dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1029DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1029E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1029DCu;
        // 0x1029e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1029DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1029E4u;
    // 0x1029e4: 0x0  nop
    ctx->pc = 0x1029e4u;
    // NOP
    ctx->pc = 0x1029e8u;
}
