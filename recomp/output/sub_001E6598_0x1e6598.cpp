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

// Function: sub_001E6598
// Address: 0x1e6598 - 0x1e70c0
void sub_001E6598_0x1e6598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6598_0x1e6598");
#endif

    switch (ctx->pc) {
        case 0x1e6644u: goto label_1e6644;
        case 0x1e6658u: goto label_1e6658;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6690u: goto label_1e6690;
        case 0x1e6698u: goto label_1e6698;
        case 0x1e66a8u: goto label_1e66a8;
        case 0x1e6744u: goto label_1e6744;
        case 0x1e6768u: goto label_1e6768;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e6804u: goto label_1e6804;
        case 0x1e69d8u: goto label_1e69d8;
        case 0x1e69e0u: goto label_1e69e0;
        case 0x1e69e8u: goto label_1e69e8;
        case 0x1e69f4u: goto label_1e69f4;
        case 0x1e6a00u: goto label_1e6a00;
        case 0x1e6a28u: goto label_1e6a28;
        case 0x1e6a40u: goto label_1e6a40;
        case 0x1e6a64u: goto label_1e6a64;
        case 0x1e6a8cu: goto label_1e6a8c;
        case 0x1e6a9cu: goto label_1e6a9c;
        case 0x1e6ac4u: goto label_1e6ac4;
        case 0x1e6b50u: goto label_1e6b50;
        case 0x1e6c38u: goto label_1e6c38;
        case 0x1e6c50u: goto label_1e6c50;
        case 0x1e6c64u: goto label_1e6c64;
        case 0x1e6c74u: goto label_1e6c74;
        case 0x1e6c98u: goto label_1e6c98;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d40u: goto label_1e6d40;
        case 0x1e6df0u: goto label_1e6df0;
        case 0x1e6df8u: goto label_1e6df8;
        case 0x1e6e28u: goto label_1e6e28;
        case 0x1e7028u: goto label_1e7028;
        default: break;
    }

    ctx->pc = 0x1e6598u;

    // 0x1e6598: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e6598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e659c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e65a0: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x1e65a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x1e65a4: 0x8c4391e0  lw          $v1, -0x6E20($v0)
    ctx->pc = 0x1e65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91E0u));
    // 0x1e65a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e65a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65ac: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1e65acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x1e65b0: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1e65b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x1e65b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e65b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65b8: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1e65b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x1e65bc: 0x2c620050  sltiu       $v0, $v1, 0x50
    ctx->pc = 0x1e65bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e65c0: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1e65c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x1e65c4: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1e65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x1e65c8: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1e65c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x1e65cc: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1e65ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x1e65d0: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x1e65d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x1e65d4: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x1e65d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x1e65d8: 0x104002ac  beqz        $v0, . + 4 + (0x2AC << 2)
    ctx->pc = 0x1E65D8u;
    {
        const bool branch_taken_0x1e65d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65D8u;
        // 0x1e65dc: 0xafa50094  sw          $a1, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65d8) {
            ctx->pc = 0x1E708Cu;
            goto label_1e708c;
        }
    }
    ctx->pc = 0x1E65E0u;
    // 0x1e65e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e65e4: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1e65e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e65e8: 0xc440d94c  lwc1        $f0, -0x26B4($v0)
    ctx->pc = 0x1e65e8u;
    { uint32_t bits = FAST_READ32(0x45D94Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e65ec: 0x8ca400c4  lw          $a0, 0xC4($a1)
    ctx->pc = 0x1e65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1e65f0: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1e65f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x1e65f4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1e65f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1e65f8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1e65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e65fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1e65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e6600: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1e6600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6604: 0x8c770010  lw          $s7, 0x10($v1)
    ctx->pc = 0x1e6604u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e6608: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x1e6608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x1e660c: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x1e660cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e6610: 0x12e00183  beqz        $s7, . + 4 + (0x183 << 2)
    ctx->pc = 0x1E6610u;
    {
        const bool branch_taken_0x1e6610 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6610u;
        // 0x1e6614: 0x8c56000c  lw          $s6, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6610) {
            ctx->pc = 0x1E6C20u;
            goto label_1e6c20;
        }
    }
    ctx->pc = 0x1E6618u;
    // 0x1e6618: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1e661c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e6620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6620u;
    {
        const bool branch_taken_0x1e6620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6620u;
        // 0x1e6624: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6620) {
            ctx->pc = 0x1E6634u;
            goto label_1e6634;
        }
    }
    ctx->pc = 0x1E6628u;
    // 0x1e6628: 0x56a000e8  bnel        $s5, $zero, . + 4 + (0xE8 << 2)
    ctx->pc = 0x1E6628u;
    {
        const bool branch_taken_0x1e6628 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6628) {
            ctx->pc = 0x1E662Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6628u;
            // 0x1e662c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E69CCu;
            goto label_1e69cc;
        }
    }
    ctx->pc = 0x1E6630u;
    // 0x1e6630: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x1e6630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1e6634:
    // 0x1e6634: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e6634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6638: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1e6638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1e663c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1E663Cu;
    SET_GPR_U32(ctx, 31, 0x1E6644u);
    ctx->pc = 0x1E6640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E663Cu;
    // 0x1e6640: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1E663Cu, 0x1E6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6644u;
label_1e6644:
    // 0x1e6644: 0x26160040  addiu       $s6, $s0, 0x40
    ctx->pc = 0x1e6644u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1e6648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e664c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e664cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6650: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x1E6650u;
    SET_GPR_U32(ctx, 31, 0x1E6658u);
    ctx->pc = 0x1E6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6650u;
    // 0x1e6654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x1E6650u, 0x1E6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6658u;
label_1e6658:
    // 0x1e6658: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E6658u;
    SET_GPR_U32(ctx, 31, 0x1E6660u);
    ctx->pc = 0x1E665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6658u;
    // 0x1e665c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E6658u, 0x1E6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6660u;
