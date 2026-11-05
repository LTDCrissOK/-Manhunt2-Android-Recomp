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

// Function: sub_0026BFC8
// Address: 0x26bfc8 - 0x26c208
void sub_0026BFC8_0x26bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BFC8_0x26bfc8");
#endif

    switch (ctx->pc) {
        case 0x26bff8u: goto label_26bff8;
        case 0x26c000u: goto label_26c000;
        case 0x26c040u: goto label_26c040;
        case 0x26c048u: goto label_26c048;
        case 0x26c070u: goto label_26c070;
        case 0x26c090u: goto label_26c090;
        case 0x26c098u: goto label_26c098;
        case 0x26c0d8u: goto label_26c0d8;
        case 0x26c0e0u: goto label_26c0e0;
        case 0x26c108u: goto label_26c108;
        case 0x26c128u: goto label_26c128;
        case 0x26c130u: goto label_26c130;
        case 0x26c170u: goto label_26c170;
        case 0x26c178u: goto label_26c178;
        case 0x26c1a0u: goto label_26c1a0;
        case 0x26c1b8u: goto label_26c1b8;
        case 0x26c1d0u: goto label_26c1d0;
        case 0x26c1e8u: goto label_26c1e8;
        default: break;
    }

    ctx->pc = 0x26bfc8u;

    // 0x26bfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bfcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26bfd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bfd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26bfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bfdc: 0x8e300264  lw          $s0, 0x264($s1)
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x26bfe0: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x26BFE0u;
    {
        const bool branch_taken_0x26bfe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bfe0) {
            ctx->pc = 0x26BFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BFE0u;
            // 0x26bfe4: 0x8e300268  lw          $s0, 0x268($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C078u;
            goto label_26c078;
        }
    }
    ctx->pc = 0x26BFE8u;
    // 0x26bfe8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26bfec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26BFECu;
    {
        const bool branch_taken_0x26bfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFECu;
        // 0x26bff0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfec) {
            ctx->pc = 0x26C010u;
            goto label_26c010;
        }
    }
    ctx->pc = 0x26BFF4u;
    // 0x26bff4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26bff8:
    // 0x26bff8: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x26BFF8u;
    SET_GPR_U32(ctx, 31, 0x26C000u);
    ctx->pc = 0x26BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFF8u;
    // 0x26bffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26BFF8u, 0x26C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C000u;
label_26c000:
    // 0x26c000: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c004: 0x0  nop
    ctx->pc = 0x26c004u;
    // NOP
    // 0x26c008: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26C008u;
    {
        const bool branch_taken_0x26c008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c008) {
            ctx->pc = 0x26C00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C008u;
            // 0x26c00c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bff8;
        }
    }
    ctx->pc = 0x26C010u;
label_26c010:
    // 0x26c010: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x26c010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x26c014: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26c014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26c018: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26c01c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x26c020: 0x8e300264  lw          $s0, 0x264($s1)
    ctx->pc = 0x26c020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x26c024: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C024u;
    {
        const bool branch_taken_0x26c024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c024) {
            ctx->pc = 0x26C028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C024u;
            // 0x26c028: 0xae200264  sw          $zero, 0x264($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C074u;
            goto label_26c074;
        }
    }
    ctx->pc = 0x26C02Cu;
    // 0x26c02c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c030: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C030u;
    {
        const bool branch_taken_0x26c030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C030u;
        // 0x26c034: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c030) {
            ctx->pc = 0x26C058u;
            goto label_26c058;
        }
    }
    ctx->pc = 0x26C038u;
    // 0x26c038: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c03c: 0x0  nop
    ctx->pc = 0x26c03cu;
    // NOP
label_26c040:
    // 0x26c040: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x26C040u;
    SET_GPR_U32(ctx, 31, 0x26C048u);
    ctx->pc = 0x26C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C040u;
    // 0x26c044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26C040u, 0x26C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C048u;
label_26c048:
    // 0x26c048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c04c: 0x0  nop
    ctx->pc = 0x26c04cu;
    // NOP
    // 0x26c050: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26C050u;
    {
        const bool branch_taken_0x26c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c050) {
            ctx->pc = 0x26C054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C050u;
            // 0x26c054: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c040;
        }
    }
    ctx->pc = 0x26C058u;
label_26c058:
    // 0x26c058: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26c058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c060: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26c060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26c064: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26c064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x26c068: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x26C068u;
    SET_GPR_U32(ctx, 31, 0x26C070u);
    ctx->pc = 0x26C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C068u;
    // 0x26c06c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x26C068u, 0x26C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C070u;
label_26c070:
    // 0x26c070: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x26c070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
