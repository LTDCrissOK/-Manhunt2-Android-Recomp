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

// Function: sub_00147930
// Address: 0x147930 - 0x1479e8
void sub_00147930_0x147930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147930_0x147930");
#endif

    switch (ctx->pc) {
        case 0x1479a4u: goto label_1479a4;
        default: break;
    }

    ctx->pc = 0x147930u;

    // 0x147930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147934: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x147934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14793c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14793cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x147940: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147944: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x147944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x147948: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x147948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14794c: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x147950: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x147950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x147954: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x147958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14795c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x147960: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x147960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x147964: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x147964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14796c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14796cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x147970: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x147970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x147974: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x147974u;
    {
        const bool branch_taken_0x147974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147974) {
            ctx->pc = 0x147978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147974u;
            // 0x147978: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147984u;
            goto label_147984;
        }
    }
    ctx->pc = 0x14797Cu;
    // 0x14797c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14797Cu;
    {
        const bool branch_taken_0x14797c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14797Cu;
        // 0x147980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14797c) {
            ctx->pc = 0x14798Cu;
            goto label_14798c;
        }
    }
    ctx->pc = 0x147984u;
label_147984:
    // 0x147984: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147988: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14798c:
    // 0x14798c: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14798Cu;
    {
        const bool branch_taken_0x14798c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14798c) {
            ctx->pc = 0x147990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14798Cu;
            // 0x147990: 0x8ce60564  lw          $a2, 0x564($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14799Cu;
            goto label_14799c;
        }
    }
    ctx->pc = 0x147994u;
    // 0x147994: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x147994u;
    {
        const bool branch_taken_0x147994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147994u;
        // 0x147998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147994) {
            ctx->pc = 0x1479DCu;
            goto label_1479dc;
        }
    }
    ctx->pc = 0x14799Cu;
label_14799c:
    // 0x14799c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14799Cu;
    SET_GPR_U32(ctx, 31, 0x1479A4u);
    ctx->pc = 0x1479A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14799Cu;
    // 0x1479a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14799Cu, 0x1479A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479A4u;
label_1479a4:
    // 0x1479a4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1479a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1479a8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1479a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1479ac: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1479acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1479b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1479b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1479b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1479b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1479b8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1479b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1479bc: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1479bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1479c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1479c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1479c4: 0x0  nop
    ctx->pc = 0x1479c4u;
    // NOP
    // 0x1479c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1479c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1479cc: 0x0  nop
    ctx->pc = 0x1479ccu;
    // NOP
    // 0x1479d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1479D0u;
    {
        const bool branch_taken_0x1479d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1479D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479D0u;
        // 0x1479d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479d0) {
            ctx->pc = 0x1479DCu;
            goto label_1479dc;
        }
    }
    ctx->pc = 0x1479D8u;
    // 0x1479d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1479d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1479dc:
    // 0x1479dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1479dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1479e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1479E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1479E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479E0u;
        // 0x1479e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1479E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1479E8u;
}
