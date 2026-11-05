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

// Function: sub_002E5098
// Address: 0x2e5098 - 0x2e52b0
void sub_002E5098_0x2e5098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5098_0x2e5098");
#endif

    switch (ctx->pc) {
        case 0x2e50e8u: goto label_2e50e8;
        case 0x2e50f0u: goto label_2e50f0;
        case 0x2e5128u: goto label_2e5128;
        case 0x2e5130u: goto label_2e5130;
        case 0x2e5168u: goto label_2e5168;
        case 0x2e5170u: goto label_2e5170;
        case 0x2e51b0u: goto label_2e51b0;
        case 0x2e51f4u: goto label_2e51f4;
        case 0x2e5214u: goto label_2e5214;
        case 0x2e5234u: goto label_2e5234;
        case 0x2e526cu: goto label_2e526c;
        case 0x2e5280u: goto label_2e5280;
        default: break;
    }

    ctx->pc = 0x2e5098u;

    // 0x2e5098: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e509c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e50a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e50a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e50a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e50a8: 0x24504da0  addiu       $s0, $v0, 0x4DA0
    ctx->pc = 0x2e50a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19872));
    // 0x2e50ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e50acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e50b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e50b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e50b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e50b8: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x2e50b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
    // 0x2e50bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e50bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e50c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e50c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e50c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e50c8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2e50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2e50cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e50d0: 0x8e630224  lw          $v1, 0x224($s3)
    ctx->pc = 0x2e50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x2e50d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x594DA4u));
    // 0x2e50d8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2e50d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e50dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E50DCu;
    {
        const bool branch_taken_0x2e50dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50DCu;
        // 0x2e50e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e50dc) {
            ctx->pc = 0x2E5100u;
            goto label_2e5100;
        }
    }
    ctx->pc = 0x2E50E4u;
    // 0x2e50e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e50e8:
    // 0x2e50e8: 0xc0fb808  jal         func_3EE020
    ctx->pc = 0x2E50E8u;
    SET_GPR_U32(ctx, 31, 0x2E50F0u);
    ctx->pc = 0x2E50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50E8u;
    // 0x2e50ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE020u, 0x2E50E8u, 0x2E50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50F0u;
label_2e50f0:
    // 0x2e50f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e50f4: 0x0  nop
    ctx->pc = 0x2e50f4u;
    // NOP
    // 0x2e50f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E50F8u;
    {
        const bool branch_taken_0x2e50f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e50f8) {
            ctx->pc = 0x2E50FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E50F8u;
            // 0x2e50fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e50e8;
        }
    }
    ctx->pc = 0x2E5100u;
label_2e5100:
    // 0x2e5100: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e5104: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e5104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2e5108: 0x24514db0  addiu       $s1, $v0, 0x4DB0
    ctx->pc = 0x2e5108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19888));
    // 0x2e510c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e510cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x594DB4u));
    // 0x2e5110: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e5110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e5114: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e5114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e5118: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2e5118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2e511c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E511Cu;
    {
        const bool branch_taken_0x2e511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E511Cu;
        // 0x2e5120: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e511c) {
            ctx->pc = 0x2E5140u;
            goto label_2e5140;
        }
    }
    ctx->pc = 0x2E5124u;
    // 0x2e5124: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2e5124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e5128:
    // 0x2e5128: 0xc0fb82c  jal         func_3EE0B0
    ctx->pc = 0x2E5128u;
    SET_GPR_U32(ctx, 31, 0x2E5130u);
    ctx->pc = 0x2E512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5128u;
    // 0x2e512c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE0B0u, 0x2E5128u, 0x2E5130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5130u;
label_2e5130:
    // 0x2e5130: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e5130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e5134: 0x0  nop
    ctx->pc = 0x2e5134u;
    // NOP
    // 0x2e5138: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E5138u;
    {
        const bool branch_taken_0x2e5138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5138) {
            ctx->pc = 0x2E513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5138u;
            // 0x2e513c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5128;
        }
    }
    ctx->pc = 0x2E5140u;
