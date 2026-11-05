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

// Function: sub_00135FA8
// Address: 0x135fa8 - 0x136030
void sub_00135FA8_0x135fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135FA8_0x135fa8");
#endif

    switch (ctx->pc) {
        case 0x135fccu: goto label_135fcc;
        case 0x135fe0u: goto label_135fe0;
        case 0x136010u: goto label_136010;
        default: break;
    }

    ctx->pc = 0x135fa8u;

    // 0x135fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135fb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x135fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x135fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135fb8: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x135fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x135fbc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x135FBCu;
    {
        const bool branch_taken_0x135fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135fbc) {
            ctx->pc = 0x135FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135FBCu;
            // 0x135fc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136020u;
            goto label_136020;
        }
    }
    ctx->pc = 0x135FC4u;
    // 0x135fc4: 0xc04f740  jal         func_13DD00
    ctx->pc = 0x135FC4u;
    SET_GPR_U32(ctx, 31, 0x135FCCu);
    ctx->pc = 0x13DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD00u, 0x135FC4u, 0x135FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FCCu;
label_135fcc:
    // 0x135fcc: 0xae000464  sw          $zero, 0x464($s0)
    ctx->pc = 0x135fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 0));
    // 0x135fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135fd4: 0xae000468  sw          $zero, 0x468($s0)
    ctx->pc = 0x135fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 0));
    // 0x135fd8: 0xc04db02  jal         func_136C08
    ctx->pc = 0x135FD8u;
    SET_GPR_U32(ctx, 31, 0x135FE0u);
    ctx->pc = 0x135FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135FD8u;
    // 0x135fdc: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x135FD8u, 0x135FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FE0u;
label_135fe0:
    // 0x135fe0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x135fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x135fe4: 0xae0004b4  sw          $zero, 0x4B4($s0)
    ctx->pc = 0x135fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 0));
    // 0x135fe8: 0xae0004b8  sw          $zero, 0x4B8($s0)
    ctx->pc = 0x135fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 0));
    // 0x135fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ff0: 0xa20004bc  sb          $zero, 0x4BC($s0)
    ctx->pc = 0x135ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1212), (uint8_t)GPR_U32(ctx, 0));
    // 0x135ff4: 0xa20004bd  sb          $zero, 0x4BD($s0)
    ctx->pc = 0x135ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1213), (uint8_t)GPR_U32(ctx, 0));
    // 0x135ff8: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x135ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x135ffc: 0xae0004c4  sw          $zero, 0x4C4($s0)
    ctx->pc = 0x135ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 0));
    // 0x136000: 0xae0004cc  sw          $zero, 0x4CC($s0)
    ctx->pc = 0x136000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 0));
    // 0x136004: 0xae0004d0  sw          $zero, 0x4D0($s0)
    ctx->pc = 0x136004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 0));
    // 0x136008: 0xc04dfa4  jal         func_137E90
    ctx->pc = 0x136008u;
    SET_GPR_U32(ctx, 31, 0x136010u);
    ctx->pc = 0x13600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136008u;
    // 0x13600c: 0xae0204c8  sw          $v0, 0x4C8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E90u, 0x136008u, 0x136010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136010u;
label_136010:
    // 0x136010: 0xae0004d4  sw          $zero, 0x4D4($s0)
    ctx->pc = 0x136010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 0));
    // 0x136014: 0xae0004dc  sw          $zero, 0x4DC($s0)
    ctx->pc = 0x136014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1244), GPR_U32(ctx, 0));
    // 0x136018: 0xae0004d8  sw          $zero, 0x4D8($s0)
    ctx->pc = 0x136018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1240), GPR_U32(ctx, 0));
    // 0x13601c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13601cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136020:
    // 0x136020: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x136020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136024: 0x3e00008  jr          $ra
    ctx->pc = 0x136024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136024u;
        // 0x136028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13602Cu;
    // 0x13602c: 0x0  nop
    ctx->pc = 0x13602cu;
    // NOP
    ctx->pc = 0x136030u;
}
