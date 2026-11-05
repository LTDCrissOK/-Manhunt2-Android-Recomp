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

// Function: sub_001F6650
// Address: 0x1f6650 - 0x1f67f0
void sub_001F6650_0x1f6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6650_0x1f6650");
#endif

    switch (ctx->pc) {
        case 0x1f669cu: goto label_1f669c;
        case 0x1f66b0u: goto label_1f66b0;
        case 0x1f66c0u: goto label_1f66c0;
        case 0x1f66ccu: goto label_1f66cc;
        case 0x1f66d8u: goto label_1f66d8;
        case 0x1f66e4u: goto label_1f66e4;
        case 0x1f66f0u: goto label_1f66f0;
        case 0x1f6708u: goto label_1f6708;
        case 0x1f671cu: goto label_1f671c;
        case 0x1f672cu: goto label_1f672c;
        case 0x1f6738u: goto label_1f6738;
        case 0x1f6744u: goto label_1f6744;
        case 0x1f6750u: goto label_1f6750;
        case 0x1f675cu: goto label_1f675c;
        case 0x1f676cu: goto label_1f676c;
        case 0x1f6778u: goto label_1f6778;
        case 0x1f6780u: goto label_1f6780;
        case 0x1f6794u: goto label_1f6794;
        case 0x1f679cu: goto label_1f679c;
        case 0x1f67a8u: goto label_1f67a8;
        case 0x1f67c4u: goto label_1f67c4;
        case 0x1f67ccu: goto label_1f67cc;
        default: break;
    }

    ctx->pc = 0x1f6650u;

    // 0x1f6650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f6654: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1f6654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1f6658: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1f6658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1f665c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f665cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6660: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1f6660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1f6664: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f6664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f6668: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1f6668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1f666c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1f666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1f6670: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f6674: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1F6674u;
    {
        const bool branch_taken_0x1f6674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6674u;
        // 0x1f6678: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6674) {
            ctx->pc = 0x1F67D0u;
            goto label_1f67d0;
        }
    }
    ctx->pc = 0x1F667Cu;
    // 0x1f667c: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x1f667cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    // 0x1f6680: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1f6680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f6684: 0x2673ec20  addiu       $s3, $s3, -0x13E0
    ctx->pc = 0x1f6684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962208));
    // 0x1f6688: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1f6688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1f668c: 0x26100460  addiu       $s0, $s0, 0x460
    ctx->pc = 0x1f668cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1120));
    // 0x1f6690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6694: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1F6694u;
    SET_GPR_U32(ctx, 31, 0x1F669Cu);
    ctx->pc = 0x1F6698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6694u;
    // 0x1f6698: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1F6694u, 0x1F669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F669Cu;
label_1f669c:
    // 0x1f669c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1f669cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f66a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f66a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f66a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f66a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66a8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1F66A8u;
    SET_GPR_U32(ctx, 31, 0x1F66B0u);
    ctx->pc = 0x1F66ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66A8u;
    // 0x1f66ac: 0x24a5fe30  addiu       $a1, $a1, -0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1F66A8u, 0x1F66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66B0u;
label_1f66b0:
    // 0x1f66b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f66b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f66b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66b8: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x1F66B8u;
    SET_GPR_U32(ctx, 31, 0x1F66C0u);
    ctx->pc = 0x1F66BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66B8u;
    // 0x1f66bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x1F66B8u, 0x1F66C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66C0u;
label_1f66c0:
    // 0x1f66c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f66c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66c4: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x1F66C4u;
    SET_GPR_U32(ctx, 31, 0x1F66CCu);
    ctx->pc = 0x1F66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66C4u;
    // 0x1f66c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1F66C4u, 0x1F66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66CCu;
label_1f66cc:
    // 0x1f66cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f66ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66d0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1F66D0u;
    SET_GPR_U32(ctx, 31, 0x1F66D8u);
    ctx->pc = 0x1F66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66D0u;
    // 0x1f66d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1F66D0u, 0x1F66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66D8u;
label_1f66d8:
    // 0x1f66d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66dc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1F66DCu;
    SET_GPR_U32(ctx, 31, 0x1F66E4u);
    ctx->pc = 0x1F66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66DCu;
    // 0x1f66e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1F66DCu, 0x1F66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66E4u;
label_1f66e4:
    // 0x1f66e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f66e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f66e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1F66E8u;
    SET_GPR_U32(ctx, 31, 0x1F66F0u);
    ctx->pc = 0x1F66ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F66E8u;
    // 0x1f66ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1F66E8u, 0x1F66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66F0u;
label_1f66f0:
    // 0x1f66f0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f66f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f66f4: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1f66f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1f66f8: 0x26100468  addiu       $s0, $s0, 0x468
    ctx->pc = 0x1f66f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1128));
    // 0x1f66fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f66fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6700: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1F6700u;
    SET_GPR_U32(ctx, 31, 0x1F6708u);
    ctx->pc = 0x1F6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6700u;
    // 0x1f6704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1F6700u, 0x1F6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6708u;
label_1f6708:
    // 0x1f6708: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1f6708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f670c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f670cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f6710: 0x24a5fe38  addiu       $a1, $a1, -0x1C8
    ctx->pc = 0x1f6710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966840));
    // 0x1f6714: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1F6714u;
    SET_GPR_U32(ctx, 31, 0x1F671Cu);
    ctx->pc = 0x1F6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6714u;
    // 0x1f6718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1F6714u, 0x1F671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F671Cu;
