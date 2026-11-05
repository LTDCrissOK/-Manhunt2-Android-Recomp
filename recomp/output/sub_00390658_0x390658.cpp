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

// Function: sub_00390658
// Address: 0x390658 - 0x3907a8
void sub_00390658_0x390658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390658_0x390658");
#endif

    switch (ctx->pc) {
        case 0x39067cu: goto label_39067c;
        case 0x390694u: goto label_390694;
        case 0x3906c4u: goto label_3906c4;
        case 0x3906f0u: goto label_3906f0;
        case 0x39071cu: goto label_39071c;
        case 0x390740u: goto label_390740;
        case 0x390750u: goto label_390750;
        case 0x39076cu: goto label_39076c;
        case 0x39077cu: goto label_39077c;
        default: break;
    }

    ctx->pc = 0x390658u;

    // 0x390658: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x390658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39065c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x39065cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x390660: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x390660u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x390664: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x390664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x390668: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x390668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x39066c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x39066cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x390670: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x390670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x390674: 0xc0e46f6  jal         func_391BD8
    ctx->pc = 0x390674u;
    SET_GPR_U32(ctx, 31, 0x39067Cu);
    ctx->pc = 0x390678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390674u;
    // 0x390678: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391BD8u, 0x390674u, 0x39067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39067Cu;
label_39067c:
    // 0x39067c: 0x8e30a478  lw          $s0, -0x5B88($s1)
    ctx->pc = 0x39067cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x390680: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x390680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x390684: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x390684u;
    {
        const bool branch_taken_0x390684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x390688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390684u;
        // 0x390688: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390684) {
            ctx->pc = 0x390784u;
            goto label_390784;
        }
    }
    ctx->pc = 0x39068Cu;
    // 0x39068c: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x39068Cu;
    SET_GPR_U32(ctx, 31, 0x390694u);
    ctx->pc = 0x390690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39068Cu;
    // 0x390690: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x39068Cu, 0x390694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390694u;
label_390694:
    // 0x390694: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x390694u;
    {
        const bool branch_taken_0x390694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390694u;
        // 0x390698: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390694) {
            ctx->pc = 0x390788u;
            goto label_390788;
        }
    }
    ctx->pc = 0x39069Cu;
    // 0x39069c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39069cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3906a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3906a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3906a4: 0x0  nop
    ctx->pc = 0x3906a4u;
    // NOP
    // 0x3906a8: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x3906A8u;
    {
        const bool branch_taken_0x3906a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3906ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906A8u;
        // 0x3906ac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906a8) {
            ctx->pc = 0x390784u;
            goto label_390784;
        }
    }
    ctx->pc = 0x3906B0u;
    // 0x3906b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3906b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3906b4: 0x24429930  addiu       $v0, $v0, -0x66D0
    ctx->pc = 0x3906b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940976));
    // 0x3906b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3906b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3906bc: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3906BCu;
    SET_GPR_U32(ctx, 31, 0x3906C4u);
    ctx->pc = 0x3906C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3906BCu;
    // 0x3906c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3906BCu, 0x3906C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3906C4u;
label_3906c4:
    // 0x3906c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3906c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3906c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3906C8u;
    {
        const bool branch_taken_0x3906c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3906CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906C8u;
        // 0x3906cc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906c8) {
            ctx->pc = 0x3906E0u;
            goto label_3906e0;
        }
    }
    ctx->pc = 0x3906D0u;
    // 0x3906d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x3906d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x3906d4: 0xdc229938  ld          $v0, -0x66C8($at)
    ctx->pc = 0x3906d4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x479938u));
    // 0x3906d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3906D8u;
    {
        const bool branch_taken_0x3906d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3906DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906D8u;
        // 0x3906dc: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3906d8) {
            ctx->pc = 0x3906F4u;
            goto label_3906f4;
        }
    }
    ctx->pc = 0x3906E0u;
label_3906e0:
    // 0x3906e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3906e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3906e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3906e8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3906E8u;
    SET_GPR_U32(ctx, 31, 0x3906F0u);
    ctx->pc = 0x3906ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3906E8u;
    // 0x3906ec: 0xdc45a470  ld          $a1, -0x5B90($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294943856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3906E8u, 0x3906F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3906F0u;
