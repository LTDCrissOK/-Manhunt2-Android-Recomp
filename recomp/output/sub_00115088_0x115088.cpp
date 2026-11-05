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

// Function: sub_00115088
// Address: 0x115088 - 0x1151f0
void sub_00115088_0x115088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115088_0x115088");
#endif

    switch (ctx->pc) {
        case 0x1150b0u: goto label_1150b0;
        case 0x1150bcu: goto label_1150bc;
        case 0x1150ccu: goto label_1150cc;
        case 0x1150ecu: goto label_1150ec;
        case 0x115114u: goto label_115114;
        case 0x115124u: goto label_115124;
        case 0x115134u: goto label_115134;
        case 0x115140u: goto label_115140;
        case 0x11514cu: goto label_11514c;
        case 0x115174u: goto label_115174;
        case 0x1151b0u: goto label_1151b0;
        case 0x1151c0u: goto label_1151c0;
        case 0x1151d0u: goto label_1151d0;
        case 0x1151dcu: goto label_1151dc;
        default: break;
    }

    ctx->pc = 0x115088u;

    // 0x115088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11508c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x115090: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x115090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x115094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115098: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11509c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x11509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x1150a0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1150A0u;
    {
        const bool branch_taken_0x1150a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A0u;
        // 0x1150a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150a0) {
            ctx->pc = 0x1151E0u;
            goto label_1151e0;
        }
    }
    ctx->pc = 0x1150A8u;
    // 0x1150a8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1150A8u;
    SET_GPR_U32(ctx, 31, 0x1150B0u);
    ctx->pc = 0x1150ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150A8u;
    // 0x1150ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1150A8u, 0x1150B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150B0u;
label_1150b0:
    // 0x1150b0: 0x8e25011c  lw          $a1, 0x11C($s1)
    ctx->pc = 0x1150b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x1150b4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1150B4u;
    SET_GPR_U32(ctx, 31, 0x1150BCu);
    ctx->pc = 0x1150B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150B4u;
    // 0x1150b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1150B4u, 0x1150BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150BCu;
label_1150bc:
    // 0x1150bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1150BCu;
    {
        const bool branch_taken_0x1150bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150BCu;
        // 0x1150c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150bc) {
            ctx->pc = 0x11510Cu;
            goto label_11510c;
        }
    }
    ctx->pc = 0x1150C4u;
    // 0x1150c4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1150C4u;
    SET_GPR_U32(ctx, 31, 0x1150CCu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1150C4u, 0x1150CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150CCu;
label_1150cc:
    // 0x1150cc: 0x240309c5  addiu       $v1, $zero, 0x9C5
    ctx->pc = 0x1150ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2501));
    // 0x1150d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1150d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1150d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1150d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1150d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1150D8u;
    {
        const bool branch_taken_0x1150d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1150d8) {
            ctx->pc = 0x1150DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1150D8u;
            // 0x1150dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1150E0u;
            goto label_1150e0;
        }
    }
    ctx->pc = 0x1150E0u;
label_1150e0:
    // 0x1150e0: 0x8010  mfhi        $s0
    ctx->pc = 0x1150e0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1150e4: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x1150E4u;
    SET_GPR_U32(ctx, 31, 0x1150ECu);
    ctx->pc = 0x1150E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150E4u;
    // 0x1150e8: 0x261007d0  addiu       $s0, $s0, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x1150E4u, 0x1150ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150ECu;
label_1150ec:
    // 0x1150ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1150ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1150f0: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x1150f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1150f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1150F4u;
    {
        const bool branch_taken_0x1150f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1150F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150F4u;
        // 0x1150f8: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150f4) {
            ctx->pc = 0x115108u;
            goto label_115108;
        }
    }
    ctx->pc = 0x1150FCu;
    // 0x1150fc: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x1150fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x115100: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115100u;
    {
        const bool branch_taken_0x115100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115100u;
        // 0x115104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115100) {
            ctx->pc = 0x11511Cu;
            goto label_11511c;
        }
    }
    ctx->pc = 0x115108u;
label_115108:
    // 0x115108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x115108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11510c:
    // 0x11510c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x11510Cu;
    SET_GPR_U32(ctx, 31, 0x115114u);
    ctx->pc = 0x115110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11510Cu;
    // 0x115110: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x11510Cu, 0x115114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115114u;
label_115114:
    // 0x115114: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x115114u;
    {
        const bool branch_taken_0x115114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115114u;
        // 0x115118: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115114) {
            ctx->pc = 0x1151E0u;
            goto label_1151e0;
        }
    }
    ctx->pc = 0x11511Cu;
