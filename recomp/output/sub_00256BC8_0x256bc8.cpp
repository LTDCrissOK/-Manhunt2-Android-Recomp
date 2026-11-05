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

// Function: sub_00256BC8
// Address: 0x256bc8 - 0x256c28
void sub_00256BC8_0x256bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256BC8_0x256bc8");
#endif

    switch (ctx->pc) {
        case 0x256bc8u: goto label_256bc8;
        case 0x256bccu: goto label_256bcc;
        case 0x256bd0u: goto label_256bd0;
        case 0x256bd4u: goto label_256bd4;
        case 0x256bd8u: goto label_256bd8;
        case 0x256bdcu: goto label_256bdc;
        case 0x256be0u: goto label_256be0;
        case 0x256be4u: goto label_256be4;
        case 0x256be8u: goto label_256be8;
        case 0x256becu: goto label_256bec;
        case 0x256bf0u: goto label_256bf0;
        case 0x256bf4u: goto label_256bf4;
        case 0x256bf8u: goto label_256bf8;
        case 0x256bfcu: goto label_256bfc;
        case 0x256c00u: goto label_256c00;
        case 0x256c04u: goto label_256c04;
        case 0x256c08u: goto label_256c08;
        case 0x256c0cu: goto label_256c0c;
        case 0x256c10u: goto label_256c10;
        case 0x256c14u: goto label_256c14;
        case 0x256c18u: goto label_256c18;
        case 0x256c1cu: goto label_256c1c;
        case 0x256c20u: goto label_256c20;
        case 0x256c24u: goto label_256c24;
        default: break;
    }

    ctx->pc = 0x256bc8u;

label_256bc8:
    // 0x256bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_256bcc:
    // 0x256bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_256bd0:
    // 0x256bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x256bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_256bd4:
    // 0x256bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256bd8:
    // 0x256bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_256bdc:
    // 0x256bdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x256bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_256be0:
    // 0x256be0: 0xc0b1680  jal         func_2C5A00
label_256be4:
    if (ctx->pc == 0x256BE4u) {
        ctx->pc = 0x256BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BE0u;
        // 0x256be4: 0x8e0410e0  lw          $a0, 0x10E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256BE8u;
        goto label_256be8;
    }
    ctx->pc = 0x256BE0u;
    SET_GPR_U32(ctx, 31, 0x256BE8u);
    ctx->pc = 0x256BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BE0u;
    // 0x256be4: 0x8e0410e0  lw          $a0, 0x10E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x256BE0u, 0x256BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BE8u;
label_256be8:
    // 0x256be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_256bec:
    // 0x256bec: 0xc095462  jal         func_255188
label_256bf0:
    if (ctx->pc == 0x256BF0u) {
        ctx->pc = 0x256BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BECu;
        // 0x256bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256BF4u;
        goto label_256bf4;
    }
    ctx->pc = 0x256BECu;
    SET_GPR_U32(ctx, 31, 0x256BF4u);
    ctx->pc = 0x256BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BECu;
    // 0x256bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255188u, 0x256BECu, 0x256BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BF4u;
label_256bf4:
    // 0x256bf4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x256bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_256bf8:
    // 0x256bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256bfc:
    // 0x256bfc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x256bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_256c00:
    // 0x256c00: 0x40f809  jalr        $v0
label_256c04:
    if (ctx->pc == 0x256C04u) {
        ctx->pc = 0x256C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C00u;
        // 0x256c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C08u;
        goto label_256c08;
    }
    ctx->pc = 0x256C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256C08u);
        ctx->pc = 0x256C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C00u;
        // 0x256c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256C00u, 0x256C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256C08u;
label_256c08:
    // 0x256c08: 0xc096080  jal         func_258200
label_256c0c:
    if (ctx->pc == 0x256C0Cu) {
        ctx->pc = 0x256C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C08u;
        // 0x256c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C10u;
        goto label_256c10;
    }
    ctx->pc = 0x256C08u;
    SET_GPR_U32(ctx, 31, 0x256C10u);
    ctx->pc = 0x256C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C08u;
    // 0x256c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258200u, 0x256C08u, 0x256C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C10u;
label_256c10:
    // 0x256c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_256c14:
    // 0x256c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x256c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_256c18:
    // 0x256c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_256c1c:
    // 0x256c1c: 0x3e00008  jr          $ra
label_256c20:
    if (ctx->pc == 0x256C20u) {
        ctx->pc = 0x256C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C1Cu;
        // 0x256c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C24u;
        goto label_256c24;
    }
    ctx->pc = 0x256C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C1Cu;
        // 0x256c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256C24u;
label_256c24:
    // 0x256c24: 0x0  nop
    ctx->pc = 0x256c24u;
    // NOP
    ctx->pc = 0x256c28u;
}
