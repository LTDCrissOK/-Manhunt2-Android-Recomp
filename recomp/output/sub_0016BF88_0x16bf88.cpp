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

// Function: sub_0016BF88
// Address: 0x16bf88 - 0x16c0b8
void sub_0016BF88_0x16bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BF88_0x16bf88");
#endif

    switch (ctx->pc) {
        case 0x16bfb4u: goto label_16bfb4;
        case 0x16bfc0u: goto label_16bfc0;
        case 0x16bfe8u: goto label_16bfe8;
        case 0x16c004u: goto label_16c004;
        case 0x16c00cu: goto label_16c00c;
        case 0x16c018u: goto label_16c018;
        case 0x16c020u: goto label_16c020;
        case 0x16c02cu: goto label_16c02c;
        case 0x16c038u: goto label_16c038;
        case 0x16c048u: goto label_16c048;
        case 0x16c054u: goto label_16c054;
        case 0x16c05cu: goto label_16c05c;
        case 0x16c068u: goto label_16c068;
        case 0x16c070u: goto label_16c070;
        case 0x16c080u: goto label_16c080;
        case 0x16c088u: goto label_16c088;
        case 0x16c094u: goto label_16c094;
        default: break;
    }

    ctx->pc = 0x16bf88u;

    // 0x16bf88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16bf8c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16bf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16bf90: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x16bf90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16bf94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf98: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16bf9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bfa0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x16bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16bfa4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16bfa4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x16bfa8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16bfac: 0xc0f70ee  jal         func_3DC3B8
    ctx->pc = 0x16BFACu;
    SET_GPR_U32(ctx, 31, 0x16BFB4u);
    ctx->pc = 0x16BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFACu;
    // 0x16bfb0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC3B8u, 0x16BFACu, 0x16BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFB4u;
label_16bfb4:
    // 0x16bfb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16bfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bfb8: 0xc0f7108  jal         func_3DC420
    ctx->pc = 0x16BFB8u;
    SET_GPR_U32(ctx, 31, 0x16BFC0u);
    ctx->pc = 0x16BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFB8u;
    // 0x16bfbc: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC420u, 0x16BFB8u, 0x16BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFC0u;
label_16bfc0:
    // 0x16bfc0: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x16bfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x16bfc4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16BFC4u;
    {
        const bool branch_taken_0x16bfc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bfc4) {
            ctx->pc = 0x16BFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BFC4u;
            // 0x16bfc8: 0x8e300068  lw          $s0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BFCCu;
            goto label_16bfcc;
        }
    }
    ctx->pc = 0x16BFCCu;
label_16bfcc:
    // 0x16bfcc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x16bfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16bfd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x16bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x16bfd4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16bfd8: 0xc45489d0  lwc1        $f20, -0x7630($v0)
    ctx->pc = 0x16bfd8u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16bfdc: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x16bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x16bfe0: 0xc047866  jal         func_11E198
    ctx->pc = 0x16BFE0u;
    SET_GPR_U32(ctx, 31, 0x16BFE8u);
    ctx->pc = 0x16BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFE0u;
    // 0x16bfe4: 0x3c120049  lui         $s2, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x16BFE0u, 0x16BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFE8u;
label_16bfe8:
    // 0x16bfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bfec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16bfecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16bff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16bff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bff4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16bff4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x16bff8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bffc: 0xc04090a  jal         func_102428
    ctx->pc = 0x16BFFCu;
    SET_GPR_U32(ctx, 31, 0x16C004u);
    ctx->pc = 0x16C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFFCu;
    // 0x16c000: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102428u, 0x16BFFCu, 0x16C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C004u;
label_16c004:
    // 0x16c004: 0xc0f6730  jal         func_3D9CC0
    ctx->pc = 0x16C004u;
    SET_GPR_U32(ctx, 31, 0x16C00Cu);
    ctx->pc = 0x16C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C004u;
    // 0x16c008: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC0u, 0x16C004u, 0x16C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C00Cu;
label_16c00c:
    // 0x16c00c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c010: 0xc05afb4  jal         func_16BED0
    ctx->pc = 0x16C010u;
    SET_GPR_U32(ctx, 31, 0x16C018u);
    ctx->pc = 0x16C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C010u;
    // 0x16c014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BED0u, 0x16C010u, 0x16C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C018u;
label_16c018:
    // 0x16c018: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16C018u;
    {
        const bool branch_taken_0x16c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C018u;
        // 0x16c01c: 0xae20019c  sw          $zero, 0x19C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c018) {
            ctx->pc = 0x16C068u;
            goto label_16c068;
        }
    }
    ctx->pc = 0x16C020u;