label_26c074:
    // 0x26c074: 0x8e300268  lw          $s0, 0x268($s1)
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_26c078:
    // 0x26c078: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x26C078u;
    {
        const bool branch_taken_0x26c078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c078) {
            ctx->pc = 0x26C07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C078u;
            // 0x26c07c: 0x8e30026c  lw          $s0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C110u;
            goto label_26c110;
        }
    }
    ctx->pc = 0x26C080u;
    // 0x26c080: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c084: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C084u;
    {
        const bool branch_taken_0x26c084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C084u;
        // 0x26c088: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c084) {
            ctx->pc = 0x26C0A8u;
            goto label_26c0a8;
        }
    }
    ctx->pc = 0x26C08Cu;
    // 0x26c08c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26c08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26c090:
    // 0x26c090: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x26C090u;
    SET_GPR_U32(ctx, 31, 0x26C098u);
    ctx->pc = 0x26C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C090u;
    // 0x26c094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26C090u, 0x26C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C098u;
label_26c098:
    // 0x26c098: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c09c: 0x0  nop
    ctx->pc = 0x26c09cu;
    // NOP
    // 0x26c0a0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26C0A0u;
    {
        const bool branch_taken_0x26c0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c0a0) {
            ctx->pc = 0x26C0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C0A0u;
            // 0x26c0a4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c090;
        }
    }
    ctx->pc = 0x26C0A8u;
label_26c0a8:
    // 0x26c0a8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x26c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x26c0ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26c0b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26c0b4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x26c0b8: 0x8e300268  lw          $s0, 0x268($s1)
    ctx->pc = 0x26c0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x26c0bc: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C0BCu;
    {
        const bool branch_taken_0x26c0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c0bc) {
            ctx->pc = 0x26C0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C0BCu;
            // 0x26c0c0: 0xae200268  sw          $zero, 0x268($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C10Cu;
            goto label_26c10c;
        }
    }
    ctx->pc = 0x26C0C4u;
    // 0x26c0c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c0c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C0C8u;
    {
        const bool branch_taken_0x26c0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0C8u;
        // 0x26c0cc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0c8) {
            ctx->pc = 0x26C0F0u;
            goto label_26c0f0;
        }
    }
    ctx->pc = 0x26C0D0u;
    // 0x26c0d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c0d4: 0x0  nop
    ctx->pc = 0x26c0d4u;
    // NOP
label_26c0d8:
    // 0x26c0d8: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x26C0D8u;
    SET_GPR_U32(ctx, 31, 0x26C0E0u);
    ctx->pc = 0x26C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C0D8u;
    // 0x26c0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26C0D8u, 0x26C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0E0u;
label_26c0e0:
    // 0x26c0e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c0e4: 0x0  nop
    ctx->pc = 0x26c0e4u;
    // NOP
    // 0x26c0e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26C0E8u;
    {
        const bool branch_taken_0x26c0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c0e8) {
            ctx->pc = 0x26C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C0E8u;
            // 0x26c0ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c0d8;
        }
    }
    ctx->pc = 0x26C0F0u;
label_26c0f0:
    // 0x26c0f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26c0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26c0fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x26c100: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x26C100u;
    SET_GPR_U32(ctx, 31, 0x26C108u);
    ctx->pc = 0x26C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C100u;
    // 0x26c104: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x26C100u, 0x26C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C108u;
label_26c108:
    // 0x26c108: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x26c108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
label_26c10c:
    // 0x26c10c: 0x8e30026c  lw          $s0, 0x26C($s1)
    ctx->pc = 0x26c10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
label_26c110:
    // 0x26c110: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x26C110u;
    {
        const bool branch_taken_0x26c110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c110) {
            ctx->pc = 0x26C114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C110u;
            // 0x26c114: 0x8e240258  lw          $a0, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C1A8u;
            goto label_26c1a8;
        }
    }
    ctx->pc = 0x26C118u;
    // 0x26c118: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c11c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C11Cu;
    {
        const bool branch_taken_0x26c11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C11Cu;
        // 0x26c120: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c11c) {
            ctx->pc = 0x26C140u;
            goto label_26c140;
        }
    }
    ctx->pc = 0x26C124u;
    // 0x26c124: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26c124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26c128:
    // 0x26c128: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x26C128u;
    SET_GPR_U32(ctx, 31, 0x26C130u);
    ctx->pc = 0x26C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C128u;
    // 0x26c12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26C128u, 0x26C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C130u;
label_26c130:
    // 0x26c130: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c134: 0x0  nop
    ctx->pc = 0x26c134u;
    // NOP
    // 0x26c138: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26C138u;
    {
        const bool branch_taken_0x26c138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c138) {
            ctx->pc = 0x26C13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C138u;
            // 0x26c13c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c128;
        }
    }
    ctx->pc = 0x26C140u;
