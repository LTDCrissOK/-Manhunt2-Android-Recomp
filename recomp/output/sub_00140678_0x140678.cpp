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

// Function: sub_00140678
// Address: 0x140678 - 0x140728
void sub_00140678_0x140678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140678_0x140678");
#endif

    switch (ctx->pc) {
        case 0x1406e0u: goto label_1406e0;
        default: break;
    }

    ctx->pc = 0x140678u;

    // 0x140678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14067c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14067cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x140684: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x140684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x140688: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x140688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x14068c: 0x90c3046c  lbu         $v1, 0x46C($a2)
    ctx->pc = 0x14068cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1132)));
    // 0x140690: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x140694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x140698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14069c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1406a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1406a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1406a4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1406a8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1406ac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1406b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1406b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1406b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1406b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1406b8: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x1406b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x1406bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1406BCu;
    {
        const bool branch_taken_0x1406bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1406bc) {
            ctx->pc = 0x1406C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1406BCu;
            // 0x1406c0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406CCu;
            goto label_1406cc;
        }
    }
    ctx->pc = 0x1406C4u;
    // 0x1406c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1406C4u;
    {
        const bool branch_taken_0x1406c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406C4u;
        // 0x1406c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406c4) {
            ctx->pc = 0x1406D4u;
            goto label_1406d4;
        }
    }
    ctx->pc = 0x1406CCu;
label_1406cc:
    // 0x1406cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1406d0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1406d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1406d4:
    // 0x1406d4: 0x8cc60624  lw          $a2, 0x624($a2)
    ctx->pc = 0x1406d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1572)));
    // 0x1406d8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1406D8u;
    SET_GPR_U32(ctx, 31, 0x1406E0u);
    ctx->pc = 0x1406DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406D8u;
    // 0x1406dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1406D8u, 0x1406E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406E0u;
label_1406e0:
    // 0x1406e0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1406e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1406e4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1406e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1406e8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1406e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1406ec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1406ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1406f0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1406f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1406f4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1406f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1406f8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1406f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1406fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1406fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140700: 0x0  nop
    ctx->pc = 0x140700u;
    // NOP
    // 0x140704: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x140704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140708: 0x0  nop
    ctx->pc = 0x140708u;
    // NOP
    // 0x14070c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14070Cu;
    {
        const bool branch_taken_0x14070c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14070Cu;
        // 0x140710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14070c) {
            ctx->pc = 0x140718u;
            goto label_140718;
        }
    }
    ctx->pc = 0x140714u;
    // 0x140714: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x140714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140718:
    // 0x140718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14071c: 0x3e00008  jr          $ra
    ctx->pc = 0x14071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14071Cu;
        // 0x140720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140724u;
    // 0x140724: 0x0  nop
    ctx->pc = 0x140724u;
    // NOP
    ctx->pc = 0x140728u;
}