label_16c020:
    // 0x16c020: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16c020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16c024: 0xc0f7124  jal         func_3DC490
    ctx->pc = 0x16C024u;
    SET_GPR_U32(ctx, 31, 0x16C02Cu);
    ctx->pc = 0x16C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C024u;
    // 0x16c028: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC490u, 0x16C024u, 0x16C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C02Cu;
label_16c02c:
    // 0x16c02c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c030: 0xc0400be  jal         func_1002F8
    ctx->pc = 0x16C030u;
    SET_GPR_U32(ctx, 31, 0x16C038u);
    ctx->pc = 0x16C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C030u;
    // 0x16c034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002F8u, 0x16C030u, 0x16C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C038u;
label_16c038:
    // 0x16c038: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C038u;
    {
        const bool branch_taken_0x16c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c038) {
            ctx->pc = 0x16C054u;
            goto label_16c054;
        }
    }
    ctx->pc = 0x16C040u;
    // 0x16c040: 0xc040094  jal         func_100250
    ctx->pc = 0x16C040u;
    SET_GPR_U32(ctx, 31, 0x16C048u);
    ctx->pc = 0x16C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C040u;
    // 0x16c044: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100250u, 0x16C040u, 0x16C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C048u;
label_16c048:
    // 0x16c048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16c048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c04c: 0xc05b02e  jal         func_16C0B8
    ctx->pc = 0x16C04Cu;
    SET_GPR_U32(ctx, 31, 0x16C054u);
    ctx->pc = 0x16C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C04Cu;
    // 0x16c050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C0B8u, 0x16C04Cu, 0x16C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C054u;
label_16c054:
    // 0x16c054: 0xc040088  jal         func_100220
    ctx->pc = 0x16C054u;
    SET_GPR_U32(ctx, 31, 0x16C05Cu);
    ctx->pc = 0x16C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C054u;
    // 0x16c058: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100220u, 0x16C054u, 0x16C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C05Cu;
label_16c05c:
    // 0x16c05c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c060: 0xc041ec0  jal         func_107B00
    ctx->pc = 0x16C060u;
    SET_GPR_U32(ctx, 31, 0x16C068u);
    ctx->pc = 0x16C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C060u;
    // 0x16c064: 0x26448758  addiu       $a0, $s2, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B00u, 0x16C060u, 0x16C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C068u;
label_16c068:
    // 0x16c068: 0xc0f6730  jal         func_3D9CC0
    ctx->pc = 0x16C068u;
    SET_GPR_U32(ctx, 31, 0x16C070u);
    ctx->pc = 0x16C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C068u;
    // 0x16c06c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC0u, 0x16C068u, 0x16C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C070u;
label_16c070:
    // 0x16c070: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x16C070u;
    {
        const bool branch_taken_0x16c070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C070u;
        // 0x16c074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c070) {
            ctx->pc = 0x16C020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c020;
        }
    }
    ctx->pc = 0x16C078u;
    // 0x16c078: 0xc0f714e  jal         func_3DC538
    ctx->pc = 0x16C078u;
    SET_GPR_U32(ctx, 31, 0x16C080u);
    ctx->pc = 0x16C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C078u;
    // 0x16c07c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC538u, 0x16C078u, 0x16C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C080u;
label_16c080:
    // 0x16c080: 0xc05b05a  jal         func_16C168
    ctx->pc = 0x16C080u;
    SET_GPR_U32(ctx, 31, 0x16C088u);
    ctx->pc = 0x16C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C080u;
    // 0x16c084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C168u, 0x16C080u, 0x16C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C088u;
label_16c088:
    // 0x16c088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c08c: 0xc0f70de  jal         func_3DC378
    ctx->pc = 0x16C08Cu;
    SET_GPR_U32(ctx, 31, 0x16C094u);
    ctx->pc = 0x16C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C08Cu;
    // 0x16c090: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC378u, 0x16C08Cu, 0x16C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C094u;
label_16c094:
    // 0x16c094: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16c094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c098: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16c098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16c09c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x16c09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c0a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16c0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16c0a4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x16c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16c0a8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x16c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16c0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0ACu;
        // 0x16c0b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C0B4u;
    // 0x16c0b4: 0x0  nop
    ctx->pc = 0x16c0b4u;
    // NOP
    ctx->pc = 0x16c0b8u;
}