label_1e6660:
    // 0x1e6660: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1e6660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1e6664: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1e6664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1e6668: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x1e6668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
    // 0x1e666c: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1e666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1e6670: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e6674: 0x104001d7  beqz        $v0, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1E6674u;
    {
        const bool branch_taken_0x1e6674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6674u;
        // 0x1e6678: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6674) {
            ctx->pc = 0x1E6DD4u;
            goto label_1e6dd4;
        }
    }
    ctx->pc = 0x1E667Cu;
    // 0x1e667c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1e667cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1e6680: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e6680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e6684: 0xafb000a4  sw          $s0, 0xA4($sp)
    ctx->pc = 0x1e6684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
    // 0x1e6688: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1e6688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1e668c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e668cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e6690:
    // 0x1e6690: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6690u;
    SET_GPR_U32(ctx, 31, 0x1E6698u);
    ctx->pc = 0x1E6694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6690u;
    // 0x1e6694: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6690u, 0x1E6698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6698u;
label_1e6698:
    // 0x1e6698: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e6698u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e669c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1e669cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e66a0: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E66A0u;
    SET_GPR_U32(ctx, 31, 0x1E66A8u);
    ctx->pc = 0x1E66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E66A0u;
    // 0x1e66a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E66A0u, 0x1E66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E66A8u;
label_1e66a8:
    // 0x1e66a8: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x1E66A8u;
    {
        const bool branch_taken_0x1e66a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66A8u;
        // 0x1e66ac: 0x26a30010  addiu       $v1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66a8) {
            ctx->pc = 0x1E69B0u;
            goto label_1e69b0;
        }
    }
    ctx->pc = 0x1E66B0u;
    // 0x1e66b0: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x1e66b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e66b4: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1e66b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1e66b8: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1e66b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e66bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e66bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e66c0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1e66c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e66c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e66c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e66c8: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x1e66c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e66cc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e66ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e66d0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e66d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e66d4: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x1e66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1e66d8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e66d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e66dc: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x1e66dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e66e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e66e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e66e4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1e66e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e66e8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e66ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e66ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e66f0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e66f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e66f4: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e66f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e66f8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e66f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e66fc: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1e66fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6700: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e6700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e6704: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e6704u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e6708: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e6708u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e670c: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x1e670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e6710: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1e6710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e6714: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e6714u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6718: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e6718u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e671c: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1e671cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6720: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1e6720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6724: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1e6724u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6728: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e6728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e672c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e672cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e6730: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e6730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e6734: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x1e6734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e6738: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e673c: 0xc07a3b0  jal         func_1E8EC0
    ctx->pc = 0x1E673Cu;
    SET_GPR_U32(ctx, 31, 0x1E6744u);
    ctx->pc = 0x1E6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E673Cu;
    // 0x1e6740: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EC0u, 0x1E673Cu, 0x1E6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6744u;
label_1e6744:
    // 0x1e6744: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x1e6744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e6748: 0x5060009a  beql        $v1, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x1E6748u;
    {
        const bool branch_taken_0x1e6748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6748) {
            ctx->pc = 0x1E674Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6748u;
            // 0x1e674c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E69B4u;
            goto label_1e69b4;
        }
    }
    ctx->pc = 0x1E6750u;
    // 0x1e6750: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1e6750u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1e6754: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e6754u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e6758: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e6758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e675c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e675cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6764: 0x0  nop
    ctx->pc = 0x1e6764u;
    // NOP
label_1e6768:
    // 0x1e6768: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1e6768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1e676c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6770: 0xc4a191f8  lwc1        $f1, -0x6E08($a1)
    ctx->pc = 0x1e6770u;
    { uint32_t bits = FAST_READ32(0x3F91F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6774: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1e6774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1e6778: 0xc4e2d94c  lwc1        $f2, -0x26B4($a3)
    ctx->pc = 0x1e6778u;
    { uint32_t bits = FAST_READ32(0x45D94Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e677c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e677cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6780: 0x0  nop
    ctx->pc = 0x1e6780u;
    // NOP
    // 0x1e6784: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6784u;
    {
        const bool branch_taken_0x1e6784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6784u;
        // 0x1e6788: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6784) {
            ctx->pc = 0x1E67D0u;
            goto label_1e67d0;
        }
    }
    ctx->pc = 0x1E678Cu;
    // 0x1e678c: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6790: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e6794: 0x8e2391dc  lw          $v1, -0x6E24($s1)
    ctx->pc = 0x1e6794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6798: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1e6798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e679c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e679cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e67a0: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1e67a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e67a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e67ac: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1e67acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1e67b0: 0x7fa800b0  sq          $t0, 0xB0($sp)
    ctx->pc = 0x1e67b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 8));
    // 0x1e67b4: 0x7fa900c0  sq          $t1, 0xC0($sp)
    ctx->pc = 0x1e67b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 9));
    // 0x1e67b8: 0xc078106  jal         func_1E0418
    ctx->pc = 0x1E67B8u;
    SET_GPR_U32(ctx, 31, 0x1E67C0u);
    ctx->pc = 0x1E67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67B8u;
    // 0x1e67bc: 0x7faa00d0  sq          $t2, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0418u, 0x1E67B8u, 0x1E67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67C0u;
label_1e67c0:
    // 0x1e67c0: 0x7ba800b0  lq          $t0, 0xB0($sp)
    ctx->pc = 0x1e67c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e67c4: 0x7ba900c0  lq          $t1, 0xC0($sp)
    ctx->pc = 0x1e67c4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e67c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E67C8u;
    {
        const bool branch_taken_0x1e67c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67C8u;
        // 0x1e67cc: 0x7baa00d0  lq          $t2, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67c8) {
            ctx->pc = 0x1E6810u;
            goto label_1e6810;
        }
    }
    ctx->pc = 0x1E67D0u;