label_3906f0:
    // 0x3906f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3906f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_3906f4:
    // 0x3906f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3906f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3906f8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3906f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3906fc: 0x0  nop
    ctx->pc = 0x3906fcu;
    // NOP
    // 0x390700: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x390700u;
    {
        const bool branch_taken_0x390700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x390704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390700u;
        // 0x390704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390700) {
            ctx->pc = 0x390724u;
            goto label_390724;
        }
    }
    ctx->pc = 0x390708u;
    // 0x390708: 0x8e23a478  lw          $v1, -0x5B88($s1)
    ctx->pc = 0x390708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x39070c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39070Cu;
    {
        const bool branch_taken_0x39070c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x390710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39070Cu;
        // 0x390710: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39070c) {
            ctx->pc = 0x390738u;
            goto label_390738;
        }
    }
    ctx->pc = 0x390714u;
    // 0x390714: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390714u;
    SET_GPR_U32(ctx, 31, 0x39071Cu);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390714u, 0x39071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39071Cu;
label_39071c:
    // 0x39071c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39071Cu;
    {
        const bool branch_taken_0x39071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39071Cu;
        // 0x390720: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39071c) {
            ctx->pc = 0x390754u;
            goto label_390754;
        }
    }
    ctx->pc = 0x390724u;
label_390724:
    // 0x390724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390728: 0x8e22a478  lw          $v0, -0x5B88($s1)
    ctx->pc = 0x390728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x39072c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x39072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390730: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390730u;
    {
        const bool branch_taken_0x390730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x390734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390730u;
        // 0x390734: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390730) {
            ctx->pc = 0x390748u;
            goto label_390748;
        }
    }
    ctx->pc = 0x390738u;
label_390738:
    // 0x390738: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x390738u;
    SET_GPR_U32(ctx, 31, 0x390740u);
    ctx->pc = 0x39073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390738u;
    // 0x39073c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x390738u, 0x390740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390740u;
label_390740:
    // 0x390740: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390740u;
    {
        const bool branch_taken_0x390740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390740u;
        // 0x390744: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390740) {
            ctx->pc = 0x39075Cu;
            goto label_39075c;
        }
    }
    ctx->pc = 0x390748u;
label_390748:
    // 0x390748: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390748u;
    SET_GPR_U32(ctx, 31, 0x390750u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390748u, 0x390750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390750u;
label_390750:
    // 0x390750: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x390750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_390754:
    // 0x390754: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x390758: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x390758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39075c:
    // 0x39075c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39075Cu;
    {
        const bool branch_taken_0x39075c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39075c) {
            ctx->pc = 0x390774u;
            goto label_390774;
        }
    }
    ctx->pc = 0x390764u;
    // 0x390764: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390764u;
    SET_GPR_U32(ctx, 31, 0x39076Cu);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390764u, 0x39076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39076Cu;
label_39076c:
    // 0x39076c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x39076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390770: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_390774:
    // 0x390774: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x390774u;
    SET_GPR_U32(ctx, 31, 0x39077Cu);
    ctx->pc = 0x390778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390774u;
    // 0x390778: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x390774u, 0x39077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39077Cu;
label_39077c:
    // 0x39077c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39077Cu;
    {
        const bool branch_taken_0x39077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39077Cu;
        // 0x390780: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39077c) {
            ctx->pc = 0x39078Cu;
            goto label_39078c;
        }
    }
    ctx->pc = 0x390784u;
label_390784:
    // 0x390784: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x390784u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_390788:
    // 0x390788: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x390788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39078c:
    // 0x39078c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x39078cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390790: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x390790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390794: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x390794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x390798: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x390798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39079c: 0x3e00008  jr          $ra
    ctx->pc = 0x39079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3907A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39079Cu;
        // 0x3907a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39079Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3907A4u;
    // 0x3907a4: 0x0  nop
    ctx->pc = 0x3907a4u;
    // NOP
    ctx->pc = 0x3907a8u;
}
