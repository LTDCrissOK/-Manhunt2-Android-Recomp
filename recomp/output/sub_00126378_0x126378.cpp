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

// Function: sub_00126378
// Address: 0x126378 - 0x126428
void sub_00126378_0x126378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126378_0x126378");
#endif

    switch (ctx->pc) {
        case 0x1263a4u: goto label_1263a4;
        case 0x1263d0u: goto label_1263d0;
        default: break;
    }

    ctx->pc = 0x126378u;

    // 0x126378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12637c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126380: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x126380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x126384: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x126384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x126388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12638c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12638Cu;
    {
        const bool branch_taken_0x12638c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12638Cu;
        // 0x126390: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12638c) {
            ctx->pc = 0x1263B4u;
            goto label_1263b4;
        }
    }
    ctx->pc = 0x126394u;
    // 0x126394: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x126394u;
    {
        const bool branch_taken_0x126394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126394u;
        // 0x126398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126394) {
            ctx->pc = 0x126408u;
            goto label_126408;
        }
    }
    ctx->pc = 0x12639Cu;
    // 0x12639c: 0xc04a162  jal         func_128588
    ctx->pc = 0x12639Cu;
    SET_GPR_U32(ctx, 31, 0x1263A4u);
    ctx->pc = 0x1263A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12639Cu;
    // 0x1263a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128588u, 0x12639Cu, 0x1263A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263A4u;
label_1263a4:
    // 0x1263a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1263a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1263a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1263ac: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1263ACu;
    {
        const bool branch_taken_0x1263ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1263ac) {
            ctx->pc = 0x1263B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1263ACu;
            // 0x1263b0: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1263BCu;
            goto label_1263bc;
        }
    }
    ctx->pc = 0x1263B4u;
label_1263b4:
    // 0x1263b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1263B4u;
    {
        const bool branch_taken_0x1263b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263B4u;
        // 0x1263b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263b4) {
            ctx->pc = 0x126408u;
            goto label_126408;
        }
    }
    ctx->pc = 0x1263BCu;
label_1263bc:
    // 0x1263bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1263bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263c0: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1263c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1263c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1263c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263c8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1263C8u;
    SET_GPR_U32(ctx, 31, 0x1263D0u);
    ctx->pc = 0x1263CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1263C8u;
    // 0x1263cc: 0x24c60ea0  addiu       $a2, $a2, 0xEA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1263C8u, 0x1263D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263D0u;
label_1263d0:
    // 0x1263d0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1263d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1263d4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1263d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1263d8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1263d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1263dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1263dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1263e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1263e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1263e4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1263e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1263e8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1263e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1263ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1263ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1263f0: 0x0  nop
    ctx->pc = 0x1263f0u;
    // NOP
    // 0x1263f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1263f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1263f8: 0x0  nop
    ctx->pc = 0x1263f8u;
    // NOP
    // 0x1263fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1263FCu;
    {
        const bool branch_taken_0x1263fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1263FCu;
        // 0x126400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263fc) {
            ctx->pc = 0x126408u;
            goto label_126408;
        }
    }
    ctx->pc = 0x126404u;
    // 0x126404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126408:
    // 0x126408: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x126408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12640c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12640cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x126410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126414: 0x3e00008  jr          $ra
    ctx->pc = 0x126414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126414u;
        // 0x126418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12641Cu;
    // 0x12641c: 0x0  nop
    ctx->pc = 0x12641cu;
    // NOP
    // 0x126420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x126420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x126424: 0x0  nop
    ctx->pc = 0x126424u;
    // NOP
    ctx->pc = 0x126428u;
}