label_26c140:
    // 0x26c140: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x26c140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x26c144: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26c144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26c148: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26c148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26c14c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x26c150: 0x8e30026c  lw          $s0, 0x26C($s1)
    ctx->pc = 0x26c150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x26c154: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C154u;
    {
        const bool branch_taken_0x26c154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c154) {
            ctx->pc = 0x26C158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C154u;
            // 0x26c158: 0xae20026c  sw          $zero, 0x26C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C1A4u;
            goto label_26c1a4;
        }
    }
    ctx->pc = 0x26C15Cu;
    // 0x26c15c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c160: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C160u;
    {
        const bool branch_taken_0x26c160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C160u;
        // 0x26c164: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c160) {
            ctx->pc = 0x26C188u;
            goto label_26c188;
        }
    }
    ctx->pc = 0x26C168u;
    // 0x26c168: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26c168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c16c: 0x0  nop
    ctx->pc = 0x26c16cu;
    // NOP
label_26c170:
    // 0x26c170: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x26C170u;
    SET_GPR_U32(ctx, 31, 0x26C178u);
    ctx->pc = 0x26C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C170u;
    // 0x26c174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26C170u, 0x26C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C178u;
label_26c178:
    // 0x26c178: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c17c: 0x0  nop
    ctx->pc = 0x26c17cu;
    // NOP
    // 0x26c180: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26C180u;
    {
        const bool branch_taken_0x26c180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c180) {
            ctx->pc = 0x26C184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C180u;
            // 0x26c184: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c170;
        }
    }
    ctx->pc = 0x26C188u;
label_26c188:
    // 0x26c188: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26c188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26c18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26c190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26c194: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26c194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x26c198: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x26C198u;
    SET_GPR_U32(ctx, 31, 0x26C1A0u);
    ctx->pc = 0x26C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C198u;
    // 0x26c19c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x26C198u, 0x26C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1A0u;
label_26c1a0:
    // 0x26c1a0: 0xae20026c  sw          $zero, 0x26C($s1)
    ctx->pc = 0x26c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
label_26c1a4:
    // 0x26c1a4: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x26c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_26c1a8:
    // 0x26c1a8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C1A8u;
    {
        const bool branch_taken_0x26c1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1a8) {
            ctx->pc = 0x26C1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C1A8u;
            // 0x26c1ac: 0x8e24025c  lw          $a0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C1C0u;
            goto label_26c1c0;
        }
    }
    ctx->pc = 0x26C1B0u;
    // 0x26c1b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x26C1B0u;
    SET_GPR_U32(ctx, 31, 0x26C1B8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x26C1B0u, 0x26C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1B8u;
label_26c1b8:
    // 0x26c1b8: 0xae200258  sw          $zero, 0x258($s1)
    ctx->pc = 0x26c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
    // 0x26c1bc: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x26c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_26c1c0:
    // 0x26c1c0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C1C0u;
    {
        const bool branch_taken_0x26c1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1c0) {
            ctx->pc = 0x26C1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C1C0u;
            // 0x26c1c4: 0x8e240260  lw          $a0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C1D8u;
            goto label_26c1d8;
        }
    }
    ctx->pc = 0x26C1C8u;
    // 0x26c1c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x26C1C8u;
    SET_GPR_U32(ctx, 31, 0x26C1D0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x26C1C8u, 0x26C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1D0u;
label_26c1d0:
    // 0x26c1d0: 0xae20025c  sw          $zero, 0x25C($s1)
    ctx->pc = 0x26c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 0));
    // 0x26c1d4: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x26c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_26c1d8:
    // 0x26c1d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C1D8u;
    {
        const bool branch_taken_0x26c1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1d8) {
            ctx->pc = 0x26C1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C1D8u;
            // 0x26c1dc: 0xae200270  sw          $zero, 0x270($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C1F0u;
            goto label_26c1f0;
        }
    }
    ctx->pc = 0x26C1E0u;
    // 0x26c1e0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x26C1E0u;
    SET_GPR_U32(ctx, 31, 0x26C1E8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x26C1E0u, 0x26C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1E8u;
label_26c1e8:
    // 0x26c1e8: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x26c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x26c1ec: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x26c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
label_26c1f0:
    // 0x26c1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c1f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x26C1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1FCu;
        // 0x26c200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C204u;
    // 0x26c204: 0x0  nop
    ctx->pc = 0x26c204u;
    // NOP
    ctx->pc = 0x26c208u;
}
