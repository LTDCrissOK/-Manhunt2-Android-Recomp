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

// Function: sub_002A6618
// Address: 0x2a6618 - 0x2a6a58
void sub_002A6618_0x2a6618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6618_0x2a6618");
#endif

    switch (ctx->pc) {
        case 0x2a6654u: goto label_2a6654;
        case 0x2a6668u: goto label_2a6668;
        case 0x2a6688u: goto label_2a6688;
        case 0x2a66acu: goto label_2a66ac;
        case 0x2a66bcu: goto label_2a66bc;
        case 0x2a66d4u: goto label_2a66d4;
        case 0x2a66f4u: goto label_2a66f4;
        case 0x2a6778u: goto label_2a6778;
        case 0x2a6798u: goto label_2a6798;
        case 0x2a67f8u: goto label_2a67f8;
        case 0x2a6838u: goto label_2a6838;
        case 0x2a6860u: goto label_2a6860;
        case 0x2a6884u: goto label_2a6884;
        case 0x2a68a8u: goto label_2a68a8;
        case 0x2a68b8u: goto label_2a68b8;
        case 0x2a68d0u: goto label_2a68d0;
        case 0x2a68f0u: goto label_2a68f0;
        case 0x2a6910u: goto label_2a6910;
        case 0x2a6934u: goto label_2a6934;
        case 0x2a6948u: goto label_2a6948;
        case 0x2a695cu: goto label_2a695c;
        case 0x2a6970u: goto label_2a6970;
        case 0x2a6980u: goto label_2a6980;
        case 0x2a6998u: goto label_2a6998;
        case 0x2a69acu: goto label_2a69ac;
        case 0x2a69bcu: goto label_2a69bc;
        case 0x2a69d0u: goto label_2a69d0;
        case 0x2a69e0u: goto label_2a69e0;
        case 0x2a69f4u: goto label_2a69f4;
        case 0x2a6a00u: goto label_2a6a00;
        case 0x2a6a0cu: goto label_2a6a0c;
        case 0x2a6a18u: goto label_2a6a18;
        case 0x2a6a24u: goto label_2a6a24;
        default: break;
    }

    ctx->pc = 0x2a6618u;

    // 0x2a6618: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a6618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a661c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2a661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2a6620: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2a6620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2a6624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a6624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6628: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2a6628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2a662c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a662cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6630: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2a6630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2a6634: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2a6634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2a6638: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2a6638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2a663c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2a663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2a6640: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2a6640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2a6644: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x2a6644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x2a6648: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x2a6648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x2a664c: 0xc0a7d1e  jal         func_29F478
    ctx->pc = 0x2A664Cu;
    SET_GPR_U32(ctx, 31, 0x2A6654u);
    ctx->pc = 0x2A6650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A664Cu;
    // 0x2a6650: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F478u, 0x2A664Cu, 0x2A6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6654u;
label_2a6654:
    // 0x2a6654: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a6654u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6658: 0x17c000f3  bnez        $fp, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2A6658u;
    {
        const bool branch_taken_0x2a6658 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6658u;
        // 0x2a665c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6658) {
            ctx->pc = 0x2A6A28u;
            goto label_2a6a28;
        }
    }
    ctx->pc = 0x2A6660u;
    // 0x2a6660: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A6660u;
    SET_GPR_U32(ctx, 31, 0x2A6668u);
    ctx->pc = 0x2A6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6660u;
    // 0x2a6664: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A6660u, 0x2A6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6668u;
label_2a6668:
    // 0x2a6668: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a6668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a666c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a6670: 0x24a5d788  addiu       $a1, $a1, -0x2878
    ctx->pc = 0x2a6670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956936));
    // 0x2a6674: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2a6674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2a6678: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2a6678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2a667c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6680: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A6680u;
    SET_GPR_U32(ctx, 31, 0x2A6688u);
    ctx->pc = 0x2A6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6680u;
    // 0x2a6684: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A6680u, 0x2A6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6688u;
