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

// Function: sub_00357340
// Address: 0x357340 - 0x357428
void sub_00357340_0x357340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357340_0x357340");
#endif

    switch (ctx->pc) {
        case 0x357360u: goto label_357360;
        case 0x357370u: goto label_357370;
        case 0x357398u: goto label_357398;
        case 0x3573a4u: goto label_3573a4;
        case 0x3573c0u: goto label_3573c0;
        case 0x3573dcu: goto label_3573dc;
        case 0x3573ecu: goto label_3573ec;
        case 0x357404u: goto label_357404;
        default: break;
    }

    ctx->pc = 0x357340u;

    // 0x357340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35734c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x357350: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x357350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x357354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x357358: 0xc0d5c40  jal         func_357100
    ctx->pc = 0x357358u;
    SET_GPR_U32(ctx, 31, 0x357360u);
    ctx->pc = 0x35735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357358u;
    // 0x35735c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357100u, 0x357358u, 0x357360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357360u;
label_357360:
    // 0x357360: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x357360u;
    {
        const bool branch_taken_0x357360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357360u;
        // 0x357364: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357360) {
            ctx->pc = 0x35740Cu;
            goto label_35740c;
        }
    }
    ctx->pc = 0x357368u;
    // 0x357368: 0xc0d5c32  jal         func_3570C8
    ctx->pc = 0x357368u;
    SET_GPR_U32(ctx, 31, 0x357370u);
    ctx->pc = 0x35736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357368u;
    // 0x35736c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C8u, 0x357368u, 0x357370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357370u;
label_357370:
    // 0x357370: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x357370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357374: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x357374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x357378: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x357378u;
    {
        const bool branch_taken_0x357378 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357378u;
        // 0x35737c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357378) {
            ctx->pc = 0x3573F0u;
            goto label_3573f0;
        }
    }
    ctx->pc = 0x357380u;
    // 0x357380: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x357380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x357384: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x357384u;
    {
        const bool branch_taken_0x357384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357384) {
            ctx->pc = 0x357388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357384u;
            // 0x357388: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3573F4u;
            goto label_3573f4;
        }
    }
    ctx->pc = 0x35738Cu;
    // 0x35738c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35738cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357390: 0xc0d5e98  jal         func_357A60
    ctx->pc = 0x357390u;
    SET_GPR_U32(ctx, 31, 0x357398u);
    ctx->pc = 0x357394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357390u;
    // 0x357394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357A60u, 0x357390u, 0x357398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357398u;
label_357398:
    // 0x357398: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x357398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x35739c: 0xc0d5e2a  jal         func_3578A8
    ctx->pc = 0x35739Cu;
    SET_GPR_U32(ctx, 31, 0x3573A4u);
    ctx->pc = 0x3573A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35739Cu;
    // 0x3573a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578A8u, 0x35739Cu, 0x3573A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573A4u;
label_3573a4:
    // 0x3573a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3573a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3573a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3573a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3573ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3573acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573b0: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x3573b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3573b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3573b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3573b8: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x3573B8u;
    SET_GPR_U32(ctx, 31, 0x3573C0u);
    ctx->pc = 0x3573BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573B8u;
    // 0x3573bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x3573B8u, 0x3573C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573C0u;
label_3573c0:
    // 0x3573c0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x3573c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3573c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3573c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3573c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3573cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3573ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3573d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3573d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3573d4: 0xc07466e  jal         func_1D19B8
    ctx->pc = 0x3573D4u;
    SET_GPR_U32(ctx, 31, 0x3573DCu);
    ctx->pc = 0x3573D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573D4u;
    // 0x3573d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x3573D4u, 0x3573DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573DCu;
label_3573dc:
    // 0x3573dc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3573e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3573e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573e4: 0xc0742a0  jal         func_1D0A80
    ctx->pc = 0x3573E4u;
    SET_GPR_U32(ctx, 31, 0x3573ECu);
    ctx->pc = 0x3573E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573E4u;
    // 0x3573e8: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A80u, 0x3573E4u, 0x3573ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3573ECu;
label_3573ec:
    // 0x3573ec: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3573ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3573f0:
    // 0x3573f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3573f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3573f4:
    // 0x3573f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3573F4u;
    {
        const bool branch_taken_0x3573f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3573f4) {
            ctx->pc = 0x3573F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3573F4u;
            // 0x3573f8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357408u;
            goto label_357408;
        }
    }
    ctx->pc = 0x3573FCu;
    // 0x3573fc: 0xc0d5b9a  jal         func_356E68
    ctx->pc = 0x3573FCu;
    SET_GPR_U32(ctx, 31, 0x357404u);
    ctx->pc = 0x356E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356E68u, 0x3573FCu, 0x357404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357404u;
label_357404:
    // 0x357404: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x357404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_357408:
    // 0x357408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35740c:
    // 0x35740c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35740cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x357410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357414: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x357414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35741c: 0x3e00008  jr          $ra
    ctx->pc = 0x35741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35741Cu;
        // 0x357420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357424u;
    // 0x357424: 0x0  nop
    ctx->pc = 0x357424u;
    // NOP
    ctx->pc = 0x357428u;
}