label_1e67d0:
    // 0x1e67d0: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e67d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e67d8: 0x8e2391dc  lw          $v1, -0x6E24($s1)
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e67dc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1e67dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e67e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e67e4: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x1e67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1e67e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e67ec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e67ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e67f0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1e67f4: 0x7fa800b0  sq          $t0, 0xB0($sp)
    ctx->pc = 0x1e67f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 8));
    // 0x1e67f8: 0x7fa900c0  sq          $t1, 0xC0($sp)
    ctx->pc = 0x1e67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 9));
    // 0x1e67fc: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E67FCu;
    SET_GPR_U32(ctx, 31, 0x1E6804u);
    ctx->pc = 0x1E6800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67FCu;
    // 0x1e6800: 0x7faa00d0  sq          $t2, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E67FCu, 0x1E6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6804u;
label_1e6804:
    // 0x1e6804: 0x7baa00d0  lq          $t2, 0xD0($sp)
    ctx->pc = 0x1e6804u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e6808: 0x7ba900c0  lq          $t1, 0xC0($sp)
    ctx->pc = 0x1e6808u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e680c: 0x7ba800b0  lq          $t0, 0xB0($sp)
    ctx->pc = 0x1e680cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1e6810:
    // 0x1e6810: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1E6810u;
    {
        const bool branch_taken_0x1e6810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6810u;
        // 0x1e6814: 0x8e0291e0  lw          $v0, -0x6E20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6810) {
            ctx->pc = 0x1E6994u;
            goto label_1e6994;
        }
    }
    ctx->pc = 0x1E6818u;
    // 0x1e6818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e681c: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6820: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6828: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1e6828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e682c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6834: 0xac650028  sw          $a1, 0x28($v1)
    ctx->pc = 0x1e6834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x1e6838: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e683c: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6840: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6844: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6848: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e684c: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x1e684cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x1e6850: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e6854: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6858: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e6858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e685c: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x1e685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1e6860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6868: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e686c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e686cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e6870: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e6870u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e6874: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x1e6874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x1e6878: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e687c: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6884: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1e6884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6888: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e688c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6890: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e6890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e6894: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6898: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e6898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e689c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e68a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e68a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e68a8: 0xac750024  sw          $s5, 0x24($v1)
    ctx->pc = 0x1e68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 21));
    // 0x1e68ac: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e68b0: 0x8e2591dc  lw          $a1, -0x6E24($s1)
    ctx->pc = 0x1e68b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e68b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e68b8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1e68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1e68bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e68c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e68c4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1e68c8: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1e68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x1e68cc: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e68d0: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e68d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e68d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e68d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e68dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e68e0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e68e4: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1e68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x1e68e8: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e68ec: 0x8e2391dc  lw          $v1, -0x6E24($s1)
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e68f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e68f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e68f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e68fc: 0xac870038  sw          $a3, 0x38($a0)
    ctx->pc = 0x1e68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
    // 0x1e6900: 0x8e0391e0  lw          $v1, -0x6E20($s0)
    ctx->pc = 0x1e6900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6904: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e6904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e690c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6914: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e6914u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6918: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1e6918u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e691c: 0xdac30010  lqc2        $vf3, 0x10($s6)
    ctx->pc = 0x1e691cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1e6920: 0xdac40020  lqc2        $vf4, 0x20($s6)
    ctx->pc = 0x1e6920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x1e6924: 0xdac50030  lqc2        $vf5, 0x30($s6)
    ctx->pc = 0x1e6924u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x1e6928: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e6928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e692c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e692cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e6930: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1e6930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e6934: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1e6934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6938: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e6938u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e693c: 0x8e0391e0  lw          $v1, -0x6E20($s0)
    ctx->pc = 0x1e693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6940: 0x8e2291dc  lw          $v0, -0x6E24($s1)
    ctx->pc = 0x1e6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6944: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6948: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e694c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6950: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x1e6950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e6954: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e6954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6958: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1e6958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e695c: 0xdac30010  lqc2        $vf3, 0x10($s6)
    ctx->pc = 0x1e695cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1e6960: 0xdac40020  lqc2        $vf4, 0x20($s6)
    ctx->pc = 0x1e6960u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x1e6964: 0xdac50030  lqc2        $vf5, 0x30($s6)
    ctx->pc = 0x1e6964u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x1e6968: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e6968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e696c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e696cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e6970: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1e6970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e6974: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1e6974u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e6978: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e697c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e6980: 0x2c430050  sltiu       $v1, $v0, 0x50
    ctx->pc = 0x1e6980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e6984: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6984u;
    {
        const bool branch_taken_0x1e6984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6984u;
        // 0x1e6988: 0xae0291e0  sw          $v0, -0x6E20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6984) {
            ctx->pc = 0x1E6994u;
            goto label_1e6994;
        }
    }
    ctx->pc = 0x1E698Cu;
    // 0x1e698c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E698Cu;
    {
        const bool branch_taken_0x1e698c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E698Cu;
        // 0x1e6990: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e698c) {
            ctx->pc = 0x1E69B0u;
            goto label_1e69b0;
        }
    }
    ctx->pc = 0x1E6994u;
label_1e6994:
    // 0x1e6994: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x1e6994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e6998: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e6998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e699c: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x1e699cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x1e69a0: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x1e69a4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e69a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e69a8: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x1E69A8u;
    {
        const bool branch_taken_0x1e69a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69A8u;
        // 0x1e69ac: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69a8) {
            ctx->pc = 0x1E6768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6768;
        }
    }
    ctx->pc = 0x1E69B0u;