label_2a6688:
    // 0x2a6688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a6688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a668c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A668Cu;
    {
        const bool branch_taken_0x2a668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A668Cu;
        // 0x2a6690: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a668c) {
            ctx->pc = 0x2A66C4u;
            goto label_2a66c4;
        }
    }
    ctx->pc = 0x2A6694u;
    // 0x2a6694: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2a6694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a6698: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a6698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a669c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a66a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66a4: 0xc09e45a  jal         func_279168
    ctx->pc = 0x2A66A4u;
    SET_GPR_U32(ctx, 31, 0x2A66ACu);
    ctx->pc = 0x2A66A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66A4u;
    // 0x2a66a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x2A66A4u, 0x2A66ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66ACu;
label_2a66ac:
    // 0x2a66ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a66acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a66b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66b4: 0xc0a5ca2  jal         func_297288
    ctx->pc = 0x2A66B4u;
    SET_GPR_U32(ctx, 31, 0x2A66BCu);
    ctx->pc = 0x2A66B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66B4u;
    // 0x2a66b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297288u, 0x2A66B4u, 0x2A66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66BCu;
label_2a66bc:
    // 0x2a66bc: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2A66BCu;
    {
        const bool branch_taken_0x2a66bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66BCu;
        // 0x2a66c0: 0xae8202a8  sw          $v0, 0x2A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66bc) {
            ctx->pc = 0x2A6A18u;
            goto label_2a6a18;
        }
    }
    ctx->pc = 0x2A66C4u;
label_2a66c4:
    // 0x2a66c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a66c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a66c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A66CCu;
    SET_GPR_U32(ctx, 31, 0x2A66D4u);
    ctx->pc = 0x2A66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66CCu;
    // 0x2a66d0: 0x24a5d790  addiu       $a1, $a1, -0x2870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A66CCu, 0x2A66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66D4u;
label_2a66d4:
    // 0x2a66d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a66d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a66d8: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2A66D8u;
    {
        const bool branch_taken_0x2a66d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66D8u;
        // 0x2a66dc: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a66d8) {
            ctx->pc = 0x2A6874u;
            goto label_2a6874;
        }
    }
    ctx->pc = 0x2A66E0u;
    // 0x2a66e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a66e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a66e4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2a66e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2a66e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a66e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a66ec: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2A66ECu;
    SET_GPR_U32(ctx, 31, 0x2A66F4u);
    ctx->pc = 0x2A66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A66ECu;
    // 0x2a66f0: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2A66ECu, 0x2A66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A66F4u;
label_2a66f4:
    // 0x2a66f4: 0x8e8602a4  lw          $a2, 0x2A4($s4)
    ctx->pc = 0x2a66f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
    // 0x2a66f8: 0x24d10004  addiu       $s1, $a2, 0x4
    ctx->pc = 0x2a66f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a66fc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a66fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a6700: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2a6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a6704: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A6704u;
    {
        const bool branch_taken_0x2a6704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6704u;
        // 0x2a6708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6704) {
            ctx->pc = 0x2A6730u;
            goto label_2a6730;
        }
    }
    ctx->pc = 0x2A670Cu;
    // 0x2a670c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A670Cu;
    {
        const bool branch_taken_0x2a670c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A670Cu;
        // 0x2a6710: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a670c) {
            ctx->pc = 0x2A6720u;
            goto label_2a6720;
        }
    }
    ctx->pc = 0x2A6714u;
    // 0x2a6714: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a6714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a6718: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2a6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a671c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a671cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2a6720:
    // 0x2a6720: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a6720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a6724: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2a6724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a6728: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2A6728u;
    {
        const bool branch_taken_0x2a6728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6728u;
        // 0x2a672c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6728) {
            ctx->pc = 0x2A6A18u;
            goto label_2a6a18;
        }
    }
    ctx->pc = 0x2A6730u;
label_2a6730:
    // 0x2a6730: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2a6730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6734: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2a6734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2a6738: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2a6738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a673c: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x2a673cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2a6740: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2a6740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a6744: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a6744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a6748: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a6748u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a674c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a674cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a6750: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2a6750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2a6754: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2a6754u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2a6758: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a6758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a675c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6760: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6760u;
    {
        const bool branch_taken_0x2a6760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6760) {
            ctx->pc = 0x2A6764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6760u;
            // 0x2a6764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6780u;
            goto label_2a6780;
        }
    }
    ctx->pc = 0x2A6768u;
    // 0x2a6768: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a6768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a676c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6770: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2A6770u;
    SET_GPR_U32(ctx, 31, 0x2A6778u);
    ctx->pc = 0x2A6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6770u;
    // 0x2a6774: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A6770u, 0x2A6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6778u;
