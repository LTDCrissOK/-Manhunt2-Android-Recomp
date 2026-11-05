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

// Function: sub_001401F0
// Address: 0x1401f0 - 0x140320
void sub_001401F0_0x1401f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001401F0_0x1401f0");
#endif

    switch (ctx->pc) {
        case 0x14023cu: goto label_14023c;
        case 0x1402c8u: goto label_1402c8;
        default: break;
    }

    ctx->pc = 0x1401f0u;

    // 0x1401f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1401f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1401f4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1401f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1401f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1401f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1401fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1401fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x140200: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x140200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x140204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14020c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140210: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x140210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x140214: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x140214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140218: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140218u;
    {
        const bool branch_taken_0x140218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140218u;
        // 0x14021c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140218) {
            ctx->pc = 0x14023Cu;
            goto label_14023c;
        }
    }
    ctx->pc = 0x140220u;
    // 0x140220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140224: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x140224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140228: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x140228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14022c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140230: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x140230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x140234: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140234u;
    {
        const bool branch_taken_0x140234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140234) {
            ctx->pc = 0x140238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140234u;
            // 0x140238: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140244u;
            goto label_140244;
        }
    }
    ctx->pc = 0x14023Cu;
label_14023c:
    // 0x14023c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x14023Cu;
    {
        const bool branch_taken_0x14023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14023Cu;
        // 0x140240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14023c) {
            ctx->pc = 0x14030Cu;
            goto label_14030c;
        }
    }
    ctx->pc = 0x140244u;
label_140244:
    // 0x140244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140248: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14024c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x140250: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140250u;
    {
        const bool branch_taken_0x140250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140250) {
            ctx->pc = 0x140254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140250u;
            // 0x140254: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140260u;
            goto label_140260;
        }
    }
    ctx->pc = 0x140258u;
    // 0x140258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140258u;
    {
        const bool branch_taken_0x140258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140258u;
        // 0x14025c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140258) {
            ctx->pc = 0x140268u;
            goto label_140268;
        }
    }
    ctx->pc = 0x140260u;
label_140260:
    // 0x140260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140264: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x140264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_140268:
    // 0x140268: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x140268u;
    {
        const bool branch_taken_0x140268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140268u;
        // 0x14026c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140268) {
            ctx->pc = 0x14030Cu;
            goto label_14030c;
        }
    }
    ctx->pc = 0x140270u;
    // 0x140270: 0x8e020620  lw          $v0, 0x620($s0)
    ctx->pc = 0x140270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x140274: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x140274u;
    {
        const bool branch_taken_0x140274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140274u;
        // 0x140278: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140274) {
            ctx->pc = 0x14023Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14023c;
        }
    }
    ctx->pc = 0x14027Cu;
    // 0x14027c: 0x26239a08  addiu       $v1, $s1, -0x65F8
    ctx->pc = 0x14027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
    // 0x140280: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140284: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x140284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x140288: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x140288u;
    {
        const bool branch_taken_0x140288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140288) {
            ctx->pc = 0x14028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140288u;
            // 0x14028c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14030Cu;
            goto label_14030c;
        }
    }
    ctx->pc = 0x140290u;
    // 0x140290: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x140290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x140294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140298: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x140298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14029c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1402a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1402A0u;
    {
        const bool branch_taken_0x1402a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1402a0) {
            ctx->pc = 0x1402A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1402A0u;
            // 0x1402a4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1402B0u;
            goto label_1402b0;
        }
    }
    ctx->pc = 0x1402A8u;
    // 0x1402a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1402A8u;
    {
        const bool branch_taken_0x1402a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1402ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402A8u;
        // 0x1402ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402a8) {
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x1402B0u;
label_1402b0:
    // 0x1402b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1402b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1402b4: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1402b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1402b8:
    // 0x1402b8: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1402B8u;
    {
        const bool branch_taken_0x1402b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1402BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402B8u;
        // 0x1402bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402b8) {
            ctx->pc = 0x14030Cu;
            goto label_14030c;
        }
    }
    ctx->pc = 0x1402C0u;
    // 0x1402c0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1402C0u;
    SET_GPR_U32(ctx, 31, 0x1402C8u);
    ctx->pc = 0x1402C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1402C0u;
    // 0x1402c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1402C0u, 0x1402C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1402C8u;
label_1402c8:
    // 0x1402c8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1402c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1402cc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1402ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1402d0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1402d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1402d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1402d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1402d8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1402d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1402dc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1402dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1402e0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1402e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1402e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1402e8: 0x0  nop
    ctx->pc = 0x1402e8u;
    // NOP
    // 0x1402ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1402ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1402f0: 0x0  nop
    ctx->pc = 0x1402f0u;
    // NOP
    // 0x1402f4: 0x4500ffd1  bc1f        . + 4 + (-0x2F << 2)
    ctx->pc = 0x1402F4u;
    {
        const bool branch_taken_0x1402f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1402F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1402F4u;
        // 0x1402f8: 0x26239a08  addiu       $v1, $s1, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402f4) {
            ctx->pc = 0x14023Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14023c;
        }
    }
    ctx->pc = 0x1402FCu;
    // 0x1402fc: 0x8e020620  lw          $v0, 0x620($s0)
    ctx->pc = 0x1402fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x140300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140304: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140308: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x140308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_14030c:
    // 0x14030c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14030cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140310: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x140310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x140314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x140314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140318: 0x3e00008  jr          $ra
    ctx->pc = 0x140318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140318u;
        // 0x14031c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140320u;
}