label_1e69b0:
    // 0x1e69b0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e69b4:
    // 0x1e69b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e69b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e69b8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1e69b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e69bc: 0x1440ff34  bnez        $v0, . + 4 + (-0xCC << 2)
    ctx->pc = 0x1E69BCu;
    {
        const bool branch_taken_0x1e69bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69BCu;
        // 0x1e69c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69bc) {
            ctx->pc = 0x1E6690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6690;
        }
    }
    ctx->pc = 0x1E69C4u;
    // 0x1e69c4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x1E69C4u;
    {
        const bool branch_taken_0x1e69c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69C4u;
        // 0x1e69c8: 0x8fc291e0  lw          $v0, -0x6E20($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69c4) {
            ctx->pc = 0x1E6DD8u;
            goto label_1e6dd8;
        }
    }
    ctx->pc = 0x1E69CCu;
label_1e69cc:
    // 0x1e69cc: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x1E69CCu;
    {
        const bool branch_taken_0x1e69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69CCu;
        // 0x1e69d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69cc) {
            ctx->pc = 0x1E6DD4u;
            goto label_1e6dd4;
        }
    }
    ctx->pc = 0x1E69D4u;
    // 0x1e69d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e69d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e69d8:
    // 0x1e69d8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E69D8u;
    SET_GPR_U32(ctx, 31, 0x1E69E0u);
    ctx->pc = 0x1E69DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69D8u;
    // 0x1e69dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E69D8u, 0x1E69E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69E0u;
label_1e69e0:
    // 0x1e69e0: 0xc07a3b0  jal         func_1E8EC0
    ctx->pc = 0x1E69E0u;
    SET_GPR_U32(ctx, 31, 0x1E69E8u);
    ctx->pc = 0x1E69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69E0u;
    // 0x1e69e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EC0u, 0x1E69E0u, 0x1E69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69E8u;
label_1e69e8:
    // 0x1e69e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e69e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69ec: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E69ECu;
    SET_GPR_U32(ctx, 31, 0x1E69F4u);
    ctx->pc = 0x1E69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69ECu;
    // 0x1e69f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E69ECu, 0x1E69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69F4u;
label_1e69f4:
    // 0x1e69f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1e69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e69f8: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x1E69F8u;
    SET_GPR_U32(ctx, 31, 0x1E6A00u);
    ctx->pc = 0x1E69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69F8u;
    // 0x1e69fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x1E69F8u, 0x1E6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A00u;
label_1e6a00:
    // 0x1e6a00: 0x50400081  beql        $v0, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x1E6A00u;
    {
        const bool branch_taken_0x1e6a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a00) {
            ctx->pc = 0x1E6A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6A00u;
            // 0x1e6a04: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6C08u;
            goto label_1e6c08;
        }
    }
    ctx->pc = 0x1E6A08u;
    // 0x1e6a08: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e6a0c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1E6A0Cu;
    {
        const bool branch_taken_0x1e6a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A0Cu;
        // 0x1e6a10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a0c) {
            ctx->pc = 0x1E6C04u;
            goto label_1e6c04;
        }
    }
    ctx->pc = 0x1E6A14u;
    // 0x1e6a14: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1e6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1e6a18: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1e6a1c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e6a20: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e6a20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a24: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e6a24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6a28:
    // 0x1e6a28: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1e6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1e6a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e6a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a30: 0xc460d94c  lwc1        $f0, -0x26B4($v1)
    ctx->pc = 0x1e6a30u;
    { uint32_t bits = FAST_READ32(0x45D94Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e6a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a38: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6A38u;
    SET_GPR_U32(ctx, 31, 0x1E6A40u);
    ctx->pc = 0x1E6A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A38u;
    // 0x1e6a3c: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6A38u, 0x1E6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A40u;
label_1e6a40:
    // 0x1e6a40: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1e6a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1e6a44: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1e6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a48: 0xc4a091f8  lwc1        $f0, -0x6E08($a1)
    ctx->pc = 0x1e6a48u;
    { uint32_t bits = FAST_READ32(0x3F91F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e6a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6a50: 0x0  nop
    ctx->pc = 0x1e6a50u;
    // NOP
    // 0x1e6a54: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1E6A54u;
    {
        const bool branch_taken_0x1e6a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A54u;
        // 0x1e6a58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a54) {
            ctx->pc = 0x1E6A94u;
            goto label_1e6a94;
        }
    }
    ctx->pc = 0x1E6A5Cu;
    // 0x1e6a5c: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6A5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6A64u);
    ctx->pc = 0x1E6A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A5Cu;
    // 0x1e6a60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6A5Cu, 0x1E6A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A64u;
label_1e6a64:
    // 0x1e6a64: 0x8fc391e0  lw          $v1, -0x6E20($fp)
    ctx->pc = 0x1e6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6a68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e6a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a6c: 0x8e2291dc  lw          $v0, -0x6E24($s1)
    ctx->pc = 0x1e6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6a70: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1e6a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e6a74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6a78: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1e6a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e6a7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e6a80: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e6a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6a84: 0xc078106  jal         func_1E0418
    ctx->pc = 0x1E6A84u;
    SET_GPR_U32(ctx, 31, 0x1E6A8Cu);
    ctx->pc = 0x1E6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A84u;
    // 0x1e6a88: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0418u, 0x1E6A84u, 0x1E6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A8Cu;
label_1e6a8c:
    // 0x1e6a8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E6A8Cu;
    {
        const bool branch_taken_0x1e6a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a8c) {
            ctx->pc = 0x1E6AC4u;
            goto label_1e6ac4;
        }
    }
    ctx->pc = 0x1E6A94u;
label_1e6a94:
    // 0x1e6a94: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6A94u;
    SET_GPR_U32(ctx, 31, 0x1E6A9Cu);
    ctx->pc = 0x1E6A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A94u;
    // 0x1e6a98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6A94u, 0x1E6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6A9Cu;
label_1e6a9c:
    // 0x1e6a9c: 0x8fc391e0  lw          $v1, -0x6E20($fp)
    ctx->pc = 0x1e6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e6aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6aa4: 0x8e2291dc  lw          $v0, -0x6E24($s1)
    ctx->pc = 0x1e6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6aa8: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1e6aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e6aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6ab0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1e6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e6ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e6ab8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e6ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6abc: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E6ABCu;
    SET_GPR_U32(ctx, 31, 0x1E6AC4u);
    ctx->pc = 0x1E6AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6ABCu;
    // 0x1e6ac0: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E6ABCu, 0x1E6AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6AC4u;
label_1e6ac4:
    // 0x1e6ac4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E6AC4u;
    {
        const bool branch_taken_0x1e6ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6AC4u;
        // 0x1e6ac8: 0x8e0291e0  lw          $v0, -0x6E20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ac4) {
            ctx->pc = 0x1E6BE0u;
            goto label_1e6be0;
        }
    }
    ctx->pc = 0x1E6ACCu;
    // 0x1e6acc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e6accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6ad0: 0x8e2391dc  lw          $v1, -0x6E24($s1)
    ctx->pc = 0x1e6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6ad4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e6ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6ad8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6adc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e6adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6ae4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e6ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ae8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6aec: 0xac660028  sw          $a2, 0x28($v1)
    ctx->pc = 0x1e6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 6));
    // 0x1e6af0: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6af4: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6afc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6b04: 0xac670030  sw          $a3, 0x30($v1)
    ctx->pc = 0x1e6b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 7));
    // 0x1e6b08: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x1e6b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e6b0c: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6b10: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6b14: 0x8ce300c0  lw          $v1, 0xC0($a3)
    ctx->pc = 0x1e6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x1e6b18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6b1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6b20: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1e6b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6b24: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e6b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e6b28: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e6b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e6b2c: 0xace3003c  sw          $v1, 0x3C($a3)
    ctx->pc = 0x1e6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 3));
    // 0x1e6b30: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6b34: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6b38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6b3c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1e6b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6b40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6b44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6b48: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6B48u;
    SET_GPR_U32(ctx, 31, 0x1E6B50u);
    ctx->pc = 0x1E6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B48u;
    // 0x1e6b4c: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6B48u, 0x1E6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B50u;