label_2a6778:
    // 0x2a6778: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6778u;
    {
        const bool branch_taken_0x2a6778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6778u;
        // 0x2a677c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6778) {
            ctx->pc = 0x2A6788u;
            goto label_2a6788;
        }
    }
    ctx->pc = 0x2A6780u;
label_2a6780:
    // 0x2a6780: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a6780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6788:
    // 0x2a6788: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a6788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a678c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2a678cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6790: 0x1072000a  beq         $v1, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2A6790u;
    {
        const bool branch_taken_0x2a6790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2A6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6790u;
        // 0x2a6794: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6790) {
            ctx->pc = 0x2A67BCu;
            goto label_2a67bc;
        }
    }
    ctx->pc = 0x2A6798u;
label_2a6798:
    // 0x2a6798: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6798u;
    {
        const bool branch_taken_0x2a6798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6798) {
            ctx->pc = 0x2A679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6798u;
            // 0x2a679c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A67B4u;
            goto label_2a67b4;
        }
    }
    ctx->pc = 0x2A67A0u;
    // 0x2a67a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a67a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a67a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a67a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a67ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a67acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a67b0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2a67b4:
    // 0x2a67b4: 0x1472fff8  bne         $v1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A67B4u;
    {
        const bool branch_taken_0x2a67b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67B4u;
        // 0x2a67b8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67b4) {
            ctx->pc = 0x2A6798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6798;
        }
    }
    ctx->pc = 0x2A67BCu;
label_2a67bc:
    // 0x2a67bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a67bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67c0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2a67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2a67c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a67c8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A67C8u;
    {
        const bool branch_taken_0x2a67c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a67c8) {
            ctx->pc = 0x2A67ECu;
            goto label_2a67ec;
        }
    }
    ctx->pc = 0x2A67D0u;
    // 0x2a67d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A67D0u;
    {
        const bool branch_taken_0x2a67d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67D0u;
        // 0x2a67d4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67d0) {
            ctx->pc = 0x2A67E4u;
            goto label_2a67e4;
        }
    }
    ctx->pc = 0x2A67D8u;
    // 0x2a67d8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a67d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a67dc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2a67dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a67e0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a67e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a67e4:
    // 0x2a67e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A67E4u;
    {
        const bool branch_taken_0x2a67e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67E4u;
        // 0x2a67e8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67e4) {
            ctx->pc = 0x2A6820u;
            goto label_2a6820;
        }
    }
    ctx->pc = 0x2A67ECu;
label_2a67ec:
    // 0x2a67ec: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A67ECu;
    {
        const bool branch_taken_0x2a67ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67ECu;
        // 0x2a67f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67ec) {
            ctx->pc = 0x2A6818u;
            goto label_2a6818;
        }
    }
    ctx->pc = 0x2A67F4u;
    // 0x2a67f4: 0x0  nop
    ctx->pc = 0x2a67f4u;
    // NOP
label_2a67f8:
    // 0x2a67f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A67F8u;
    {
        const bool branch_taken_0x2a67f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A67F8u;
        // 0x2a67fc: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a67f8) {
            ctx->pc = 0x2A680Cu;
            goto label_2a680c;
        }
    }
    ctx->pc = 0x2A6800u;
    // 0x2a6800: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a6800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a6804: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2a6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6808: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a6808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a680c:
    // 0x2a680c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a6810: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A6810u;
    {
        const bool branch_taken_0x2a6810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6810u;
        // 0x2a6814: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6810) {
            ctx->pc = 0x2A67F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a67f8;
        }
    }
    ctx->pc = 0x2A6818u;
label_2a6818:
    // 0x2a6818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a681c: 0x0  nop
    ctx->pc = 0x2a681cu;
    // NOP
label_2a6820:
    // 0x2a6820: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a6820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a6824: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a6828: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6828u;
    {
        const bool branch_taken_0x2a6828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6828u;
        // 0x2a682c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6828) {
            ctx->pc = 0x2A6850u;
            goto label_2a6850;
        }
    }
    ctx->pc = 0x2A6830u;
    // 0x2a6830: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2a6830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a6834: 0x0  nop
    ctx->pc = 0x2a6834u;
    // NOP