label_2e5140:
    // 0x2e5140: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2e5140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2e5144: 0x26b04dc0  addiu       $s0, $s5, 0x4DC0
    ctx->pc = 0x2e5144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 19904));
    // 0x2e5148: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e514c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e514cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e5150: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e5150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2e5154: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2e5154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2e5158: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5158u;
    {
        const bool branch_taken_0x2e5158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5158u;
        // 0x2e515c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5158) {
            ctx->pc = 0x2E5180u;
            goto label_2e5180;
        }
    }
    ctx->pc = 0x2E5160u;
    // 0x2e5160: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2e5160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e5164: 0x0  nop
    ctx->pc = 0x2e5164u;
    // NOP
label_2e5168:
    // 0x2e5168: 0xc0fb850  jal         func_3EE140
    ctx->pc = 0x2E5168u;
    SET_GPR_U32(ctx, 31, 0x2E5170u);
    ctx->pc = 0x2E516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5168u;
    // 0x2e516c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE140u, 0x2E5168u, 0x2E5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5170u;
label_2e5170:
    // 0x2e5170: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e5174: 0x0  nop
    ctx->pc = 0x2e5174u;
    // NOP
    // 0x2e5178: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E5178u;
    {
        const bool branch_taken_0x2e5178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5178) {
            ctx->pc = 0x2E517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5178u;
            // 0x2e517c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5168;
        }
    }
    ctx->pc = 0x2E5180u;
label_2e5180:
    // 0x2e5180: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e5180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2e5184: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2e5184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5188: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e5188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e518c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e518cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e5190: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2E5190u;
    {
        const bool branch_taken_0x2e5190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5190u;
        // 0x2e5194: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5190) {
            ctx->pc = 0x2E5278u;
            goto label_2e5278;
        }
    }
    ctx->pc = 0x2E5198u;
    // 0x2e5198: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e519c: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2e519cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e51a0: 0x24544b20  addiu       $s4, $v0, 0x4B20
    ctx->pc = 0x2e51a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19232));
    // 0x2e51a4: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2e51a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e51a8: 0x8e620224  lw          $v0, 0x224($s3)
    ctx->pc = 0x2e51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x2e51ac: 0x0  nop
    ctx->pc = 0x2e51acu;
    // NOP
label_2e51b0:
    // 0x2e51b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e51b4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2e51b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e51b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e51bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e51c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e51c4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e51c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e51c8: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E51C8u;
    {
        const bool branch_taken_0x2e51c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51C8u;
        // 0x2e51cc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51c8) {
            ctx->pc = 0x2E526Cu;
            goto label_2e526c;
        }
    }
    ctx->pc = 0x2E51D0u;
    // 0x2e51d0: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x2e51d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e51d4: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x2e51d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e51d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E51D8u;
    {
        const bool branch_taken_0x2e51d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51D8u;
        // 0x2e51dc: 0x2634001c  addiu       $s4, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51d8) {
            ctx->pc = 0x2E51E8u;
            goto label_2e51e8;
        }
    }
    ctx->pc = 0x2E51E0u;
    // 0x2e51e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E51E0u;
    {
        const bool branch_taken_0x2e51e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51E0u;
        // 0x2e51e4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51e0) {
            ctx->pc = 0x2E51ECu;
            goto label_2e51ec;
        }
    }
    ctx->pc = 0x2E51E8u;
label_2e51e8:
    // 0x2e51e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e51e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e51ec:
    // 0x2e51ec: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2E51ECu;
    SET_GPR_U32(ctx, 31, 0x2E51F4u);
    ctx->pc = 0x2E51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51ECu;
    // 0x2e51f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2E51ECu, 0x2E51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51F4u;
