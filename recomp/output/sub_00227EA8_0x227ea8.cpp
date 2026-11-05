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

// Function: sub_00227EA8
// Address: 0x227ea8 - 0x227f28
void sub_00227EA8_0x227ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227EA8_0x227ea8");
#endif

    switch (ctx->pc) {
        case 0x227ea8u: goto label_227ea8;
        case 0x227eacu: goto label_227eac;
        case 0x227eb0u: goto label_227eb0;
        case 0x227eb4u: goto label_227eb4;
        case 0x227eb8u: goto label_227eb8;
        case 0x227ebcu: goto label_227ebc;
        case 0x227ec0u: goto label_227ec0;
        case 0x227ec4u: goto label_227ec4;
        case 0x227ec8u: goto label_227ec8;
        case 0x227eccu: goto label_227ecc;
        case 0x227ed0u: goto label_227ed0;
        case 0x227ed4u: goto label_227ed4;
        case 0x227ed8u: goto label_227ed8;
        case 0x227edcu: goto label_227edc;
        case 0x227ee0u: goto label_227ee0;
        case 0x227ee4u: goto label_227ee4;
        case 0x227ee8u: goto label_227ee8;
        case 0x227eecu: goto label_227eec;
        case 0x227ef0u: goto label_227ef0;
        case 0x227ef4u: goto label_227ef4;
        case 0x227ef8u: goto label_227ef8;
        case 0x227efcu: goto label_227efc;
        case 0x227f00u: goto label_227f00;
        case 0x227f04u: goto label_227f04;
        case 0x227f08u: goto label_227f08;
        case 0x227f0cu: goto label_227f0c;
        case 0x227f10u: goto label_227f10;
        case 0x227f14u: goto label_227f14;
        case 0x227f18u: goto label_227f18;
        case 0x227f1cu: goto label_227f1c;
        case 0x227f20u: goto label_227f20;
        case 0x227f24u: goto label_227f24;
        default: break;
    }

    ctx->pc = 0x227ea8u;

label_227ea8:
    // 0x227ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227eac:
    // 0x227eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_227eb0:
    // 0x227eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_227eb4:
    // 0x227eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227eb8:
    // 0x227eb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_227ebc:
    // 0x227ebc: 0x8e110704  lw          $s1, 0x704($s0)
    ctx->pc = 0x227ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
label_227ec0:
    // 0x227ec0: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_227ec4:
    if (ctx->pc == 0x227EC4u) {
        ctx->pc = 0x227EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EC0u;
        // 0x227ec4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EC8u;
        goto label_227ec8;
    }
    ctx->pc = 0x227EC0u;
    {
        const bool branch_taken_0x227ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ec0) {
            ctx->pc = 0x227EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227EC0u;
            // 0x227ec4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227F14u;
            goto label_227f14;
        }
    }
    ctx->pc = 0x227EC8u;
label_227ec8:
    // 0x227ec8: 0xc089f18  jal         func_227C60
label_227ecc:
    if (ctx->pc == 0x227ECCu) {
        ctx->pc = 0x227ED0u;
        goto label_227ed0;
    }
    ctx->pc = 0x227EC8u;
    SET_GPR_U32(ctx, 31, 0x227ED0u);
    ctx->pc = 0x227C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C60u, 0x227EC8u, 0x227ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227ED0u;
label_227ed0:
    // 0x227ed0: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_227ed4:
    // 0x227ed4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_227ed8:
    if (ctx->pc == 0x227ED8u) {
        ctx->pc = 0x227ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227ED4u;
        // 0x227ed8: 0xae11032c  sw          $s1, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EDCu;
        goto label_227edc;
    }
    ctx->pc = 0x227ED4u;
    {
        const bool branch_taken_0x227ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ed4) {
            ctx->pc = 0x227ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227ED4u;
            // 0x227ed8: 0xae11032c  sw          $s1, 0x32C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227EF0u;
            goto label_227ef0;
        }
    }
    ctx->pc = 0x227EDCu;
label_227edc:
    // 0x227edc: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_227ee0:
    // 0x227ee0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x227ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_227ee4:
    // 0x227ee4: 0x40f809  jalr        $v0
label_227ee8:
    if (ctx->pc == 0x227EE8u) {
        ctx->pc = 0x227EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE4u;
        // 0x227ee8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EECu;
        goto label_227eec;
    }
    ctx->pc = 0x227EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227EECu);
        ctx->pc = 0x227EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE4u;
        // 0x227ee8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EE4u, 0x227EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227EECu;
label_227eec:
    // 0x227eec: 0xae11032c  sw          $s1, 0x32C($s0)
    ctx->pc = 0x227eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 17));
label_227ef0:
    // 0x227ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_227ef4:
    // 0x227ef4: 0xc0966b4  jal         func_259AD0
label_227ef8:
    if (ctx->pc == 0x227EF8u) {
        ctx->pc = 0x227EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EF4u;
        // 0x227ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EFCu;
        goto label_227efc;
    }
    ctx->pc = 0x227EF4u;
    SET_GPR_U32(ctx, 31, 0x227EFCu);
    ctx->pc = 0x227EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EF4u;
    // 0x227ef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259AD0u, 0x227EF4u, 0x227EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EFCu;
label_227efc:
    // 0x227efc: 0xc08449e  jal         func_211278
label_227f00:
    if (ctx->pc == 0x227F00u) {
        ctx->pc = 0x227F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EFCu;
        // 0x227f00: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F04u;
        goto label_227f04;
    }
    ctx->pc = 0x227EFCu;
    SET_GPR_U32(ctx, 31, 0x227F04u);
    ctx->pc = 0x227F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EFCu;
    // 0x227f00: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211278u, 0x227EFCu, 0x227F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F04u;
label_227f04:
    // 0x227f04: 0xae000704  sw          $zero, 0x704($s0)
    ctx->pc = 0x227f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
label_227f08:
    // 0x227f08: 0xae000700  sw          $zero, 0x700($s0)
    ctx->pc = 0x227f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
label_227f0c:
    // 0x227f0c: 0xa20006fc  sb          $zero, 0x6FC($s0)
    ctx->pc = 0x227f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1788), (uint8_t)GPR_U32(ctx, 0));
label_227f10:
    // 0x227f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227f14:
    // 0x227f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_227f18:
    // 0x227f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227f1c:
    // 0x227f1c: 0x3e00008  jr          $ra
label_227f20:
    if (ctx->pc == 0x227F20u) {
        ctx->pc = 0x227F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F1Cu;
        // 0x227f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F24u;
        goto label_227f24;
    }
    ctx->pc = 0x227F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F1Cu;
        // 0x227f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F24u;
label_227f24:
    // 0x227f24: 0x0  nop
    ctx->pc = 0x227f24u;
    // NOP
    ctx->pc = 0x227f28u;
}