label_2a6838:
    // 0x2a6838: 0x0  nop
    ctx->pc = 0x2a6838u;
    // NOP
    // 0x2a683c: 0x0  nop
    ctx->pc = 0x2a683cu;
    // NOP
    // 0x2a6840: 0x0  nop
    ctx->pc = 0x2a6840u;
    // NOP
    // 0x2a6844: 0x0  nop
    ctx->pc = 0x2a6844u;
    // NOP
    // 0x2a6848: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A6848u;
    {
        const bool branch_taken_0x2a6848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6848u;
        // 0x2a684c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6848) {
            ctx->pc = 0x2A6838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6838;
        }
    }
    ctx->pc = 0x2A6850u;
label_2a6850:
    // 0x2a6850: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6850u;
    {
        const bool branch_taken_0x2a6850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6850u;
        // 0x2a6854: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6850) {
            ctx->pc = 0x2A6864u;
            goto label_2a6864;
        }
    }
    ctx->pc = 0x2A6858u;
    // 0x2a6858: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A6858u;
    SET_GPR_U32(ctx, 31, 0x2A6860u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A6858u, 0x2A6860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6860u;
label_2a6860:
    // 0x2a6860: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x2a6860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_2a6864:
    // 0x2a6864: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2a6864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2a6868: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2a6868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2a686c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2A686Cu;
    {
        const bool branch_taken_0x2a686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A686Cu;
        // 0x2a6870: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a686c) {
            ctx->pc = 0x2A6A18u;
            goto label_2a6a18;
        }
    }
    ctx->pc = 0x2A6874u;
label_2a6874:
    // 0x2a6874: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a6874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a6878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a687c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A687Cu;
    SET_GPR_U32(ctx, 31, 0x2A6884u);
    ctx->pc = 0x2A6880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A687Cu;
    // 0x2a6880: 0x24a5d7a0  addiu       $a1, $a1, -0x2860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A687Cu, 0x2A6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6884u;
label_2a6884:
    // 0x2a6884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a6884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a6888: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A6888u;
    {
        const bool branch_taken_0x2a6888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6888u;
        // 0x2a688c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6888) {
            ctx->pc = 0x2A68C0u;
            goto label_2a68c0;
        }
    }
    ctx->pc = 0x2A6890u;
    // 0x2a6890: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2a6890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a6894: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a6894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6898: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a6898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a689c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a689cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68a0: 0xc09e45a  jal         func_279168
    ctx->pc = 0x2A68A0u;
    SET_GPR_U32(ctx, 31, 0x2A68A8u);
    ctx->pc = 0x2A68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68A0u;
    // 0x2a68a4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279168u, 0x2A68A0u, 0x2A68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68A8u;
label_2a68a8:
    // 0x2a68a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a68a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a68acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68b0: 0xc0a5ca2  jal         func_297288
    ctx->pc = 0x2A68B0u;
    SET_GPR_U32(ctx, 31, 0x2A68B8u);
    ctx->pc = 0x2A68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68B0u;
    // 0x2a68b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297288u, 0x2A68B0u, 0x2A68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68B8u;
label_2a68b8:
    // 0x2a68b8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2A68B8u;
    {
        const bool branch_taken_0x2a68b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68B8u;
        // 0x2a68bc: 0xae8202ac  sw          $v0, 0x2AC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68b8) {
            ctx->pc = 0x2A6A18u;
            goto label_2a6a18;
        }
    }
    ctx->pc = 0x2A68C0u;
label_2a68c0:
    // 0x2a68c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a68c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a68c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a68c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A68C8u;
    SET_GPR_U32(ctx, 31, 0x2A68D0u);
    ctx->pc = 0x2A68CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68C8u;
    // 0x2a68cc: 0x24a5d7b0  addiu       $a1, $a1, -0x2850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A68C8u, 0x2A68D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68D0u;
label_2a68d0:
    // 0x2a68d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a68d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a68d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A68D4u;
    {
        const bool branch_taken_0x2a68d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68D4u;
        // 0x2a68d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68d4) {
            ctx->pc = 0x2A6900u;
            goto label_2a6900;
        }
    }
    ctx->pc = 0x2A68DCu;
    // 0x2a68dc: 0x8e850294  lw          $a1, 0x294($s4)
    ctx->pc = 0x2a68dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 660)));
    // 0x2a68e0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2a68e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a68e4: 0x24a5027c  addiu       $a1, $a1, 0x27C
    ctx->pc = 0x2a68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
    // 0x2a68e8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x2A68E8u;
    SET_GPR_U32(ctx, 31, 0x2A68F0u);
    ctx->pc = 0x2A68ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68E8u;
    // 0x2a68ec: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x2A68E8u, 0x2A68F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68F0u;
