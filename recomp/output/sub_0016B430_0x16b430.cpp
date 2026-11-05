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

// Function: sub_0016B430
// Address: 0x16b430 - 0x16b5d0
void sub_0016B430_0x16b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B430_0x16b430");
#endif

    switch (ctx->pc) {
        case 0x16b460u: goto label_16b460;
        case 0x16b46cu: goto label_16b46c;
        case 0x16b4acu: goto label_16b4ac;
        case 0x16b4c8u: goto label_16b4c8;
        case 0x16b4d8u: goto label_16b4d8;
        case 0x16b50cu: goto label_16b50c;
        case 0x16b518u: goto label_16b518;
        case 0x16b528u: goto label_16b528;
        case 0x16b538u: goto label_16b538;
        case 0x16b544u: goto label_16b544;
        case 0x16b54cu: goto label_16b54c;
        case 0x16b564u: goto label_16b564;
        case 0x16b570u: goto label_16b570;
        case 0x16b578u: goto label_16b578;
        case 0x16b584u: goto label_16b584;
        case 0x16b58cu: goto label_16b58c;
        case 0x16b59cu: goto label_16b59c;
        case 0x16b5a8u: goto label_16b5a8;
        default: break;
    }

    ctx->pc = 0x16b430u;

    // 0x16b430: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16b434: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16b438: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x16b438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16b43c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b440: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16b444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b448: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x16b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16b44c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16b44cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x16b450: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16b454: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x16b454u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x16b458: 0xc0f70ee  jal         func_3DC3B8
    ctx->pc = 0x16B458u;
    SET_GPR_U32(ctx, 31, 0x16B460u);
    ctx->pc = 0x16B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B458u;
    // 0x16b45c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC3B8u, 0x16B458u, 0x16B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B460u;
label_16b460:
    // 0x16b460: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b464: 0xc0f7108  jal         func_3DC420
    ctx->pc = 0x16B464u;
    SET_GPR_U32(ctx, 31, 0x16B46Cu);
    ctx->pc = 0x16B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B464u;
    // 0x16b468: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC420u, 0x16B464u, 0x16B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B46Cu;
label_16b46c:
    // 0x16b46c: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x16b46cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x16b470: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B470u;
    {
        const bool branch_taken_0x16b470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b470) {
            ctx->pc = 0x16B474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B470u;
            // 0x16b474: 0x8e300068  lw          $s0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B478u;
            goto label_16b478;
        }
    }
    ctx->pc = 0x16B478u;
label_16b478:
    // 0x16b478: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16b478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16b47c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x16b47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x16b480: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x16b480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x16b484: 0xc45489d0  lwc1        $f20, -0x7630($v0)
    ctx->pc = 0x16b484u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b488: 0x4616a832  c.eq.s      $f21, $f22
    ctx->pc = 0x16b488u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b48c: 0x0  nop
    ctx->pc = 0x16b48cu;
    // NOP
    // 0x16b490: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B490u;
    {
        const bool branch_taken_0x16b490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B490u;
        // 0x16b494: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b490) {
            ctx->pc = 0x16B49Cu;
            goto label_16b49c;
        }
    }
    ctx->pc = 0x16B498u;
    // 0x16b498: 0x92120020  lbu         $s2, 0x20($s0)
    ctx->pc = 0x16b498u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_16b49c:
    // 0x16b49c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x16b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16b4a0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16b4a4: 0xc047866  jal         func_11E198
    ctx->pc = 0x16B4A4u;
    SET_GPR_U32(ctx, 31, 0x16B4ACu);
    ctx->pc = 0x16B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4A4u;
    // 0x16b4a8: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x16B4A4u, 0x16B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4ACu;
label_16b4ac:
    // 0x16b4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16b4b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16b4b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16b4b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x16b4bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4c0: 0xc04090a  jal         func_102428
    ctx->pc = 0x16B4C0u;
    SET_GPR_U32(ctx, 31, 0x16B4C8u);
    ctx->pc = 0x16B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4C0u;
    // 0x16b4c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102428u, 0x16B4C0u, 0x16B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4C8u;