label_1e6b50:
    // 0x1e6b50: 0x8e0391e0  lw          $v1, -0x6E20($s0)
    ctx->pc = 0x1e6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6b54: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e6b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e6b58: 0x8e2591dc  lw          $a1, -0x6E24($s1)
    ctx->pc = 0x1e6b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6b5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6b60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e6b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e6b64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e6b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6b68: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1e6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1e6b6c: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6b70: 0x8e2591dc  lw          $a1, -0x6E24($s1)
    ctx->pc = 0x1e6b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6b78: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1e6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e6b7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e6b80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6b84: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e6b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e6b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e6b8c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1e6b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x1e6b90: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6b94: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6b9c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1e6b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e6ba0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6ba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6ba8: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x1e6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
    // 0x1e6bac: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6bb0: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6bb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6bb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6bbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6bc0: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x1e6bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x1e6bc4: 0x8e0291e0  lw          $v0, -0x6E20($s0)
    ctx->pc = 0x1e6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939104)));
    // 0x1e6bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e6bcc: 0x2c430050  sltiu       $v1, $v0, 0x50
    ctx->pc = 0x1e6bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e6bd0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6BD0u;
    {
        const bool branch_taken_0x1e6bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BD0u;
        // 0x1e6bd4: 0xae0291e0  sw          $v0, -0x6E20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6bd0) {
            ctx->pc = 0x1E6BE0u;
            goto label_1e6be0;
        }
    }
    ctx->pc = 0x1E6BD8u;
    // 0x1e6bd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E6BD8u;
    {
        const bool branch_taken_0x1e6bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BD8u;
        // 0x1e6bdc: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6bd8) {
            ctx->pc = 0x1E6C04u;
            goto label_1e6c04;
        }
    }
    ctx->pc = 0x1E6BE0u;
label_1e6be0:
    // 0x1e6be0: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e6be4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e6be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e6be8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e6bec: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x1e6becu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1e6bf0: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x1e6bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x1e6bf4: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x1e6bf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1e6bf8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e6bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6bfc: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x1E6BFCu;
    {
        const bool branch_taken_0x1e6bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BFCu;
        // 0x1e6c00: 0xafa700a8  sw          $a3, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6bfc) {
            ctx->pc = 0x1E6A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6a28;
        }
    }
    ctx->pc = 0x1E6C04u;
label_1e6c04:
    // 0x1e6c04: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e6c08:
    // 0x1e6c08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e6c0c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1e6c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6c10: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x1E6C10u;
    {
        const bool branch_taken_0x1e6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C10u;
        // 0x1e6c14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c10) {
            ctx->pc = 0x1E69D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e69d8;
        }
    }
    ctx->pc = 0x1E6C18u;
    // 0x1e6c18: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1E6C18u;
    {
        const bool branch_taken_0x1e6c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C18u;
        // 0x1e6c1c: 0x8fc291e0  lw          $v0, -0x6E20($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c18) {
            ctx->pc = 0x1E6DD8u;
            goto label_1e6dd8;
        }
    }
    ctx->pc = 0x1E6C20u;
label_1e6c20:
    // 0x1e6c20: 0x12c0006d  beqz        $s6, . + 4 + (0x6D << 2)
    ctx->pc = 0x1E6C20u;
    {
        const bool branch_taken_0x1e6c20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C20u;
        // 0x1e6c24: 0x8fc291e0  lw          $v0, -0x6E20($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c20) {
            ctx->pc = 0x1E6DD8u;
            goto label_1e6dd8;
        }
    }
    ctx->pc = 0x1E6C28u;
    // 0x1e6c28: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e6c2c: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1E6C2Cu;
    {
        const bool branch_taken_0x1e6c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C2Cu;
        // 0x1e6c30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c2c) {
            ctx->pc = 0x1E6DD4u;
            goto label_1e6dd4;
        }
    }
    ctx->pc = 0x1E6C34u;
    // 0x1e6c34: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1e6c38:
    // 0x1e6c38: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1E6C38u;
    {
        const bool branch_taken_0x1e6c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C38u;
        // 0x1e6c3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c38) {
            ctx->pc = 0x1E6DC0u;
            goto label_1e6dc0;
        }
    }
    ctx->pc = 0x1E6C40u;
    // 0x1e6c40: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1e6c40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1e6c44: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e6c44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6c48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e6c4c: 0x0  nop
    ctx->pc = 0x1e6c4cu;
    // NOP