label_2a68f0:
    // 0x2a68f0: 0x8e820294  lw          $v0, 0x294($s4)
    ctx->pc = 0x2a68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 660)));
    // 0x2a68f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a68f8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A68F8u;
    {
        const bool branch_taken_0x2a68f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68F8u;
        // 0x2a68fc: 0xae820294  sw          $v0, 0x294($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68f8) {
            ctx->pc = 0x2A6A18u;
            goto label_2a6a18;
        }
    }
    ctx->pc = 0x2A6900u;
label_2a6900:
    // 0x2a6900: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a6904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6908: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A6908u;
    SET_GPR_U32(ctx, 31, 0x2A6910u);
    ctx->pc = 0x2A690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6908u;
    // 0x2a690c: 0x24a5d7c8  addiu       $a1, $a1, -0x2838 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A6908u, 0x2A6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6910u;
label_2a6910:
    // 0x2a6910: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a6910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a6914: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2A6914u;
    {
        const bool branch_taken_0x2a6914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6914u;
        // 0x2a6918: 0x3c110047  lui         $s1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6914) {
            ctx->pc = 0x2A6A18u;
            goto label_2a6a18;
        }
    }
    ctx->pc = 0x2A691Cu;
    // 0x2a691c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2a691cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6920: 0x2631d770  addiu       $s1, $s1, -0x2890
    ctx->pc = 0x2a6920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956912));
    // 0x2a6924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a6924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a6928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a692c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A692Cu;
    SET_GPR_U32(ctx, 31, 0x2A6934u);
    ctx->pc = 0x2A6930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A692Cu;
    // 0x2a6930: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A692Cu, 0x2A6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6934u;
label_2a6934:
    // 0x2a6934: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2a6934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a6938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a693c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6940: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A6940u;
    SET_GPR_U32(ctx, 31, 0x2A6948u);
    ctx->pc = 0x2A6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6940u;
    // 0x2a6944: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A6940u, 0x2A6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6948u;
label_2a6948:
    // 0x2a6948: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2a6948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a694c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a694cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6954: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A6954u;
    SET_GPR_U32(ctx, 31, 0x2A695Cu);
    ctx->pc = 0x2A6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6954u;
    // 0x2a6958: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A6954u, 0x2A695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A695Cu;
label_2a695c:
    // 0x2a695c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a695cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6960: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a6960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6964: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a6964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6968: 0xc09e106  jal         func_278418
    ctx->pc = 0x2A6968u;
    SET_GPR_U32(ctx, 31, 0x2A6970u);
    ctx->pc = 0x2A696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6968u;
    // 0x2a696c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278418u, 0x2A6968u, 0x2A6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6970u;
label_2a6970:
    // 0x2a6970: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a6970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a6974: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a6974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6978: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A6978u;
    SET_GPR_U32(ctx, 31, 0x2A6980u);
    ctx->pc = 0x2A697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6978u;
    // 0x2a697c: 0x24a5d7d8  addiu       $a1, $a1, -0x2828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A6978u, 0x2A6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6980u;
label_2a6980:
    // 0x2a6980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a6980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a6984: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A6984u;
    {
        const bool branch_taken_0x2a6984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6984u;
        // 0x2a6988: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6984) {
            ctx->pc = 0x2A69F4u;
            goto label_2a69f4;
        }
    }
    ctx->pc = 0x2A698Cu;
    // 0x2a698c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6990: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A6990u;
    SET_GPR_U32(ctx, 31, 0x2A6998u);
    ctx->pc = 0x2A6994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6990u;
    // 0x2a6994: 0x24a5d7e0  addiu       $a1, $a1, -0x2820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A6990u, 0x2A6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6998u;