label_16b4c8:
    // 0x16b4c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B4C8u;
    {
        const bool branch_taken_0x16b4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C8u;
        // 0x16b4cc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c8) {
            ctx->pc = 0x16B4E4u;
            goto label_16b4e4;
        }
    }
    ctx->pc = 0x16B4D0u;
    // 0x16b4d0: 0xc0f6730  jal         func_3D9CC0
    ctx->pc = 0x16B4D0u;
    SET_GPR_U32(ctx, 31, 0x16B4D8u);
    ctx->pc = 0x16B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4D0u;
    // 0x16b4d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC0u, 0x16B4D0u, 0x16B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4D8u;
label_16b4d8:
    // 0x16b4d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B4D8u;
    {
        const bool branch_taken_0x16b4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4D8u;
        // 0x16b4dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4d8) {
            ctx->pc = 0x16B520u;
            goto label_16b520;
        }
    }
    ctx->pc = 0x16B4E0u;
    // 0x16b4e0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x16b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_16b4e4:
    // 0x16b4e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16b4e8: 0x90a307a8  lbu         $v1, 0x7A8($a1)
    ctx->pc = 0x16b4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1960)));
    // 0x16b4ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16b4f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16b4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16b4f4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B4F4u;
    {
        const bool branch_taken_0x16b4f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4F4u;
        // 0x16b4f8: 0xa0a307a8  sb          $v1, 0x7A8($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1960), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4f4) {
            ctx->pc = 0x16B504u;
            goto label_16b504;
        }
    }
    ctx->pc = 0x16B4FCu;
    // 0x16b4fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b500: 0xa0a207a8  sb          $v0, 0x7A8($a1)
    ctx->pc = 0x16b500u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1960), (uint8_t)GPR_U32(ctx, 2));
label_16b504:
    // 0x16b504: 0xc0f714e  jal         func_3DC538
    ctx->pc = 0x16B504u;
    SET_GPR_U32(ctx, 31, 0x16B50Cu);
    ctx->pc = 0x16B508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B504u;
    // 0x16b508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC538u, 0x16B504u, 0x16B50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B50Cu;
label_16b50c:
    // 0x16b50c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b510: 0xc0f70de  jal         func_3DC378
    ctx->pc = 0x16B510u;
    SET_GPR_U32(ctx, 31, 0x16B518u);
    ctx->pc = 0x16B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B510u;
    // 0x16b514: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC378u, 0x16B510u, 0x16B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B518u;
label_16b518:
    // 0x16b518: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16B518u;
    {
        const bool branch_taken_0x16b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B518u;
        // 0x16b51c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b518) {
            ctx->pc = 0x16B5ACu;
            goto label_16b5ac;
        }
    }
    ctx->pc = 0x16B520u;
label_16b520:
    // 0x16b520: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x16B520u;
    SET_GPR_U32(ctx, 31, 0x16B528u);
    ctx->pc = 0x16B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B520u;
    // 0x16b524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B630u, 0x16B520u, 0x16B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B528u;
label_16b528:
    // 0x16b528: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x16b528u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x16b52c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16B52Cu;
    {
        const bool branch_taken_0x16b52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B52Cu;
        // 0x16b530: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b52c) {
            ctx->pc = 0x16B584u;
            goto label_16b584;
        }
    }
    ctx->pc = 0x16B534u;
    // 0x16b534: 0x0  nop
    ctx->pc = 0x16b534u;
    // NOP
label_16b538:
    // 0x16b538: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x16b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x16b53c: 0xc0f7124  jal         func_3DC490
    ctx->pc = 0x16B53Cu;
    SET_GPR_U32(ctx, 31, 0x16B544u);
    ctx->pc = 0x16B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B53Cu;
    // 0x16b540: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC490u, 0x16B53Cu, 0x16B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B544u;
