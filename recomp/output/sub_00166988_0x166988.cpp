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

// Function: sub_00166988
// Address: 0x166988 - 0x166af8
void sub_00166988_0x166988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166988_0x166988");
#endif

    switch (ctx->pc) {
        case 0x166a08u: goto label_166a08;
        case 0x166a38u: goto label_166a38;
        case 0x166a90u: goto label_166a90;
        default: break;
    }

    ctx->pc = 0x166988u;

    // 0x166988: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x166988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x16698c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16698cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x166990: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x166990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x166994: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x166994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x166998: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x166998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x16699c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x16699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1669a0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1669a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1669a4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1669a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1669a8: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1669a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1669ac: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1669acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1669b0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1669b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1669b4: 0x8c8202e0  lw          $v0, 0x2E0($a0)
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x1669b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1669b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1669bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1669bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1669c0: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1669c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1669c4: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1669C4u;
    {
        const bool branch_taken_0x1669c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669c4) {
            ctx->pc = 0x1669C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1669C4u;
            // 0x1669c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166AD0u;
            goto label_166ad0;
        }
    }
    ctx->pc = 0x1669CCu;
    // 0x1669cc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1669ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1669d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1669d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1669d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1669d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1669d8: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1669d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1669dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1669DCu;
    {
        const bool branch_taken_0x1669dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1669dc) {
            ctx->pc = 0x1669E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1669DCu;
            // 0x1669e0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1669ECu;
            goto label_1669ec;
        }
    }
    ctx->pc = 0x1669E4u;
    // 0x1669e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1669E4u;
    {
        const bool branch_taken_0x1669e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669E4u;
        // 0x1669e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669e4) {
            ctx->pc = 0x1669F4u;
            goto label_1669f4;
        }
    }
    ctx->pc = 0x1669ECu;
label_1669ec:
    // 0x1669ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1669f0: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x1669f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1669f4:
    // 0x1669f4: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x1669F4u;
    {
        const bool branch_taken_0x1669f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1669F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1669F4u;
        // 0x1669f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669f4) {
            ctx->pc = 0x166AD0u;
            goto label_166ad0;
        }
    }
    ctx->pc = 0x1669FCu;
    // 0x1669fc: 0x8c840218  lw          $a0, 0x218($a0)
    ctx->pc = 0x1669fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x166a00: 0xc04f872  jal         func_13E1C8
    ctx->pc = 0x166A00u;
    SET_GPR_U32(ctx, 31, 0x166A08u);
    ctx->pc = 0x166A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A00u;
    // 0x166a04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1C8u, 0x166A00u, 0x166A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A08u;
label_166a08:
    // 0x166a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x166a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a0c: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x166A0Cu;
    {
        const bool branch_taken_0x166a0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A0Cu;
        // 0x166a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a0c) {
            ctx->pc = 0x166AD0u;
            goto label_166ad0;
        }
    }
    ctx->pc = 0x166A14u;
    // 0x166a14: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x166A14u;
    {
        const bool branch_taken_0x166a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A14u;
        // 0x166a18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a14) {
            ctx->pc = 0x166AD0u;
            goto label_166ad0;
        }
    }
    ctx->pc = 0x166A1Cu;
    // 0x166a1c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x166a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x166a20: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x166a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x166a24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x166a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x166a28: 0x24529c14  addiu       $s2, $v0, -0x63EC
    ctx->pc = 0x166a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x166a2c: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x166a2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x166a30: 0x2654fefc  addiu       $s4, $s2, -0x104
    ctx->pc = 0x166a30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967036));
    // 0x166a34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x166a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_166a38:
    // 0x166a38: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x166a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x166a3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166a40: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x166A40u;
    {
        const bool branch_taken_0x166a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A40u;
        // 0x166a44: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a40) {
            ctx->pc = 0x166AB8u;
            goto label_166ab8;
        }
    }
    ctx->pc = 0x166A48u;
    // 0x166a48: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x166a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x166a4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166a50: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x166A50u;
    {
        const bool branch_taken_0x166a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a50) {
            ctx->pc = 0x166A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A50u;
            // 0x166a54: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166ABCu;
            goto label_166abc;
        }
    }
    ctx->pc = 0x166A58u;
    // 0x166a58: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x166a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x166a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166a60: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x166a64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166a68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166A68u;
    {
        const bool branch_taken_0x166a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166a68) {
            ctx->pc = 0x166A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A68u;
            // 0x166a6c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A78u;
            goto label_166a78;
        }
    }
    ctx->pc = 0x166A70u;
    // 0x166a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166A70u;
    {
        const bool branch_taken_0x166a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A70u;
        // 0x166a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a70) {
            ctx->pc = 0x166A80u;
            goto label_166a80;
        }
    }
    ctx->pc = 0x166A78u;
label_166a78:
    // 0x166a78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166a7c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x166a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_166a80:
    // 0x166a80: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x166A80u;
    {
        const bool branch_taken_0x166a80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A80u;
        // 0x166a84: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a80) {
            ctx->pc = 0x166AB8u;
            goto label_166ab8;
        }
    }
    ctx->pc = 0x166A88u;
    // 0x166a88: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x166A88u;
    SET_GPR_U32(ctx, 31, 0x166A90u);
    ctx->pc = 0x166A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A88u;
    // 0x166a8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x166A88u, 0x166A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A90u;
label_166a90:
    // 0x166a90: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x166a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x166a94: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x166a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x166a98: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x166a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x166a9c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x166a9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x166aa0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x166aa0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x166aa4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x166aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x166aa8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x166aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166aac: 0x0  nop
    ctx->pc = 0x166aacu;
    // NOP
    // 0x166ab0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x166AB0u;
    {
        const bool branch_taken_0x166ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AB0u;
        // 0x166ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ab0) {
            ctx->pc = 0x166AD0u;
            goto label_166ad0;
        }
    }
    ctx->pc = 0x166AB8u;
label_166ab8:
    // 0x166ab8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_166abc:
    // 0x166abc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x166abcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166ac0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x166ac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x166ac4: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x166AC4u;
    {
        const bool branch_taken_0x166ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AC4u;
        // 0x166ac8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ac4) {
            ctx->pc = 0x166A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166a38;
        }
    }
    ctx->pc = 0x166ACCu;
    // 0x166acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ad0:
    // 0x166ad0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x166ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x166ad4: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x166ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x166ad8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x166ad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x166adc: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x166adcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x166ae0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x166ae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x166ae4: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x166ae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x166ae8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x166ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x166aec: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x166aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166af0: 0x3e00008  jr          $ra
    ctx->pc = 0x166AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AF0u;
        // 0x166af4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166AF8u;
}
