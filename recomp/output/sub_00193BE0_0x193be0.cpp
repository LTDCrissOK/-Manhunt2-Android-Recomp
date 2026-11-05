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

// Function: sub_00193BE0
// Address: 0x193be0 - 0x193c28
void sub_00193BE0_0x193be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193BE0_0x193be0");
#endif

    switch (ctx->pc) {
        case 0x193be0u: goto label_193be0;
        case 0x193be4u: goto label_193be4;
        case 0x193be8u: goto label_193be8;
        case 0x193becu: goto label_193bec;
        case 0x193bf0u: goto label_193bf0;
        case 0x193bf4u: goto label_193bf4;
        case 0x193bf8u: goto label_193bf8;
        case 0x193bfcu: goto label_193bfc;
        case 0x193c00u: goto label_193c00;
        case 0x193c04u: goto label_193c04;
        case 0x193c08u: goto label_193c08;
        case 0x193c0cu: goto label_193c0c;
        case 0x193c10u: goto label_193c10;
        case 0x193c14u: goto label_193c14;
        case 0x193c18u: goto label_193c18;
        case 0x193c1cu: goto label_193c1c;
        case 0x193c20u: goto label_193c20;
        case 0x193c24u: goto label_193c24;
        default: break;
    }

    ctx->pc = 0x193be0u;

label_193be0:
    // 0x193be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_193be4:
    // 0x193be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_193be8:
    // 0x193be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x193be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_193bec:
    // 0x193bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193bf0:
    // 0x193bf0: 0xe60c004c  swc1        $f12, 0x4C($s0)
    ctx->pc = 0x193bf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_193bf4:
    // 0x193bf4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x193bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_193bf8:
    // 0x193bf8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x193bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_193bfc:
    // 0x193bfc: 0x60f809  jalr        $v1
label_193c00:
    if (ctx->pc == 0x193C00u) {
        ctx->pc = 0x193C04u;
        goto label_193c04;
    }
    ctx->pc = 0x193BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x193C04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BFCu, 0x193C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193C04u;
label_193c04:
    // 0x193c04: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x193c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_193c08:
    // 0x193c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193c0c:
    // 0x193c0c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x193c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_193c10:
    // 0x193c10: 0x40f809  jalr        $v0
label_193c14:
    if (ctx->pc == 0x193C14u) {
        ctx->pc = 0x193C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C10u;
        // 0x193c14: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C18u;
        goto label_193c18;
    }
    ctx->pc = 0x193C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193C18u);
        ctx->pc = 0x193C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C10u;
        // 0x193c14: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C10u, 0x193C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193C18u;
label_193c18:
    // 0x193c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193c1c:
    // 0x193c1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x193c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_193c20:
    // 0x193c20: 0x3e00008  jr          $ra
label_193c24:
    if (ctx->pc == 0x193C24u) {
        ctx->pc = 0x193C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C20u;
        // 0x193c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C28u;
        goto label_fallthrough_0x193c20;
    }
    ctx->pc = 0x193C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C20u;
        // 0x193c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x193c20:
    ctx->pc = 0x193C28u;
}
