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

// Function: sub_00290480
// Address: 0x290480 - 0x290568
void sub_00290480_0x290480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290480_0x290480");
#endif

    switch (ctx->pc) {
        case 0x2904a8u: goto label_2904a8;
        case 0x2904b8u: goto label_2904b8;
        case 0x2904c0u: goto label_2904c0;
        case 0x2904d4u: goto label_2904d4;
        case 0x2904e0u: goto label_2904e0;
        case 0x2904f0u: goto label_2904f0;
        case 0x290500u: goto label_290500;
        case 0x290510u: goto label_290510;
        case 0x290544u: goto label_290544;
        default: break;
    }

    ctx->pc = 0x290480u;

    // 0x290480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290484: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x290484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x290488: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29048c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29048cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290490: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x290490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x290494: 0x8e22030c  lw          $v0, 0x30C($s1)
    ctx->pc = 0x290494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x290498: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290498u;
    {
        const bool branch_taken_0x290498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290498) {
            ctx->pc = 0x2904B0u;
            goto label_2904b0;
        }
    }
    ctx->pc = 0x2904A0u;
    // 0x2904a0: 0xc0a9758  jal         func_2A5D60
    ctx->pc = 0x2904A0u;
    SET_GPR_U32(ctx, 31, 0x2904A8u);
    ctx->pc = 0x2A5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5D60u, 0x2904A0u, 0x2904A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904A8u;
label_2904a8:
    // 0x2904a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2904A8u;
    {
        const bool branch_taken_0x2904a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2904a8) {
            ctx->pc = 0x2904B8u;
            goto label_2904b8;
        }
    }
    ctx->pc = 0x2904B0u;
label_2904b0:
    // 0x2904b0: 0xc0a7b60  jal         func_29ED80
    ctx->pc = 0x2904B0u;
    SET_GPR_U32(ctx, 31, 0x2904B8u);
    ctx->pc = 0x2904B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904B0u;
    // 0x2904b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED80u, 0x2904B0u, 0x2904B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904B8u;
label_2904b8:
    // 0x2904b8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2904B8u;
    SET_GPR_U32(ctx, 31, 0x2904C0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2904B8u, 0x2904C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904C0u;
label_2904c0:
    // 0x2904c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2904c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2904c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2904c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2904c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904cc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2904CCu;
    SET_GPR_U32(ctx, 31, 0x2904D4u);
    ctx->pc = 0x2904D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904CCu;
    // 0x2904d0: 0x24a5b3f8  addiu       $a1, $a1, -0x4C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2904CCu, 0x2904D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904D4u;
label_2904d4:
    // 0x2904d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2904d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904d8: 0xc0a71f8  jal         func_29C7E0
    ctx->pc = 0x2904D8u;
    SET_GPR_U32(ctx, 31, 0x2904E0u);
    ctx->pc = 0x2904DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904D8u;
    // 0x2904dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E0u, 0x2904D8u, 0x2904E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904E0u;
label_2904e0:
    // 0x2904e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2904e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2904e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2904E8u;
    SET_GPR_U32(ctx, 31, 0x2904F0u);
    ctx->pc = 0x2904ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904E8u;
    // 0x2904ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2904E8u, 0x2904F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904F0u;
label_2904f0:
    // 0x2904f0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2904F0u;
    {
        const bool branch_taken_0x2904f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2904F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2904F0u;
        // 0x2904f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904f0) {
            ctx->pc = 0x290508u;
            goto label_290508;
        }
    }
    ctx->pc = 0x2904F8u;
    // 0x2904f8: 0xc0a41f8  jal         func_2907E0
    ctx->pc = 0x2904F8u;
    SET_GPR_U32(ctx, 31, 0x290500u);
    ctx->pc = 0x2904FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904F8u;
    // 0x2904fc: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2907E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2907E0u, 0x2904F8u, 0x290500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290500u;
label_290500:
    // 0x290500: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290500u;
    {
        const bool branch_taken_0x290500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290500u;
        // 0x290504: 0x92220300  lbu         $v0, 0x300($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290500) {
            ctx->pc = 0x290514u;
            goto label_290514;
        }
    }
    ctx->pc = 0x290508u;
label_290508:
    // 0x290508: 0xc0a41f8  jal         func_2907E0
    ctx->pc = 0x290508u;
    SET_GPR_U32(ctx, 31, 0x290510u);
    ctx->pc = 0x29050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290508u;
    // 0x29050c: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2907E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2907E0u, 0x290508u, 0x290510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290510u;
label_290510:
    // 0x290510: 0x92220300  lbu         $v0, 0x300($s1)
    ctx->pc = 0x290510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 768)));
label_290514:
    // 0x290514: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x290514u;
    {
        const bool branch_taken_0x290514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290514) {
            ctx->pc = 0x290518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290514u;
            // 0x290518: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290554u;
            goto label_290554;
        }
    }
    ctx->pc = 0x29051Cu;
    // 0x29051c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x29051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x290520: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290520u;
    {
        const bool branch_taken_0x290520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x290524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290520u;
        // 0x290524: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290520) {
            ctx->pc = 0x290534u;
            goto label_290534;
        }
    }
    ctx->pc = 0x290528u;
    // 0x290528: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x290528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x29052c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29052Cu;
    {
        const bool branch_taken_0x29052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29052Cu;
        // 0x290530: 0x24451168  addiu       $a1, $v0, 0x1168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29052c) {
            ctx->pc = 0x29053Cu;
            goto label_29053c;
        }
    }
    ctx->pc = 0x290534u;
label_290534:
    // 0x290534: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x290534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x290538: 0x24451170  addiu       $a1, $v0, 0x1170
    ctx->pc = 0x290538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4464));
label_29053c:
    // 0x29053c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x29053Cu;
    SET_GPR_U32(ctx, 31, 0x290544u);
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29053Cu, 0x290544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290544u;
label_290544:
    // 0x290544: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x290544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x290548: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x290548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x29054c: 0xa2200300  sb          $zero, 0x300($s1)
    ctx->pc = 0x29054cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 768), (uint8_t)GPR_U32(ctx, 0));
    // 0x290550: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x290550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_290554:
    // 0x290554: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x290554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x290558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29055c: 0x3e00008  jr          $ra
    ctx->pc = 0x29055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29055Cu;
        // 0x290560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290564u;
    // 0x290564: 0x0  nop
    ctx->pc = 0x290564u;
    // NOP
    ctx->pc = 0x290568u;
}
