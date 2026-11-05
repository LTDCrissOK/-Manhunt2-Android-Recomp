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

// Function: sub_00370B90
// Address: 0x370b90 - 0x370c60
void sub_00370B90_0x370b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370B90_0x370b90");
#endif

    switch (ctx->pc) {
        case 0x370c00u: goto label_370c00;
        case 0x370c14u: goto label_370c14;
        default: break;
    }

    ctx->pc = 0x370b90u;

    // 0x370b90: 0xc7001b  divu        $zero, $a2, $a3
    ctx->pc = 0x370b90u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x370b94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370b9c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x370b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x370ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x370ba8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x370ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x370bac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x370bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x370bb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x370bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x370bb4: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x370bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x370bb8: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x370bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x370bbc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x370bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bc0: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x370bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x370bc4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x370bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bc8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x370bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x370bcc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x370BCCu;
    {
        const bool branch_taken_0x370bcc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x370bcc) {
            ctx->pc = 0x370BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370BCCu;
            // 0x370bd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x370BD4u;
            goto label_370bd4;
        }
    }
    ctx->pc = 0x370BD4u;
label_370bd4:
    // 0x370bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370bd8: 0xae0a0020  sw          $t2, 0x20($s0)
    ctx->pc = 0x370bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 10));
    // 0x370bdc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x370bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x370be0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x370be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x370be4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x370be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x370be8: 0xae0a002c  sw          $t2, 0x2C($s0)
    ctx->pc = 0x370be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 10));
    // 0x370bec: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x370becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x370bf0: 0x3012  mflo        $a2
    ctx->pc = 0x370bf0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x370bf4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x370bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x370bf8: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370BF8u;
    SET_GPR_U32(ctx, 31, 0x370C00u);
    ctx->pc = 0x370BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370BF8u;
    // 0x370bfc: 0xae060018  sw          $a2, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370BF8u, 0x370C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C00u;
label_370c00:
    // 0x370c00: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x370c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x370c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x370c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x370c0c: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370C0Cu;
    SET_GPR_U32(ctx, 31, 0x370C14u);
    ctx->pc = 0x370C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C0Cu;
    // 0x370c10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370C0Cu, 0x370C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C14u;
label_370c14:
    // 0x370c14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x370c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c18: 0x118902  srl         $s1, $s1, 4
    ctx->pc = 0x370c18u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x370c1c: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x370c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x370c20: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x370c20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x370c24: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x370c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x370c28: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x370c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x370c2c: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x370c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x370c30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c34: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x370c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x370c38: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x370c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x370c3c: 0xae12003c  sw          $s2, 0x3C($s0)
    ctx->pc = 0x370c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
    // 0x370c40: 0xae120040  sw          $s2, 0x40($s0)
    ctx->pc = 0x370c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x370c44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x370c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x370c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370c4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x370c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370c50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x370c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370c54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x370c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x370c58: 0x3e00008  jr          $ra
    ctx->pc = 0x370C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C58u;
        // 0x370c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C60u;
}