label_2a6998:
    // 0x2a6998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a6998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a699c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A699Cu;
    {
        const bool branch_taken_0x2a699c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A699Cu;
        // 0x2a69a0: 0x268402d9  addiu       $a0, $s4, 0x2D9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 729));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a699c) {
            ctx->pc = 0x2A69ACu;
            goto label_2a69ac;
        }
    }
    ctx->pc = 0x2A69A4u;
    // 0x2a69a4: 0xc0a96a6  jal         func_2A5A98
    ctx->pc = 0x2A69A4u;
    SET_GPR_U32(ctx, 31, 0x2A69ACu);
    ctx->pc = 0x2A69A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69A4u;
    // 0x2a69a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A98u, 0x2A69A4u, 0x2A69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69ACu;
label_2a69ac:
    // 0x2a69ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a69acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a69b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a69b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A69B4u;
    SET_GPR_U32(ctx, 31, 0x2A69BCu);
    ctx->pc = 0x2A69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69B4u;
    // 0x2a69b8: 0x24a5d7f0  addiu       $a1, $a1, -0x2810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A69B4u, 0x2A69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69BCu;
label_2a69bc:
    // 0x2a69bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a69bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a69c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A69C0u;
    {
        const bool branch_taken_0x2a69c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69C0u;
        // 0x2a69c4: 0x268402da  addiu       $a0, $s4, 0x2DA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69c0) {
            ctx->pc = 0x2A69D0u;
            goto label_2a69d0;
        }
    }
    ctx->pc = 0x2A69C8u;
    // 0x2a69c8: 0xc0a96a6  jal         func_2A5A98
    ctx->pc = 0x2A69C8u;
    SET_GPR_U32(ctx, 31, 0x2A69D0u);
    ctx->pc = 0x2A69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69C8u;
    // 0x2a69cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A98u, 0x2A69C8u, 0x2A69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69D0u;
label_2a69d0:
    // 0x2a69d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a69d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a69d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A69D8u;
    SET_GPR_U32(ctx, 31, 0x2A69E0u);
    ctx->pc = 0x2A69DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69D8u;
    // 0x2a69dc: 0x24a5d800  addiu       $a1, $a1, -0x2800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A69D8u, 0x2A69E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69E0u;
label_2a69e0:
    // 0x2a69e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a69e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a69e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A69E4u;
    {
        const bool branch_taken_0x2a69e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69E4u;
        // 0x2a69e8: 0x268402db  addiu       $a0, $s4, 0x2DB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 731));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69e4) {
            ctx->pc = 0x2A69F4u;
            goto label_2a69f4;
        }
    }
    ctx->pc = 0x2A69ECu;
    // 0x2a69ec: 0xc0a96a6  jal         func_2A5A98
    ctx->pc = 0x2A69ECu;
    SET_GPR_U32(ctx, 31, 0x2A69F4u);
    ctx->pc = 0x2A69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69ECu;
    // 0x2a69f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A98u, 0x2A69ECu, 0x2A69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69F4u;
label_2a69f4:
    // 0x2a69f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a69f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69f8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A69F8u;
    SET_GPR_U32(ctx, 31, 0x2A6A00u);
    ctx->pc = 0x2A69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69F8u;
    // 0x2a69fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A69F8u, 0x2A6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A00u;
label_2a6a00:
    // 0x2a6a00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a6a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a04: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A6A04u;
    SET_GPR_U32(ctx, 31, 0x2A6A0Cu);
    ctx->pc = 0x2A6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A04u;
    // 0x2a6a08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A6A04u, 0x2A6A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A0Cu;
label_2a6a0c:
    // 0x2a6a0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a6a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a10: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A6A10u;
    SET_GPR_U32(ctx, 31, 0x2A6A18u);
    ctx->pc = 0x2A6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A10u;
    // 0x2a6a14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A6A10u, 0x2A6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A18u;
label_2a6a18:
    // 0x2a6a18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a6a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a1c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A6A1Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A24u);
    ctx->pc = 0x2A6A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A1Cu;
    // 0x2a6a20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A6A1Cu, 0x2A6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A24u;
label_2a6a24:
    // 0x2a6a24: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2a6a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a6a28:
    // 0x2a6a28: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2a6a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a6a2c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2a6a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a6a30: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2a6a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a6a34: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2a6a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a6a38: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2a6a38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a6a3c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2a6a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2a6a40: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2a6a40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a6a44: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2a6a44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a6a48: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2a6a48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6a4c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2a6a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2a6a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A50u;
        // 0x2a6a54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6A58u;
}
