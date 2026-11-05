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

// Function: sub_0016FD60
// Address: 0x16fd60 - 0x16fde8
void sub_0016FD60_0x16fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FD60_0x16fd60");
#endif

    switch (ctx->pc) {
        case 0x16fd74u: goto label_16fd74;
        case 0x16fd9cu: goto label_16fd9c;
        case 0x16fdbcu: goto label_16fdbc;
        case 0x16fdd4u: goto label_16fdd4;
        default: break;
    }

    ctx->pc = 0x16fd60u;

    // 0x16fd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fd64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fd68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16fd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16fd6c: 0xc04f794  jal         func_13DE50
    ctx->pc = 0x16FD6Cu;
    SET_GPR_U32(ctx, 31, 0x16FD74u);
    ctx->pc = 0x16FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD6Cu;
    // 0x16fd70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE50u, 0x16FD6Cu, 0x16FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD74u;
label_16fd74:
    // 0x16fd74: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x16fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x16fd78: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x16fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x16fd7c: 0x24630e60  addiu       $v1, $v1, 0xE60
    ctx->pc = 0x16fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x16fd80: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x16fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x16fd84: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x16fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x16fd88: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x16fd8c: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x16fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x16fd90: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x16fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x16fd94: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x16FD94u;
    SET_GPR_U32(ctx, 31, 0x16FD9Cu);
    ctx->pc = 0x16FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD94u;
    // 0x16fd98: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x16FD94u, 0x16FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD9Cu;
label_16fd9c:
    // 0x16fd9c: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x16fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x16fda0: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x16fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x16fda4: 0xae000254  sw          $zero, 0x254($s0)
    ctx->pc = 0x16fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    // 0x16fda8: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x16fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x16fdac: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x16fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x16fdb0: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x16fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x16fdb4: 0xc045e6e  jal         func_1179B8
    ctx->pc = 0x16FDB4u;
    SET_GPR_U32(ctx, 31, 0x16FDBCu);
    ctx->pc = 0x16FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDB4u;
    // 0x16fdb8: 0xae00028c  sw          $zero, 0x28C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179B8u, 0x16FDB4u, 0x16FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDBCu;
label_16fdbc:
    // 0x16fdbc: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x16fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x16fdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdc4: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x16fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x16fdc8: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x16fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x16fdcc: 0xc05c14e  jal         func_170538
    ctx->pc = 0x16FDCCu;
    SET_GPR_U32(ctx, 31, 0x16FDD4u);
    ctx->pc = 0x16FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDCCu;
    // 0x16fdd0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170538u, 0x16FDCCu, 0x16FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDD4u;
label_16fdd4:
    // 0x16fdd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16fdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16fdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fde0: 0x3e00008  jr          $ra
    ctx->pc = 0x16FDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDE0u;
        // 0x16fde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FDE8u;
}