label_11511c:
    // 0x11511c: 0xc0449d6  jal         func_112758
    ctx->pc = 0x11511Cu;
    SET_GPR_U32(ctx, 31, 0x115124u);
    ctx->pc = 0x115120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11511Cu;
    // 0x115120: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x11511Cu, 0x115124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115124u;
label_115124:
    // 0x115124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115128: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x11512c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x11512Cu;
    SET_GPR_U32(ctx, 31, 0x115134u);
    ctx->pc = 0x115130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11512Cu;
    // 0x115130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x11512Cu, 0x115134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115134u;
label_115134:
    // 0x115134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115138: 0xc046154  jal         func_118550
    ctx->pc = 0x115138u;
    SET_GPR_U32(ctx, 31, 0x115140u);
    ctx->pc = 0x11513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115138u;
    // 0x11513c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x115138u, 0x115140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115140u;
label_115140:
    // 0x115140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115144: 0xc046256  jal         func_118958
    ctx->pc = 0x115144u;
    SET_GPR_U32(ctx, 31, 0x11514Cu);
    ctx->pc = 0x115148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115144u;
    // 0x115148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x115144u, 0x11514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11514Cu;
label_11514c:
    // 0x11514c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x11514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x115150: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x115154: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x115154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x115158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11515c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115160: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x115160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x115164: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x115164u;
    {
        const bool branch_taken_0x115164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115164u;
        // 0x115168: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115164) {
            ctx->pc = 0x1151A0u;
            goto label_1151a0;
        }
    }
    ctx->pc = 0x11516Cu;
    // 0x11516c: 0xc0619f6  jal         func_1867D8
    ctx->pc = 0x11516Cu;
    SET_GPR_U32(ctx, 31, 0x115174u);
    ctx->pc = 0x115170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11516Cu;
    // 0x115170: 0x8c440ff4  lw          $a0, 0xFF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1867D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1867D8u, 0x11516Cu, 0x115174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115174u;
label_115174:
    // 0x115174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115178: 0x0  nop
    ctx->pc = 0x115178u;
    // NOP
    // 0x11517c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11517cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x115180: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x115180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x115184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115188: 0x0  nop
    ctx->pc = 0x115188u;
    // NOP
    // 0x11518c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11518cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115190: 0x0  nop
    ctx->pc = 0x115190u;
    // NOP
    // 0x115194: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x115194u;
    {
        const bool branch_taken_0x115194 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x115198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115194u;
        // 0x115198: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115194) {
            ctx->pc = 0x1151A0u;
            goto label_1151a0;
        }
    }
    ctx->pc = 0x11519Cu;
    // 0x11519c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1151a0:
    // 0x1151a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1151A0u;
    {
        const bool branch_taken_0x1151a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A0u;
        // 0x1151a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a0) {
            ctx->pc = 0x1151B8u;
            goto label_1151b8;
        }
    }
    ctx->pc = 0x1151A8u;
    // 0x1151a8: 0xc046164  jal         func_118590
    ctx->pc = 0x1151A8u;
    SET_GPR_U32(ctx, 31, 0x1151B0u);
    ctx->pc = 0x1151ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151A8u;
    // 0x1151ac: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x1151A8u, 0x1151B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151B0u;
label_1151b0:
    // 0x1151b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1151B0u;
    {
        const bool branch_taken_0x1151b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151B0u;
        // 0x1151b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151b0) {
            ctx->pc = 0x1151C4u;
            goto label_1151c4;
        }
    }
    ctx->pc = 0x1151B8u;
label_1151b8:
    // 0x1151b8: 0xc046164  jal         func_118590
    ctx->pc = 0x1151B8u;
    SET_GPR_U32(ctx, 31, 0x1151C0u);
    ctx->pc = 0x1151BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151B8u;
    // 0x1151bc: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x1151B8u, 0x1151C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151C0u;
label_1151c0:
    // 0x1151c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1151c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1151c4:
    // 0x1151c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1151c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151c8: 0xc044e70  jal         func_1139C0
    ctx->pc = 0x1151C8u;
    SET_GPR_U32(ctx, 31, 0x1151D0u);
    ctx->pc = 0x1151CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151C8u;
    // 0x1151cc: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1139C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1139C0u, 0x1151C8u, 0x1151D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151D0u;
label_1151d0:
    // 0x1151d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1151d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151d4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1151D4u;
    SET_GPR_U32(ctx, 31, 0x1151DCu);
    ctx->pc = 0x1151D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151D4u;
    // 0x1151d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1151D4u, 0x1151DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151DCu;
label_1151dc:
    // 0x1151dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1151e0:
    // 0x1151e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1151e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1151e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1151e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1151e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1151E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1151ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151E8u;
        // 0x1151ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1151E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1151F0u;
}