label_16b544:
    // 0x16b544: 0xc0400b0  jal         func_1002C0
    ctx->pc = 0x16B544u;
    SET_GPR_U32(ctx, 31, 0x16B54Cu);
    ctx->pc = 0x16B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B544u;
    // 0x16b548: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002C0u, 0x16B544u, 0x16B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B54Cu;
label_16b54c:
    // 0x16b54c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16b54cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b550: 0x0  nop
    ctx->pc = 0x16b550u;
    // NOP
    // 0x16b554: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16B554u;
    {
        const bool branch_taken_0x16b554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b554) {
            ctx->pc = 0x16B570u;
            goto label_16b570;
        }
    }
    ctx->pc = 0x16B55Cu;
    // 0x16b55c: 0xc040094  jal         func_100250
    ctx->pc = 0x16B55Cu;
    SET_GPR_U32(ctx, 31, 0x16B564u);
    ctx->pc = 0x16B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B55Cu;
    // 0x16b560: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100250u, 0x16B55Cu, 0x16B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B564u;
label_16b564:
    // 0x16b564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16b564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b568: 0xc05ad74  jal         func_16B5D0
    ctx->pc = 0x16B568u;
    SET_GPR_U32(ctx, 31, 0x16B570u);
    ctx->pc = 0x16B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B568u;
    // 0x16b56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B5D0u, 0x16B568u, 0x16B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B570u;
label_16b570:
    // 0x16b570: 0xc040088  jal         func_100220
    ctx->pc = 0x16B570u;
    SET_GPR_U32(ctx, 31, 0x16B578u);
    ctx->pc = 0x16B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B570u;
    // 0x16b574: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100220u, 0x16B570u, 0x16B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B578u;
label_16b578:
    // 0x16b578: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16b578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b57c: 0xc041ec0  jal         func_107B00
    ctx->pc = 0x16B57Cu;
    SET_GPR_U32(ctx, 31, 0x16B584u);
    ctx->pc = 0x16B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B57Cu;
    // 0x16b580: 0x26048758  addiu       $a0, $s0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B00u, 0x16B57Cu, 0x16B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B584u;
label_16b584:
    // 0x16b584: 0xc0f6730  jal         func_3D9CC0
    ctx->pc = 0x16B584u;
    SET_GPR_U32(ctx, 31, 0x16B58Cu);
    ctx->pc = 0x16B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B584u;
    // 0x16b588: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC0u, 0x16B584u, 0x16B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B58Cu;
label_16b58c:
    // 0x16b58c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16B58Cu;
    {
        const bool branch_taken_0x16b58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B58Cu;
        // 0x16b590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b58c) {
            ctx->pc = 0x16B538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b538;
        }
    }
    ctx->pc = 0x16B594u;
    // 0x16b594: 0xc0f714e  jal         func_3DC538
    ctx->pc = 0x16B594u;
    SET_GPR_U32(ctx, 31, 0x16B59Cu);
    ctx->pc = 0x16B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B594u;
    // 0x16b598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC538u, 0x16B594u, 0x16B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B59Cu;
label_16b59c:
    // 0x16b59c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5a0: 0xc0f70de  jal         func_3DC378
    ctx->pc = 0x16B5A0u;
    SET_GPR_U32(ctx, 31, 0x16B5A8u);
    ctx->pc = 0x16B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B5A0u;
    // 0x16b5a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC378u, 0x16B5A0u, 0x16B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5A8u;
label_16b5a8:
    // 0x16b5a8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16b5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16b5ac:
    // 0x16b5ac: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16b5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16b5b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x16b5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b5b4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16b5b8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x16b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16b5bc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x16b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16b5c0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x16b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16b5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5C4u;
        // 0x16b5c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B5CCu;
    // 0x16b5cc: 0x0  nop
    ctx->pc = 0x16b5ccu;
    // NOP
    ctx->pc = 0x16b5d0u;
}
