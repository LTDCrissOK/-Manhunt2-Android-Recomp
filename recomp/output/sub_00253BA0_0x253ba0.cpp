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

// Function: sub_00253BA0
// Address: 0x253ba0 - 0x253c18
void sub_00253BA0_0x253ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253BA0_0x253ba0");
#endif

    switch (ctx->pc) {
        case 0x253ba0u: goto label_253ba0;
        case 0x253ba4u: goto label_253ba4;
        case 0x253ba8u: goto label_253ba8;
        case 0x253bacu: goto label_253bac;
        case 0x253bb0u: goto label_253bb0;
        case 0x253bb4u: goto label_253bb4;
        case 0x253bb8u: goto label_253bb8;
        case 0x253bbcu: goto label_253bbc;
        case 0x253bc0u: goto label_253bc0;
        case 0x253bc4u: goto label_253bc4;
        case 0x253bc8u: goto label_253bc8;
        case 0x253bccu: goto label_253bcc;
        case 0x253bd0u: goto label_253bd0;
        case 0x253bd4u: goto label_253bd4;
        case 0x253bd8u: goto label_253bd8;
        case 0x253bdcu: goto label_253bdc;
        case 0x253be0u: goto label_253be0;
        case 0x253be4u: goto label_253be4;
        case 0x253be8u: goto label_253be8;
        case 0x253becu: goto label_253bec;
        case 0x253bf0u: goto label_253bf0;
        case 0x253bf4u: goto label_253bf4;
        case 0x253bf8u: goto label_253bf8;
        case 0x253bfcu: goto label_253bfc;
        case 0x253c00u: goto label_253c00;
        case 0x253c04u: goto label_253c04;
        case 0x253c08u: goto label_253c08;
        case 0x253c0cu: goto label_253c0c;
        case 0x253c10u: goto label_253c10;
        case 0x253c14u: goto label_253c14;
        default: break;
    }

    ctx->pc = 0x253ba0u;

label_253ba0:
    // 0x253ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_253ba4:
    // 0x253ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_253ba8:
    // 0x253ba8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x253ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_253bac:
    // 0x253bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_253bb0:
    // 0x253bb0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_253bb4:
    // 0x253bb4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_253bb8:
    // 0x253bb8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_253bbc:
    if (ctx->pc == 0x253BBCu) {
        ctx->pc = 0x253BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BB8u;
        // 0x253bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BC0u;
        goto label_253bc0;
    }
    ctx->pc = 0x253BB8u;
    {
        const bool branch_taken_0x253bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253bb8) {
            ctx->pc = 0x253BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BB8u;
            // 0x253bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253C04u;
            goto label_253c04;
        }
    }
    ctx->pc = 0x253BC0u;
label_253bc0:
    // 0x253bc0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x253bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_253bc4:
    // 0x253bc4: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x253bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_253bc8:
    // 0x253bc8: 0xc061a3c  jal         func_1868F0
label_253bcc:
    if (ctx->pc == 0x253BCCu) {
        ctx->pc = 0x253BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BC8u;
        // 0x253bcc: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BD0u;
        goto label_253bd0;
    }
    ctx->pc = 0x253BC8u;
    SET_GPR_U32(ctx, 31, 0x253BD0u);
    ctx->pc = 0x253BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BC8u;
    // 0x253bcc: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868F0u, 0x253BC8u, 0x253BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BD0u;
label_253bd0:
    // 0x253bd0: 0x8e040fe8  lw          $a0, 0xFE8($s0)
    ctx->pc = 0x253bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
label_253bd4:
    // 0x253bd4: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x253bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
label_253bd8:
    // 0x253bd8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x253bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_253bdc:
    // 0x253bdc: 0x40f809  jalr        $v0
label_253be0:
    if (ctx->pc == 0x253BE0u) {
        ctx->pc = 0x253BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BDCu;
        // 0x253be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BE4u;
        goto label_253be4;
    }
    ctx->pc = 0x253BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253BE4u);
        ctx->pc = 0x253BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BDCu;
        // 0x253be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253BDCu, 0x253BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253BE4u;
label_253be4:
    // 0x253be4: 0xc06fa74  jal         func_1BE9D0
label_253be8:
    if (ctx->pc == 0x253BE8u) {
        ctx->pc = 0x253BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE4u;
        // 0x253be8: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BECu;
        goto label_253bec;
    }
    ctx->pc = 0x253BE4u;
    SET_GPR_U32(ctx, 31, 0x253BECu);
    ctx->pc = 0x253BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BE4u;
    // 0x253be8: 0x8e040fe8  lw          $a0, 0xFE8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9D0u, 0x253BE4u, 0x253BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BECu;
label_253bec:
    // 0x253bec: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x253becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
label_253bf0:
    // 0x253bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253bf4:
    // 0x253bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253bf8:
    // 0x253bf8: 0xc0944f6  jal         func_2513D8
label_253bfc:
    if (ctx->pc == 0x253BFCu) {
        ctx->pc = 0x253BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BF8u;
        // 0x253bfc: 0xac62035c  sw          $v0, 0x35C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C00u;
        goto label_253c00;
    }
    ctx->pc = 0x253BF8u;
    SET_GPR_U32(ctx, 31, 0x253C00u);
    ctx->pc = 0x253BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BF8u;
    // 0x253bfc: 0xac62035c  sw          $v0, 0x35C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253BF8u, 0x253C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C00u;
label_253c00:
    // 0x253c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253c04:
    // 0x253c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253c08:
    // 0x253c08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_253c0c:
    // 0x253c0c: 0x3e00008  jr          $ra
label_253c10:
    if (ctx->pc == 0x253C10u) {
        ctx->pc = 0x253C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C0Cu;
        // 0x253c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C14u;
        goto label_253c14;
    }
    ctx->pc = 0x253C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C0Cu;
        // 0x253c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253C14u;
label_253c14:
    // 0x253c14: 0x0  nop
    ctx->pc = 0x253c14u;
    // NOP
    ctx->pc = 0x253c18u;
}