label_1f671c:
    // 0x1f671c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6720: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f6720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6724: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x1F6724u;
    SET_GPR_U32(ctx, 31, 0x1F672Cu);
    ctx->pc = 0x1F6728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6724u;
    // 0x1f6728: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x1F6724u, 0x1F672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F672Cu;
label_1f672c:
    // 0x1f672c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6730: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x1F6730u;
    SET_GPR_U32(ctx, 31, 0x1F6738u);
    ctx->pc = 0x1F6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6730u;
    // 0x1f6734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1F6730u, 0x1F6738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6738u;
label_1f6738:
    // 0x1f6738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f6738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f673c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1F673Cu;
    SET_GPR_U32(ctx, 31, 0x1F6744u);
    ctx->pc = 0x1F6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F673Cu;
    // 0x1f6740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1F673Cu, 0x1F6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6744u;
label_1f6744:
    // 0x1f6744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6748: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1F6748u;
    SET_GPR_U32(ctx, 31, 0x1F6750u);
    ctx->pc = 0x1F674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6748u;
    // 0x1f674c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1F6748u, 0x1F6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6750u;
label_1f6750:
    // 0x1f6750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6754: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1F6754u;
    SET_GPR_U32(ctx, 31, 0x1F675Cu);
    ctx->pc = 0x1F6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6754u;
    // 0x1f6758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1F6754u, 0x1F675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F675Cu;
label_1f675c:
    // 0x1f675c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1f675cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1f6760: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f6760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f6764: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x1F6764u;
    SET_GPR_U32(ctx, 31, 0x1F676Cu);
    ctx->pc = 0x1F6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6764u;
    // 0x1f6768: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x1F6764u, 0x1F676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F676Cu;
label_1f676c:
    // 0x1f676c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f676cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6770: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1F6770u;
    SET_GPR_U32(ctx, 31, 0x1F6778u);
    ctx->pc = 0x1F6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6770u;
    // 0x1f6774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1F6770u, 0x1F6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6778u;
label_1f6778:
    // 0x1f6778: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1F6778u;
    SET_GPR_U32(ctx, 31, 0x1F6780u);
    ctx->pc = 0x1F677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6778u;
    // 0x1f677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1F6778u, 0x1F6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6780u;
label_1f6780:
    // 0x1f6780: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6788: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1f6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f678c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1F678Cu;
    SET_GPR_U32(ctx, 31, 0x1F6794u);
    ctx->pc = 0x1F6790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F678Cu;
    // 0x1f6790: 0xac5015c8  sw          $s0, 0x15C8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 5576), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1F678Cu, 0x1F6794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6794u;
label_1f6794:
    // 0x1f6794: 0xc07bb3c  jal         func_1EECF0
    ctx->pc = 0x1F6794u;
    SET_GPR_U32(ctx, 31, 0x1F679Cu);
    ctx->pc = 0x1F6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6794u;
    // 0x1f6798: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EECF0u, 0x1F6794u, 0x1F679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F679Cu;
label_1f679c:
    // 0x1f679c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f679cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f67a0: 0xc080834  jal         func_2020D0
    ctx->pc = 0x1F67A0u;
    SET_GPR_U32(ctx, 31, 0x1F67A8u);
    ctx->pc = 0x1F67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67A0u;
    // 0x1f67a4: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2020D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2020D0u, 0x1F67A0u, 0x1F67A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67A8u;
label_1f67a8:
    // 0x1f67a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F67A8u;
    {
        const bool branch_taken_0x1f67a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67A8u;
        // 0x1f67ac: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67a8) {
            ctx->pc = 0x1F67CCu;
            goto label_1f67cc;
        }
    }
    ctx->pc = 0x1F67B0u;
    // 0x1f67b0: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1f67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f67b4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f67b8: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x1f67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    // 0x1f67bc: 0xc07f748  jal         func_1FDD20
    ctx->pc = 0x1F67BCu;
    SET_GPR_U32(ctx, 31, 0x1F67C4u);
    ctx->pc = 0x1F67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67BCu;
    // 0x1f67c0: 0xa2820008  sb          $v0, 0x8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD20u, 0x1F67BCu, 0x1F67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67C4u;
label_1f67c4:
    // 0x1f67c4: 0xc07bb3e  jal         func_1EECF8
    ctx->pc = 0x1F67C4u;
    SET_GPR_U32(ctx, 31, 0x1F67CCu);
    ctx->pc = 0x1F67C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67C4u;
    // 0x1f67c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EECF8u, 0x1F67C4u, 0x1F67CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67CCu;
label_1f67cc:
    // 0x1f67cc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1f67ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f67d0:
    // 0x1f67d0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1f67d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f67d4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f67d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f67d8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1f67d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f67dc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1f67dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f67e0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1f67e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f67e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F67E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67E4u;
        // 0x1f67e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F67E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F67ECu;
    // 0x1f67ec: 0x0  nop
    ctx->pc = 0x1f67ecu;
    // NOP
    ctx->pc = 0x1f67f0u;
}
