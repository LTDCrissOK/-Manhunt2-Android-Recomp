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

// Function: sub_0010F1E0
// Address: 0x10f1e0 - 0x10f2c0
void sub_0010F1E0_0x10f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1E0_0x10f1e0");
#endif

    switch (ctx->pc) {
        case 0x10f1fcu: goto label_10f1fc;
        case 0x10f27cu: goto label_10f27c;
        default: break;
    }

    ctx->pc = 0x10f1e0u;

    // 0x10f1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10f1e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f1e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10f1ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10f1f4: 0xc043a12  jal         func_10E848
    ctx->pc = 0x10F1F4u;
    SET_GPR_U32(ctx, 31, 0x10F1FCu);
    ctx->pc = 0x10F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1F4u;
    // 0x10f1f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E848u, 0x10F1F4u, 0x10F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1FCu;
label_10f1fc:
    // 0x10f1fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F1FCu;
    {
        const bool branch_taken_0x10f1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1FCu;
        // 0x10f200: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1fc) {
            ctx->pc = 0x10F20Cu;
            goto label_10f20c;
        }
    }
    ctx->pc = 0x10F204u;
    // 0x10f204: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x10F204u;
    {
        const bool branch_taken_0x10f204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F204u;
        // 0x10f208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f204) {
            ctx->pc = 0x10F2ACu;
            goto label_10f2ac;
        }
    }
    ctx->pc = 0x10F20Cu;
label_10f20c:
    // 0x10f20c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10f210: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10f210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f214: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10f214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10f218: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10f218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10f220: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10f224: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F224u;
    {
        const bool branch_taken_0x10f224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f224) {
            ctx->pc = 0x10F228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F224u;
            // 0x10f228: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F234u;
            goto label_10f234;
        }
    }
    ctx->pc = 0x10F22Cu;
    // 0x10f22c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F22Cu;
    {
        const bool branch_taken_0x10f22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F22Cu;
        // 0x10f230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f22c) {
            ctx->pc = 0x10F23Cu;
            goto label_10f23c;
        }
    }
    ctx->pc = 0x10F234u;
label_10f234:
    // 0x10f234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f238: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x10f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10f23c:
    // 0x10f23c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x10f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x10f240: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10f240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10f244: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10f248: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x10f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x10f24c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10f250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10f250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f254: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10f258: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x10f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x10f25c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F25Cu;
    {
        const bool branch_taken_0x10f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f25c) {
            ctx->pc = 0x10F260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F25Cu;
            // 0x10f260: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F26Cu;
            goto label_10f26c;
        }
    }
    ctx->pc = 0x10F264u;
    // 0x10f264: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F264u;
    {
        const bool branch_taken_0x10f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F264u;
        // 0x10f268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f264) {
            ctx->pc = 0x10F274u;
            goto label_10f274;
        }
    }
    ctx->pc = 0x10F26Cu;
label_10f26c:
    // 0x10f26c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f270: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x10f270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10f274:
    // 0x10f274: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x10F274u;
    SET_GPR_U32(ctx, 31, 0x10F27Cu);
    ctx->pc = 0x10F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F274u;
    // 0x10f278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x10F274u, 0x10F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F27Cu;
label_10f27c:
    // 0x10f27c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x10f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10f280: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x10f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10f284: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x10f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10f288: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x10f288u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10f28c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10f28cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x10f290: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x10f290u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x10f294: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x10f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10f298: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10f298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10f29c: 0x0  nop
    ctx->pc = 0x10f29cu;
    // NOP
    // 0x10f2a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x10F2A0u;
    {
        const bool branch_taken_0x10f2a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2A0u;
        // 0x10f2a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f2a0) {
            ctx->pc = 0x10F2ACu;
            goto label_10f2ac;
        }
    }
    ctx->pc = 0x10F2A8u;
    // 0x10f2a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f2ac:
    // 0x10f2ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f2b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10f2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f2b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2B8u;
        // 0x10f2bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F2C0u;
}
