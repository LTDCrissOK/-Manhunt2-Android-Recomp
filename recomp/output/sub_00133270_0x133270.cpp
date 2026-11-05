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

// Function: sub_00133270
// Address: 0x133270 - 0x133330
void sub_00133270_0x133270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133270_0x133270");
#endif

    switch (ctx->pc) {
        case 0x1332a0u: goto label_1332a0;
        case 0x1332b8u: goto label_1332b8;
        case 0x1332dcu: goto label_1332dc;
        case 0x1332e8u: goto label_1332e8;
        case 0x1332f4u: goto label_1332f4;
        case 0x133308u: goto label_133308;
        case 0x133310u: goto label_133310;
        default: break;
    }

    ctx->pc = 0x133270u;

    // 0x133270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x133278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13327c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x133280: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x133280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133284: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x133284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x133288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13328c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x13328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x133290: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133290u;
    {
        const bool branch_taken_0x133290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x133294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133290u;
        // 0x133294: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133290) {
            ctx->pc = 0x1332A8u;
            goto label_1332a8;
        }
    }
    ctx->pc = 0x133298u;
    // 0x133298: 0xc042448  jal         func_109120
    ctx->pc = 0x133298u;
    SET_GPR_U32(ctx, 31, 0x1332A0u);
    ctx->pc = 0x109120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109120u, 0x133298u, 0x1332A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332A0u;
label_1332a0:
    // 0x1332a0: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1332A0u;
    {
        const bool branch_taken_0x1332a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1332a0) {
            ctx->pc = 0x1332B0u;
            goto label_1332b0;
        }
    }
    ctx->pc = 0x1332A8u;
label_1332a8:
    // 0x1332a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1332A8u;
    {
        const bool branch_taken_0x1332a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332A8u;
        // 0x1332ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332a8) {
            ctx->pc = 0x133314u;
            goto label_133314;
        }
    }
    ctx->pc = 0x1332B0u;
label_1332b0:
    // 0x1332b0: 0xc042444  jal         func_109110
    ctx->pc = 0x1332B0u;
    SET_GPR_U32(ctx, 31, 0x1332B8u);
    ctx->pc = 0x1332B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332B0u;
    // 0x1332b4: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109110u, 0x1332B0u, 0x1332B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332B8u;
label_1332b8:
    // 0x1332b8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1332b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1332bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1332bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1332c0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1332c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1332c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1332c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1332c8: 0x8c73020c  lw          $s3, 0x20C($v1)
    ctx->pc = 0x1332c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x1332cc: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1332CCu;
    {
        const bool branch_taken_0x1332cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332cc) {
            ctx->pc = 0x133308u;
            goto label_133308;
        }
    }
    ctx->pc = 0x1332D4u;
    // 0x1332d4: 0xc042442  jal         func_109108
    ctx->pc = 0x1332D4u;
    SET_GPR_U32(ctx, 31, 0x1332DCu);
    ctx->pc = 0x1332D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332D4u;
    // 0x1332d8: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x1332D4u, 0x1332DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332DCu;
label_1332dc:
    // 0x1332dc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1332dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1332e0: 0xc04244e  jal         func_109138
    ctx->pc = 0x1332E0u;
    SET_GPR_U32(ctx, 31, 0x1332E8u);
    ctx->pc = 0x1332E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332E0u;
    // 0x1332e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109138u, 0x1332E0u, 0x1332E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332E8u;
label_1332e8:
    // 0x1332e8: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1332e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1332ec: 0xc04244c  jal         func_109130
    ctx->pc = 0x1332ECu;
    SET_GPR_U32(ctx, 31, 0x1332F4u);
    ctx->pc = 0x1332F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332ECu;
    // 0x1332f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109130u, 0x1332ECu, 0x1332F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332F4u;
label_1332f4:
    // 0x1332f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1332f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1332f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1332fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133300: 0xc043baa  jal         func_10EEA8
    ctx->pc = 0x133300u;
    SET_GPR_U32(ctx, 31, 0x133308u);
    ctx->pc = 0x133304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133300u;
    // 0x133304: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EEA8u, 0x133300u, 0x133308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133308u;
label_133308:
    // 0x133308: 0xc04cc10  jal         func_133040
    ctx->pc = 0x133308u;
    SET_GPR_U32(ctx, 31, 0x133310u);
    ctx->pc = 0x13330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133308u;
    // 0x13330c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x133308u, 0x133310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133310u;
label_133310:
    // 0x133310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133314:
    // 0x133314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13331c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13331cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133320: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x133320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x133324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x133324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133328: 0x3e00008  jr          $ra
    ctx->pc = 0x133328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133328u;
        // 0x13332c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133330u;
}
