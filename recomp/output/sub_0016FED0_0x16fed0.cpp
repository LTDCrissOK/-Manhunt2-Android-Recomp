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

// Function: sub_0016FED0
// Address: 0x16fed0 - 0x16ff70
void sub_0016FED0_0x16fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FED0_0x16fed0");
#endif

    switch (ctx->pc) {
        case 0x16ff08u: goto label_16ff08;
        case 0x16ff20u: goto label_16ff20;
        case 0x16ff3cu: goto label_16ff3c;
        case 0x16ff44u: goto label_16ff44;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff54u: goto label_16ff54;
        default: break;
    }

    ctx->pc = 0x16fed0u;

    // 0x16fed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fedc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16fedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fee4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16fee8: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x16feec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16FEECu;
    {
        const bool branch_taken_0x16feec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16feec) {
            ctx->pc = 0x16FF3Cu;
            goto label_16ff3c;
        }
    }
    ctx->pc = 0x16FEF4u;
    // 0x16fef4: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x16fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x16fef8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x16fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x16fefc: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x16fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x16ff00: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16FF00u;
    SET_GPR_U32(ctx, 31, 0x16FF08u);
    ctx->pc = 0x16FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF00u;
    // 0x16ff04: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16FF00u, 0x16FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF08u;
label_16ff08:
    // 0x16ff08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ff08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff0c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ff10: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x16ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x16ff14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ff14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff18: 0xc04af16  jal         func_12BC58
    ctx->pc = 0x16FF18u;
    SET_GPR_U32(ctx, 31, 0x16FF20u);
    ctx->pc = 0x16FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF18u;
    // 0x16ff1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC58u, 0x16FF18u, 0x16FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF20u;
label_16ff20:
    // 0x16ff20: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x16ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x16ff24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16ff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff28: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x16ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x16ff2c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x16ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x16ff30: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x16ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x16ff34: 0xc04448e  jal         func_111238
    ctx->pc = 0x16FF34u;
    SET_GPR_U32(ctx, 31, 0x16FF3Cu);
    ctx->pc = 0x16FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF34u;
    // 0x16ff38: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111238u, 0x16FF34u, 0x16FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF3Cu;
label_16ff3c:
    // 0x16ff3c: 0xc04f7a6  jal         func_13DE98
    ctx->pc = 0x16FF3Cu;
    SET_GPR_U32(ctx, 31, 0x16FF44u);
    ctx->pc = 0x16FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF3Cu;
    // 0x16ff40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE98u, 0x16FF3Cu, 0x16FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF44u;
label_16ff44:
    // 0x16ff44: 0xc05cd68  jal         func_1735A0
    ctx->pc = 0x16FF44u;
    SET_GPR_U32(ctx, 31, 0x16FF4Cu);
    ctx->pc = 0x16FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF44u;
    // 0x16ff48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1735A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735A0u, 0x16FF44u, 0x16FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF4Cu;
label_16ff4c:
    // 0x16ff4c: 0xc05ccc0  jal         func_173300
    ctx->pc = 0x16FF4Cu;
    SET_GPR_U32(ctx, 31, 0x16FF54u);
    ctx->pc = 0x16FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF4Cu;
    // 0x16ff50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173300u, 0x16FF4Cu, 0x16FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF54u;
label_16ff54:
    // 0x16ff54: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x16ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x16ff58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ff58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ff5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ff5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ff60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ff60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ff64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16ff64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ff68: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF68u;
        // 0x16ff6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF70u;
}
