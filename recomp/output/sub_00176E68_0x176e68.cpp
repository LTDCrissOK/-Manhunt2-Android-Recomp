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

// Function: sub_00176E68
// Address: 0x176e68 - 0x176ee8
void sub_00176E68_0x176e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176E68_0x176e68");
#endif

    switch (ctx->pc) {
        case 0x176e68u: goto label_176e68;
        case 0x176e6cu: goto label_176e6c;
        case 0x176e70u: goto label_176e70;
        case 0x176e74u: goto label_176e74;
        case 0x176e78u: goto label_176e78;
        case 0x176e7cu: goto label_176e7c;
        case 0x176e80u: goto label_176e80;
        case 0x176e84u: goto label_176e84;
        case 0x176e88u: goto label_176e88;
        case 0x176e8cu: goto label_176e8c;
        case 0x176e90u: goto label_176e90;
        case 0x176e94u: goto label_176e94;
        case 0x176e98u: goto label_176e98;
        case 0x176e9cu: goto label_176e9c;
        case 0x176ea0u: goto label_176ea0;
        case 0x176ea4u: goto label_176ea4;
        case 0x176ea8u: goto label_176ea8;
        case 0x176eacu: goto label_176eac;
        case 0x176eb0u: goto label_176eb0;
        case 0x176eb4u: goto label_176eb4;
        case 0x176eb8u: goto label_176eb8;
        case 0x176ebcu: goto label_176ebc;
        case 0x176ec0u: goto label_176ec0;
        case 0x176ec4u: goto label_176ec4;
        case 0x176ec8u: goto label_176ec8;
        case 0x176eccu: goto label_176ecc;
        case 0x176ed0u: goto label_176ed0;
        case 0x176ed4u: goto label_176ed4;
        case 0x176ed8u: goto label_176ed8;
        case 0x176edcu: goto label_176edc;
        case 0x176ee0u: goto label_176ee0;
        case 0x176ee4u: goto label_176ee4;
        default: break;
    }

    ctx->pc = 0x176e68u;

label_176e68:
    // 0x176e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176e6c:
    // 0x176e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176e70:
    // 0x176e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176e74:
    // 0x176e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176e78:
    // 0x176e78: 0xc04f9a4  jal         func_13E690
label_176e7c:
    if (ctx->pc == 0x176E7Cu) {
        ctx->pc = 0x176E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E78u;
        // 0x176e7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E80u;
        goto label_176e80;
    }
    ctx->pc = 0x176E78u;
    SET_GPR_U32(ctx, 31, 0x176E80u);
    ctx->pc = 0x176E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E78u;
    // 0x176e7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176E78u, 0x176E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E80u;
label_176e80:
    // 0x176e80: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_176e84:
    // 0x176e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176e88:
    // 0x176e88: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_176e8c:
    // 0x176e8c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176e90:
    // 0x176e90: 0xc04f8fc  jal         func_13E3F0
label_176e94:
    if (ctx->pc == 0x176E94u) {
        ctx->pc = 0x176E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E90u;
        // 0x176e94: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E98u;
        goto label_176e98;
    }
    ctx->pc = 0x176E90u;
    SET_GPR_U32(ctx, 31, 0x176E98u);
    ctx->pc = 0x176E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E90u;
    // 0x176e94: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176E90u, 0x176E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176E98u;
label_176e98:
    // 0x176e98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176e9c:
    // 0x176e9c: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_176ea0:
    // 0x176ea0: 0xc0461e8  jal         func_1187A0
label_176ea4:
    if (ctx->pc == 0x176EA4u) {
        ctx->pc = 0x176EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EA0u;
        // 0x176ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EA8u;
        goto label_176ea8;
    }
    ctx->pc = 0x176EA0u;
    SET_GPR_U32(ctx, 31, 0x176EA8u);
    ctx->pc = 0x176EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EA0u;
    // 0x176ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x176EA0u, 0x176EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EA8u;
label_176ea8:
    // 0x176ea8: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x176ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_176eac:
    // 0x176eac: 0xc046256  jal         func_118958
label_176eb0:
    if (ctx->pc == 0x176EB0u) {
        ctx->pc = 0x176EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EACu;
        // 0x176eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EB4u;
        goto label_176eb4;
    }
    ctx->pc = 0x176EACu;
    SET_GPR_U32(ctx, 31, 0x176EB4u);
    ctx->pc = 0x176EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176EACu;
    // 0x176eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x176EACu, 0x176EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EB4u;
label_176eb4:
    // 0x176eb4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x176eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_176eb8:
    // 0x176eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176ebc:
    // 0x176ebc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x176ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_176ec0:
    // 0x176ec0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176ec4:
    // 0x176ec4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176ec8:
    // 0x176ec8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176ecc:
    // 0x176ecc: 0x40f809  jalr        $v0
label_176ed0:
    if (ctx->pc == 0x176ED0u) {
        ctx->pc = 0x176ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176ECCu;
        // 0x176ed0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176ED4u;
        goto label_176ed4;
    }
    ctx->pc = 0x176ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176ED4u);
        ctx->pc = 0x176ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176ECCu;
        // 0x176ed0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176ECCu, 0x176ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176ED4u;
label_176ed4:
    // 0x176ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176ed8:
    // 0x176ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176edc:
    // 0x176edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176ee0:
    // 0x176ee0: 0x3e00008  jr          $ra
label_176ee4:
    if (ctx->pc == 0x176EE4u) {
        ctx->pc = 0x176EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EE0u;
        // 0x176ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EE8u;
        goto label_fallthrough_0x176ee0;
    }
    ctx->pc = 0x176EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EE0u;
        // 0x176ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176ee0:
    ctx->pc = 0x176EE8u;
}