label_2e51f4:
    // 0x2e51f4: 0xae360018  sw          $s6, 0x18($s1)
    ctx->pc = 0x2e51f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    // 0x2e51f8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2e51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2e51fc: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2e51fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2e5200: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E5200u;
    {
        const bool branch_taken_0x2e5200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5200u;
        // 0x2e5204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5200) {
            ctx->pc = 0x2E5264u;
            goto label_2e5264;
        }
    }
    ctx->pc = 0x2E5208u;
    // 0x2e5208: 0x8e100274  lw          $s0, 0x274($s0)
    ctx->pc = 0x2e5208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2e520c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2E520Cu;
    SET_GPR_U32(ctx, 31, 0x2E5214u);
    ctx->pc = 0x2E5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E520Cu;
    // 0x2e5210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2E520Cu, 0x2E5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5214u;
label_2e5214:
    // 0x2e5214: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2e5214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2e5218: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5218u;
    {
        const bool branch_taken_0x2e5218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5218u;
        // 0x2e521c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5218) {
            ctx->pc = 0x2E5264u;
            goto label_2e5264;
        }
    }
    ctx->pc = 0x2E5220u;
    // 0x2e5220: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2e5220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2e5224: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2e5224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2e5228: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e5228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e522c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2E522Cu;
    SET_GPR_U32(ctx, 31, 0x2E5234u);
    ctx->pc = 0x2E5230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E522Cu;
    // 0x2e5230: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E522Cu, 0x2E5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5234u;
label_2e5234:
    // 0x2e5234: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x2e5234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2e5238: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5238u;
    {
        const bool branch_taken_0x2e5238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5238u;
        // 0x2e523c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5238) {
            ctx->pc = 0x2E5254u;
            goto label_2e5254;
        }
    }
    ctx->pc = 0x2E5240u;
    // 0x2e5240: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x2e5240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e5244: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5244u;
    {
        const bool branch_taken_0x2e5244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5244u;
        // 0x2e5248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5244) {
            ctx->pc = 0x2E5254u;
            goto label_2e5254;
        }
    }
    ctx->pc = 0x2E524Cu;
    // 0x2e524c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E524Cu;
    {
        const bool branch_taken_0x2e524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E524Cu;
        // 0x2e5250: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e524c) {
            ctx->pc = 0x2E525Cu;
            goto label_2e525c;
        }
    }
    ctx->pc = 0x2E5254u;
label_2e5254:
    // 0x2e5254: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2e5254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2e5258: 0x2e2800a  movz        $s0, $s7, $v0
    ctx->pc = 0x2e5258u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
label_2e525c:
    // 0x2e525c: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x2e525cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x2e5260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e5260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5264:
    // 0x2e5264: 0xc0fb874  jal         func_3EE1D0
    ctx->pc = 0x2E5264u;
    SET_GPR_U32(ctx, 31, 0x2E526Cu);
    ctx->pc = 0x2E5268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5264u;
    // 0x2e5268: 0x26a44dc0  addiu       $a0, $s5, 0x4DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 19904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE1D0u, 0x2E5264u, 0x2E526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E526Cu;
label_2e526c:
    // 0x2e526c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2e526cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5270: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2E5270u;
    {
        const bool branch_taken_0x2e5270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5270) {
            ctx->pc = 0x2E5274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5270u;
            // 0x2e5274: 0x8e620224  lw          $v0, 0x224($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E51B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e51b0;
        }
    }
    ctx->pc = 0x2E5278u;
label_2e5278:
    // 0x2e5278: 0xc0b941c  jal         func_2E5070
    ctx->pc = 0x2E5278u;
    SET_GPR_U32(ctx, 31, 0x2E5280u);
    ctx->pc = 0x2E527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5278u;
    // 0x2e527c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5070u, 0x2E5278u, 0x2E5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5280u;
label_2e5280:
    // 0x2e5280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e5284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5288: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e5288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e528c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e528cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e5290: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e5290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5294: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e5294u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5298: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e5298u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e529c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2e529cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e52a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e52a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e52a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E52A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52A4u;
        // 0x2e52a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E52A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E52ACu;
    // 0x2e52ac: 0x0  nop
    ctx->pc = 0x2e52acu;
    // NOP
    ctx->pc = 0x2e52b0u;
}
