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

// Function: sub_00140728
// Address: 0x140728 - 0x1407d8
void sub_00140728_0x140728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140728_0x140728");
#endif

    switch (ctx->pc) {
        case 0x140790u: goto label_140790;
        default: break;
    }

    ctx->pc = 0x140728u;

    // 0x140728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14072c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14072cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140730: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140734: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x140734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x140738: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x140738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x14073c: 0x90c3046c  lbu         $v1, 0x46C($a2)
    ctx->pc = 0x14073cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1132)));
    // 0x140740: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x140740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x140744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x140748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14074c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140754: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x140754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x140758: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x140758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14075c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x140760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140764: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x140764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x140768: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x140768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x14076c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14076Cu;
    {
        const bool branch_taken_0x14076c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14076c) {
            ctx->pc = 0x140770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14076Cu;
            // 0x140770: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14077Cu;
            goto label_14077c;
        }
    }
    ctx->pc = 0x140774u;
    // 0x140774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140774u;
    {
        const bool branch_taken_0x140774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140774u;
        // 0x140778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140774) {
            ctx->pc = 0x140784u;
            goto label_140784;
        }
    }
    ctx->pc = 0x14077Cu;
label_14077c:
    // 0x14077c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140780: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x140780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_140784:
    // 0x140784: 0x8cc60624  lw          $a2, 0x624($a2)
    ctx->pc = 0x140784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1572)));
    // 0x140788: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x140788u;
    SET_GPR_U32(ctx, 31, 0x140790u);
    ctx->pc = 0x14078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140788u;
    // 0x14078c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x140788u, 0x140790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140790u;
label_140790:
    // 0x140790: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x140790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140794: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x140794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140798: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x140798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14079c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14079cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1407a0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1407a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1407a4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1407a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1407a8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1407a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1407ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1407acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1407b0: 0x0  nop
    ctx->pc = 0x1407b0u;
    // NOP
    // 0x1407b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1407b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1407b8: 0x0  nop
    ctx->pc = 0x1407b8u;
    // NOP
    // 0x1407bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1407BCu;
    {
        const bool branch_taken_0x1407bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1407C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407BCu;
        // 0x1407c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407bc) {
            ctx->pc = 0x1407C8u;
            goto label_1407c8;
        }
    }
    ctx->pc = 0x1407C4u;
    // 0x1407c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1407c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1407c8:
    // 0x1407c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1407c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1407CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1407D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407CCu;
        // 0x1407d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1407D4u;
    // 0x1407d4: 0x0  nop
    ctx->pc = 0x1407d4u;
    // NOP
    ctx->pc = 0x1407d8u;
}
