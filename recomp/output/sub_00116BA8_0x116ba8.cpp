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

// Function: sub_00116BA8
// Address: 0x116ba8 - 0x116c20
void sub_00116BA8_0x116ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116BA8_0x116ba8");
#endif

    switch (ctx->pc) {
        case 0x116ba8u: goto label_116ba8;
        case 0x116bacu: goto label_116bac;
        case 0x116bb0u: goto label_116bb0;
        case 0x116bb4u: goto label_116bb4;
        case 0x116bb8u: goto label_116bb8;
        case 0x116bbcu: goto label_116bbc;
        case 0x116bc0u: goto label_116bc0;
        case 0x116bc4u: goto label_116bc4;
        case 0x116bc8u: goto label_116bc8;
        case 0x116bccu: goto label_116bcc;
        case 0x116bd0u: goto label_116bd0;
        case 0x116bd4u: goto label_116bd4;
        case 0x116bd8u: goto label_116bd8;
        case 0x116bdcu: goto label_116bdc;
        case 0x116be0u: goto label_116be0;
        case 0x116be4u: goto label_116be4;
        case 0x116be8u: goto label_116be8;
        case 0x116becu: goto label_116bec;
        case 0x116bf0u: goto label_116bf0;
        case 0x116bf4u: goto label_116bf4;
        case 0x116bf8u: goto label_116bf8;
        case 0x116bfcu: goto label_116bfc;
        case 0x116c00u: goto label_116c00;
        case 0x116c04u: goto label_116c04;
        case 0x116c08u: goto label_116c08;
        case 0x116c0cu: goto label_116c0c;
        case 0x116c10u: goto label_116c10;
        case 0x116c14u: goto label_116c14;
        case 0x116c18u: goto label_116c18;
        case 0x116c1cu: goto label_116c1c;
        default: break;
    }

    ctx->pc = 0x116ba8u;

label_116ba8:
    // 0x116ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_116bac:
    // 0x116bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_116bb0:
    // 0x116bb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x116bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_116bb4:
    // 0x116bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_116bb8:
    // 0x116bb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x116bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116bbc:
    // 0x116bbc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x116bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_116bc0:
    // 0x116bc0: 0x40f809  jalr        $v0
label_116bc4:
    if (ctx->pc == 0x116BC4u) {
        ctx->pc = 0x116BC8u;
        goto label_116bc8;
    }
    ctx->pc = 0x116BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116BC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116BC0u, 0x116BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116BC8u;
label_116bc8:
    // 0x116bc8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_116bcc:
    if (ctx->pc == 0x116BCCu) {
        ctx->pc = 0x116BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BC8u;
        // 0x116bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116BD0u;
        goto label_116bd0;
    }
    ctx->pc = 0x116BC8u;
    {
        const bool branch_taken_0x116bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116bc8) {
            ctx->pc = 0x116BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116BC8u;
            // 0x116bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116C10u;
            goto label_116c10;
        }
    }
    ctx->pc = 0x116BD0u;
label_116bd0:
    // 0x116bd0: 0xc095368  jal         func_254DA0
label_116bd4:
    if (ctx->pc == 0x116BD4u) {
        ctx->pc = 0x116BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BD0u;
        // 0x116bd4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116BD8u;
        goto label_116bd8;
    }
    ctx->pc = 0x116BD0u;
    SET_GPR_U32(ctx, 31, 0x116BD8u);
    ctx->pc = 0x116BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BD0u;
    // 0x116bd4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x116BD0u, 0x116BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BD8u;
label_116bd8:
    // 0x116bd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x116bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116bdc:
    // 0x116bdc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_116be0:
    if (ctx->pc == 0x116BE0u) {
        ctx->pc = 0x116BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BDCu;
        // 0x116be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116BE4u;
        goto label_116be4;
    }
    ctx->pc = 0x116BDCu;
    {
        const bool branch_taken_0x116bdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BDCu;
        // 0x116be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bdc) {
            ctx->pc = 0x116C10u;
            goto label_116c10;
        }
    }
    ctx->pc = 0x116BE4u;
label_116be4:
    // 0x116be4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x116be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_116be8:
    // 0x116be8: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x116be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_116bec:
    // 0x116bec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_116bf0:
    // 0x116bf0: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x116bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_116bf4:
    // 0x116bf4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_116bf8:
    if (ctx->pc == 0x116BF8u) {
        ctx->pc = 0x116BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BF4u;
        // 0x116bf8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116BFCu;
        goto label_116bfc;
    }
    ctx->pc = 0x116BF4u;
    {
        const bool branch_taken_0x116bf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BF4u;
        // 0x116bf8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bf4) {
            ctx->pc = 0x116C0Cu;
            goto label_116c0c;
        }
    }
    ctx->pc = 0x116BFCu;
label_116bfc:
    // 0x116bfc: 0xc040dae  jal         func_1036B8
label_116c00:
    if (ctx->pc == 0x116C00u) {
        ctx->pc = 0x116C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BFCu;
        // 0x116c00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C04u;
        goto label_116c04;
    }
    ctx->pc = 0x116BFCu;
    SET_GPR_U32(ctx, 31, 0x116C04u);
    ctx->pc = 0x116C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BFCu;
    // 0x116c00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1036B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1036B8u, 0x116BFCu, 0x116C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C04u;
label_116c04:
    // 0x116c04: 0x10000003  b           . + 4 + (0x3 << 2)
label_116c08:
    if (ctx->pc == 0x116C08u) {
        ctx->pc = 0x116C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C04u;
        // 0x116c08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C0Cu;
        goto label_116c0c;
    }
    ctx->pc = 0x116C04u;
    {
        const bool branch_taken_0x116c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C04u;
        // 0x116c08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c04) {
            ctx->pc = 0x116C14u;
            goto label_116c14;
        }
    }
    ctx->pc = 0x116C0Cu;
label_116c0c:
    // 0x116c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116c10:
    // 0x116c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116c14:
    // 0x116c14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x116c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_116c18:
    // 0x116c18: 0x3e00008  jr          $ra
label_116c1c:
    if (ctx->pc == 0x116C1Cu) {
        ctx->pc = 0x116C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C18u;
        // 0x116c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C20u;
        goto label_fallthrough_0x116c18;
    }
    ctx->pc = 0x116C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C18u;
        // 0x116c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x116c18:
    ctx->pc = 0x116C20u;
}