label_1e6c50:
    // 0x1e6c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e6c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c54: 0xc440d94c  lwc1        $f0, -0x26B4($v0)
    ctx->pc = 0x1e6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e6c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c5c: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C64u);
    ctx->pc = 0x1E6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C5Cu;
    // 0x1e6c60: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6C5Cu, 0x1E6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C64u;
label_1e6c64:
    // 0x1e6c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e6c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c6c: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C74u);
    ctx->pc = 0x1E6C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C6Cu;
    // 0x1e6c70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6C6Cu, 0x1E6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C74u;
label_1e6c74:
    // 0x1e6c74: 0x8fc391e0  lw          $v1, -0x6E20($fp)
    ctx->pc = 0x1e6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c7c: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6c80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6c88: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1e6c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e6c8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e6c90: 0xc0788c0  jal         func_1E2300
    ctx->pc = 0x1E6C90u;
    SET_GPR_U32(ctx, 31, 0x1E6C98u);
    ctx->pc = 0x1E6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C90u;
    // 0x1e6c94: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2300u, 0x1E6C90u, 0x1E6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C98u;
label_1e6c98:
    // 0x1e6c98: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1E6C98u;
    {
        const bool branch_taken_0x1e6c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C98u;
        // 0x1e6c9c: 0x8fc291e0  lw          $v0, -0x6E20($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c98) {
            ctx->pc = 0x1E6DACu;
            goto label_1e6dac;
        }
    }
    ctx->pc = 0x1E6CA0u;
    // 0x1e6ca0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ca4: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e6ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6cac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6cb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6cb8: 0xac750028  sw          $s5, 0x28($v1)
    ctx->pc = 0x1e6cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 21));
    // 0x1e6cbc: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6cc0: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6cc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6cc8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6cd0: 0xac750030  sw          $s5, 0x30($v1)
    ctx->pc = 0x1e6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 21));
    // 0x1e6cd4: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x1e6cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e6cd8: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6cdc: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6ce0: 0x8ce300c0  lw          $v1, 0xC0($a3)
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x1e6ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6ce8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6cec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1e6cecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6cf0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1e6cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e6cf4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e6cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e6cf8: 0xace3003c  sw          $v1, 0x3C($a3)
    ctx->pc = 0x1e6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 3));
    // 0x1e6cfc: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6d00: 0x8e2691dc  lw          $a2, -0x6E24($s1)
    ctx->pc = 0x1e6d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6d08: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1e6d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6d0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e6d10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6d14: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6D14u;
    SET_GPR_U32(ctx, 31, 0x1E6D1Cu);
    ctx->pc = 0x1E6D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D14u;
    // 0x1e6d18: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6D14u, 0x1E6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D1Cu;
label_1e6d1c:
    // 0x1e6d1c: 0x8fc391e0  lw          $v1, -0x6E20($fp)
    ctx->pc = 0x1e6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6d20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e6d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d24: 0x8e2791dc  lw          $a3, -0x6E24($s1)
    ctx->pc = 0x1e6d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6d28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e6d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6d30: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1e6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e6d34: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e6d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6d38: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6D38u;
    SET_GPR_U32(ctx, 31, 0x1E6D40u);
    ctx->pc = 0x1E6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D38u;
    // 0x1e6d3c: 0xacc20024  sw          $v0, 0x24($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6D38u, 0x1E6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D40u;
label_1e6d40:
    // 0x1e6d40: 0x8fc391e0  lw          $v1, -0x6E20($fp)
    ctx->pc = 0x1e6d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6d44: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e6d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e6d48: 0x8e2591dc  lw          $a1, -0x6E24($s1)
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6d4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6d50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e6d54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6d58: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1e6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1e6d5c: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6d60: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6d68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6d70: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1e6d74: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1e6d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x1e6d78: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6d7c: 0x8e2491dc  lw          $a0, -0x6E24($s1)
    ctx->pc = 0x1e6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939100)));
    // 0x1e6d80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6d84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6d88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6d8c: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x1e6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x1e6d90: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e6d98: 0x2c430050  sltiu       $v1, $v0, 0x50
    ctx->pc = 0x1e6d98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e6d9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6D9Cu;
    {
        const bool branch_taken_0x1e6d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D9Cu;
        // 0x1e6da0: 0xafc291e0  sw          $v0, -0x6E20($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294939104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d9c) {
            ctx->pc = 0x1E6DACu;
            goto label_1e6dac;
        }
    }
    ctx->pc = 0x1E6DA4u;
    // 0x1e6da4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6DA4u;
    {
        const bool branch_taken_0x1e6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DA4u;
        // 0x1e6da8: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6da4) {
            ctx->pc = 0x1E6DC0u;
            goto label_1e6dc0;
        }
    }
    ctx->pc = 0x1E6DACu;
label_1e6dac:
    // 0x1e6dac: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1e6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1e6db0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e6db0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e6db4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e6db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6db8: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1E6DB8u;
    {
        const bool branch_taken_0x1e6db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DB8u;
        // 0x1e6dbc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6db8) {
            ctx->pc = 0x1E6C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6c50;
        }
    }
    ctx->pc = 0x1E6DC0u;
