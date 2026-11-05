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

// Function: sub_001798E8
// Address: 0x1798e8 - 0x179a08
void sub_001798E8_0x1798e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001798E8_0x1798e8");
#endif

    switch (ctx->pc) {
        case 0x179938u: goto label_179938;
        case 0x179974u: goto label_179974;
        case 0x17998cu: goto label_17998c;
        case 0x17999cu: goto label_17999c;
        case 0x1799c8u: goto label_1799c8;
        default: break;
    }

    ctx->pc = 0x1798e8u;

    // 0x1798e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1798e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1798ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1798ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1798f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1798f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1798f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1798f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1798f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1798fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1798fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179900: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179904: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x179904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x179908: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x179908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17990c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x179910: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x179910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x179914: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x179914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x179918: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x179918u;
    {
        const bool branch_taken_0x179918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179918u;
        // 0x17991c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179918) {
            ctx->pc = 0x1799DCu;
            goto label_1799dc;
        }
    }
    ctx->pc = 0x179920u;
    // 0x179920: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x179920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179924: 0x24579c14  addiu       $s7, $v0, -0x63EC
    ctx->pc = 0x179924u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x179928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x179928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17992c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x17992cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179930: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x179930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x179934: 0x0  nop
    ctx->pc = 0x179934u;
    // NOP
label_179938:
    // 0x179938: 0x12a20028  beq         $s5, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x179938u;
    {
        const bool branch_taken_0x179938 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x17993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179938u;
        // 0x17993c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179938) {
            ctx->pc = 0x1799DCu;
            goto label_1799dc;
        }
    }
    ctx->pc = 0x179940u;
    // 0x179940: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x179940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x179944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179948: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x179948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17994c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17994Cu;
    {
        const bool branch_taken_0x17994c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17994Cu;
        // 0x179950: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17994c) {
            ctx->pc = 0x1799C8u;
            goto label_1799c8;
        }
    }
    ctx->pc = 0x179954u;
    // 0x179954: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x179954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x179958: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x179958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17995c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x17995cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179960: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x179960u;
    {
        const bool branch_taken_0x179960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x179964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179960u;
        // 0x179964: 0x307500ff  andi        $s5, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179960) {
            ctx->pc = 0x1799C8u;
            goto label_1799c8;
        }
    }
    ctx->pc = 0x179968u;
    // 0x179968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17996c: 0xc05eb1e  jal         func_17AC78
    ctx->pc = 0x17996Cu;
    SET_GPR_U32(ctx, 31, 0x179974u);
    ctx->pc = 0x179970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17996Cu;
    // 0x179970: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC78u, 0x17996Cu, 0x179974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179974u;
label_179974:
    // 0x179974: 0x8e3000e0  lw          $s0, 0xE0($s1)
    ctx->pc = 0x179974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x179978: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x179978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17997c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179980: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179984: 0xc05eb18  jal         func_17AC60
    ctx->pc = 0x179984u;
    SET_GPR_U32(ctx, 31, 0x17998Cu);
    ctx->pc = 0x179988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179984u;
    // 0x179988: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC60u, 0x179984u, 0x17998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17998Cu;
label_17998c:
    // 0x17998c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x17998Cu;
    {
        const bool branch_taken_0x17998c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17998Cu;
        // 0x179990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17998c) {
            ctx->pc = 0x1799C8u;
            goto label_1799c8;
        }
    }
    ctx->pc = 0x179994u;
    // 0x179994: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x179994u;
    SET_GPR_U32(ctx, 31, 0x17999Cu);
    ctx->pc = 0x179998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179994u;
    // 0x179998: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x179994u, 0x17999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17999Cu;
label_17999c:
    // 0x17999c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x17999Cu;
    {
        const bool branch_taken_0x17999c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1799A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17999Cu;
        // 0x1799a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17999c) {
            ctx->pc = 0x1799ACu;
            goto label_1799ac;
        }
    }
    ctx->pc = 0x1799A4u;
    // 0x1799a4: 0x50560001  beql        $v0, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x1799A4u;
    {
        const bool branch_taken_0x1799a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x1799a4) {
            ctx->pc = 0x1799A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1799A4u;
            // 0x1799a8: 0x8e3000e4  lw          $s0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1799ACu;
            goto label_1799ac;
        }
    }
    ctx->pc = 0x1799ACu;
label_1799ac:
    // 0x1799ac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1799ACu;
    {
        const bool branch_taken_0x1799ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1799B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799ACu;
        // 0x1799b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799ac) {
            ctx->pc = 0x1799C0u;
            goto label_1799c0;
        }
    }
    ctx->pc = 0x1799B4u;
    // 0x1799b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1799B4u;
    {
        const bool branch_taken_0x1799b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1799B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799B4u;
        // 0x1799b8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799b4) {
            ctx->pc = 0x1799CCu;
            goto label_1799cc;
        }
    }
    ctx->pc = 0x1799BCu;
    // 0x1799bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1799bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1799c0:
    // 0x1799c0: 0xc05eb56  jal         func_17AD58
    ctx->pc = 0x1799C0u;
    SET_GPR_U32(ctx, 31, 0x1799C8u);
    ctx->pc = 0x1799C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799C0u;
    // 0x1799c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x1799C0u, 0x1799C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799C8u;
label_1799c8:
    // 0x1799c8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1799c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1799cc:
    // 0x1799cc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1799ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1799d0: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x1799d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1799d4: 0x5460ffd8  bnel        $v1, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1799D4u;
    {
        const bool branch_taken_0x1799d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1799d4) {
            ctx->pc = 0x1799D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1799D4u;
            // 0x1799d8: 0x92420009  lbu         $v0, 0x9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179938;
        }
    }
    ctx->pc = 0x1799DCu;
label_1799dc:
    // 0x1799dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1799dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1799e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1799e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1799e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1799e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1799e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1799e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1799ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1799ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1799f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1799f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1799f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1799f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1799f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1799f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1799fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1799fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179a00: 0x3e00008  jr          $ra
    ctx->pc = 0x179A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A00u;
        // 0x179a04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179A08u;
}