label_1e6dc0:
    // 0x1e6dc0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e6dc4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e6dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e6dc8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1e6dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6dcc: 0x5440ff9a  bnel        $v0, $zero, . + 4 + (-0x66 << 2)
    ctx->pc = 0x1E6DCCu;
    {
        const bool branch_taken_0x1e6dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6dcc) {
            ctx->pc = 0x1E6DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6DCCu;
            // 0x1e6dd0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6c38;
        }
    }
    ctx->pc = 0x1E6DD4u;
label_1e6dd4:
    // 0x1e6dd4: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
label_1e6dd8:
    // 0x1e6dd8: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1e6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1e6ddc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e6ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6de0: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1E6DE0u;
    {
        const bool branch_taken_0x1e6de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DE0u;
        // 0x1e6de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6de0) {
            ctx->pc = 0x1E7090u;
            goto label_1e7090;
        }
    }
    ctx->pc = 0x1E6DE8u;
    // 0x1e6de8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E6DE8u;
    SET_GPR_U32(ctx, 31, 0x1E6DF0u);
    ctx->pc = 0x1E6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DE8u;
    // 0x1e6dec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E6DE8u, 0x1E6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DF0u;
label_1e6df0:
    // 0x1e6df0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E6DF0u;
    SET_GPR_U32(ctx, 31, 0x1E6DF8u);
    ctx->pc = 0x1E6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6DF0u;
    // 0x1e6df4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E6DF0u, 0x1E6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6DF8u;
label_1e6df8:
    // 0x1e6df8: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e6dfc: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x1e6dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1e6e00: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1e6e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6e04: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E6E04u;
    {
        const bool branch_taken_0x1e6e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E04u;
        // 0x1e6e08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e04) {
            ctx->pc = 0x1E6EE0u;
            goto label_1e6ee0;
        }
    }
    ctx->pc = 0x1E6E0Cu;
    // 0x1e6e0c: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x1e6e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x1e6e10: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1e6e10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6e14: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x1e6e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e6e18: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x1e6e18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e6e1c: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x1e6e1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e20: 0x8d2291dc  lw          $v0, -0x6E24($t1)
    ctx->pc = 0x1e6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91DCu));
    // 0x1e6e24: 0x0  nop
    ctx->pc = 0x1e6e24u;
    // NOP
label_1e6e28:
    // 0x1e6e28: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1e6e28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e6e2c: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x1e6e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1e6e30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6e34: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1e6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e6e38: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x1e6e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x1e6e3c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E6E3Cu;
    {
        const bool branch_taken_0x1e6e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E3Cu;
        // 0x1e6e40: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e3c) {
            ctx->pc = 0x1E6ECCu;
            goto label_1e6ecc;
        }
    }
    ctx->pc = 0x1E6E44u;
    // 0x1e6e44: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1e6e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6e48: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e6e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e6e4c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6e50: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e6e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e6e54: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6e58: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1e6e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e6e5c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e6e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6e60: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e6e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e6e64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6e68: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1e6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e6e6c: 0x144d000b  bne         $v0, $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x1E6E6Cu;
    {
        const bool branch_taken_0x1e6e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        ctx->pc = 0x1E6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E6Cu;
        // 0x1e6e70: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e6c) {
            ctx->pc = 0x1E6E9Cu;
            goto label_1e6e9c;
        }
    }
    ctx->pc = 0x1E6E74u;
    // 0x1e6e74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1e6e78: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1e6e7c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1e6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6e80: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1e6e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6e84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e6e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6e88: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e6e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e6e8c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x1e6e8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1e6e90: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1e6e90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e6e94: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e6e94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6e98: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e6e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e6e9c:
    // 0x1e6e9c: 0x8d2291dc  lw          $v0, -0x6E24($t1)
    ctx->pc = 0x1e6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939100)));
    // 0x1e6ea0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1e6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1e6ea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6ea8: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x1e6ea8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e6eac: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e6eacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6eb0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e6eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6eb4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e6eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6eb8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e6eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6ebc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e6ebcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6ec0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e6ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6ec4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e6ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6ec8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e6ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e6ecc:
    // 0x1e6ecc: 0x8d6291e0  lw          $v0, -0x6E20($t3)
    ctx->pc = 0x1e6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294939104)));
    // 0x1e6ed0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e6ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e6ed4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1e6ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6ed8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1E6ED8u;
    {
        const bool branch_taken_0x1e6ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6ED8u;
        // 0x1e6edc: 0x8d2291dc  lw          $v0, -0x6E24($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ed8) {
            ctx->pc = 0x1E6E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6e28;
        }
    }
    ctx->pc = 0x1E6EE0u;
label_1e6ee0:
    // 0x1e6ee0: 0x1100006b  beqz        $t0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1E6EE0u;
    {
        const bool branch_taken_0x1e6ee0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EE0u;
        // 0x1e6ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ee0) {
            ctx->pc = 0x1E7090u;
            goto label_1e7090;
        }
    }
    ctx->pc = 0x1E6EE8u;
    // 0x1e6ee8: 0x5000006  bltz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6EE8u;
    {
        const bool branch_taken_0x1e6ee8 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1E6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EE8u;
        // 0x1e6eec: 0x81842  srl         $v1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ee8) {
            ctx->pc = 0x1E6F04u;
            goto label_1e6f04;
        }
    }
    ctx->pc = 0x1E6EF0u;
    // 0x1e6ef0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1e6ef0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6ef4: 0x0  nop
    ctx->pc = 0x1e6ef4u;
    // NOP
    // 0x1e6ef8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e6ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e6efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6EFCu;
    {
        const bool branch_taken_0x1e6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6efc) {
            ctx->pc = 0x1E6F1Cu;
            goto label_1e6f1c;
        }
    }
    ctx->pc = 0x1E6F04u;
label_1e6f04:
    // 0x1e6f04: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x1e6f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1e6f08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e6f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e6f0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6f10: 0x0  nop
    ctx->pc = 0x1e6f10u;
    // NOP
    // 0x1e6f14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e6f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e6f18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e6f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e6f1c:
    // 0x1e6f1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e6f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6f20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e6f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6f24: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e6f28: 0x0  nop
    ctx->pc = 0x1e6f28u;
    // NOP
    // 0x1e6f2c: 0x0  nop
    ctx->pc = 0x1e6f2cu;
    // NOP
    // 0x1e6f30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e6f30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e6f34: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1e6f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1e6f38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e6f38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6f3c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1e6f3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1e6f40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e6f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6f44: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e6f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6f48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e6f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f50: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e6f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6f54: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1e6f54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1e6f58: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x1e6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1e6f5c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e6f5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6f60: 0x0  nop
    ctx->pc = 0x1e6f60u;
    // NOP
    // 0x1e6f64: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1E6F64u;
    {
        const bool branch_taken_0x1e6f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F64u;
        // 0x1e6f68: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f64) {
            ctx->pc = 0x1E6FA4u;
            goto label_1e6fa4;
        }
    }
    ctx->pc = 0x1E6F6Cu;
    // 0x1e6f6c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1e6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6f70: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e6f70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6f74: 0x0  nop
    ctx->pc = 0x1e6f74u;
    // NOP
    // 0x1e6f78: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E6F78u;
    {
        const bool branch_taken_0x1e6f78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F78u;
        // 0x1e6f7c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f78) {
            ctx->pc = 0x1E6FA4u;
            goto label_1e6fa4;
        }
    }
    ctx->pc = 0x1E6F80u;
    // 0x1e6f80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e6f80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6f84: 0x0  nop
    ctx->pc = 0x1e6f84u;
    // NOP
    // 0x1e6f88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6F88u;
    {
        const bool branch_taken_0x1e6f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F88u;
        // 0x1e6f8c: 0x8ce291dc  lw          $v0, -0x6E24($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f88) {
            ctx->pc = 0x1E6FA4u;
            goto label_1e6fa4;
        }
    }
    ctx->pc = 0x1E6F90u;
    // 0x1e6f90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e6f94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6f98: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e6f9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e6f9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6fa0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e6fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e6fa4:
    // 0x1e6fa4: 0x8ce291dc  lw          $v0, -0x6E24($a3)
    ctx->pc = 0x1e6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939100)));
    // 0x1e6fa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e6fac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6fb0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e6fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6fb4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e6fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6fb8: 0x8ce291dc  lw          $v0, -0x6E24($a3)
    ctx->pc = 0x1e6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939100)));
    // 0x1e6fbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e6fc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e6fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6fc4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e6fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6fc8: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1e6fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6fcc: 0x8ce291dc  lw          $v0, -0x6E24($a3)
    ctx->pc = 0x1e6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939100)));
    // 0x1e6fd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e6fd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6fd8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1e6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e6fdc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e6fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6fe0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e6fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6fe4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e6fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6fe8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e6fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e6fec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e6fecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e6ff0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e6ff0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e6ff4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e6ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e6ff8: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1e6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e6ffc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1e6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1e7000: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e7000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e7004: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1e7004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e7008: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e7008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e700c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E700Cu;
    {
        const bool branch_taken_0x1e700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E700Cu;
        // 0x1e7010: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e700c) {
            ctx->pc = 0x1E7080u;
            goto label_1e7080;
        }
    }
    ctx->pc = 0x1E7014u;
    // 0x1e7014: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e7014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e7018: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e7018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e701c: 0xc440d94c  lwc1        $f0, -0x26B4($v0)
    ctx->pc = 0x1e701cu;
    { uint32_t bits = FAST_READ32(0x45D94Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7020: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e7020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7024: 0x8d0491dc  lw          $a0, -0x6E24($t0)
    ctx->pc = 0x1e7024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939100)));
label_1e7028:
    // 0x1e7028: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e702c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e7030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e7030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e7034: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1e7034u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1e7038: 0x7c600010  sq          $zero, 0x10($v1)
    ctx->pc = 0x1e7038u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 0));
    // 0x1e703c: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1e703cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x1e7040: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e7044: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1e7044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1e7048: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1e7048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1e704c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1e704cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1e7050: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1e7050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1e7054: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1e7054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1e7058: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1e7058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1e705c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e7060: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1e7060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1e7064: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1e7064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1e7068: 0xac670044  sw          $a3, 0x44($v1)
    ctx->pc = 0x1e7068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 7));
    // 0x1e706c: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x1e706cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x1e7070: 0x8fc291e0  lw          $v0, -0x6E20($fp)
    ctx->pc = 0x1e7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939104)));
    // 0x1e7074: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e7074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7078: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E7078u;
    {
        const bool branch_taken_0x1e7078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7078u;
        // 0x1e707c: 0x8d0491dc  lw          $a0, -0x6E24($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7078) {
            ctx->pc = 0x1E7028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7028;
        }
    }
    ctx->pc = 0x1E7080u;
label_1e7080:
    // 0x1e7080: 0xafc691e0  sw          $a2, -0x6E20($fp)
    ctx->pc = 0x1e7080u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294939104), GPR_U32(ctx, 6));
    // 0x1e7084: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7084u;
    {
        const bool branch_taken_0x1e7084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7084u;
        // 0x1e7088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7084) {
            ctx->pc = 0x1E7090u;
            goto label_1e7090;
        }
    }
    ctx->pc = 0x1E708Cu;
label_1e708c:
    // 0x1e708c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e708cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7090:
    // 0x1e7090: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1e7090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e7094: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1e7094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1e7098: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1e7098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e709c: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1e709cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1e70a0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1e70a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e70a4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1e70a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1e70a8: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1e70a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e70ac: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x1e70acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1e70b0: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x1e70b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e70b4: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x1e70b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1e70b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E70B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70B8u;
        // 0x1e70bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E70B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E70C0u;
}
