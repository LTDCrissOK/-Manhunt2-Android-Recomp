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

// Function: sub_003D90D0
// Address: 0x3d90d0 - 0x3d9290
void sub_003D90D0_0x3d90d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D90D0_0x3d90d0");
#endif

    switch (ctx->pc) {
        case 0x3d91b4u: goto label_3d91b4;
        case 0x3d91f8u: goto label_3d91f8;
        case 0x3d9248u: goto label_3d9248;
        default: break;
    }

    ctx->pc = 0x3d90d0u;

    // 0x3d90d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d90d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d90d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3d90d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3d90d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d90d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3d90dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d90dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d90e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d90e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d90e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d90e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d90e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3d90e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3d90ec: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3d90ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d90f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3d90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3d90f4: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3d90f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d90f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D90F8u;
    {
        const bool branch_taken_0x3d90f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D90F8u;
        // 0x3d90fc: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d90f8) {
            ctx->pc = 0x3D9108u;
            goto label_3d9108;
        }
    }
    ctx->pc = 0x3D9100u;
    // 0x3d9100: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3D9100u;
    {
        const bool branch_taken_0x3d9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9100u;
        // 0x3d9104: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9100) {
            ctx->pc = 0x3D9278u;
            goto label_3d9278;
        }
    }
    ctx->pc = 0x3D9108u;
label_3d9108:
    // 0x3d9108: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d910c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d910cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9110: 0x16430008  bne         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D9110u;
    {
        const bool branch_taken_0x3d9110 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9110u;
        // 0x3d9114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9110) {
            ctx->pc = 0x3D9134u;
            goto label_3d9134;
        }
    }
    ctx->pc = 0x3D9118u;
    // 0x3d9118: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d9118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d911c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D911Cu;
    {
        const bool branch_taken_0x3d911c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D911Cu;
        // 0x3d9120: 0x243102b  sltu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d911c) {
            ctx->pc = 0x3D9138u;
            goto label_3d9138;
        }
    }
    ctx->pc = 0x3D9124u;
    // 0x3d9124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9128: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3d9128u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d912c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3D912Cu;
    {
        const bool branch_taken_0x3d912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D912Cu;
        // 0x3d9130: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d912c) {
            ctx->pc = 0x3D9278u;
            goto label_3d9278;
        }
    }
    ctx->pc = 0x3D9134u;
label_3d9134:
    // 0x3d9134: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x3d9134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d9138:
    // 0x3d9138: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9138u;
    {
        const bool branch_taken_0x3d9138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9138) {
            ctx->pc = 0x3D913Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9138u;
            // 0x3d913c: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D914Cu;
            goto label_3d914c;
        }
    }
    ctx->pc = 0x3D9140u;
    // 0x3d9140: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x3d9140u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9144: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3D9144u;
    {
        const bool branch_taken_0x3d9144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9144u;
        // 0x3d9148: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9144) {
            ctx->pc = 0x3D9278u;
            goto label_3d9278;
        }
    }
    ctx->pc = 0x3D914Cu;
label_3d914c:
    // 0x3d914c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d9150: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d9150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d9154: 0x9043fff8  lbu         $v1, -0x8($v0)
    ctx->pc = 0x3d9154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x3d9158: 0x16430009  bne         $s2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9158u;
    {
        const bool branch_taken_0x3d9158 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9158u;
        // 0x3d915c: 0x72102b  sltu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9158) {
            ctx->pc = 0x3D9180u;
            goto label_3d9180;
        }
    }
    ctx->pc = 0x3D9160u;
    // 0x3d9160: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d9164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9164u;
    {
        const bool branch_taken_0x3d9164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9164u;
        // 0x3d9168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9164) {
            ctx->pc = 0x3D917Cu;
            goto label_3d917c;
        }
    }
    ctx->pc = 0x3D916Cu;
    // 0x3d916c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d916cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9170: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d9170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3d9174: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3D9174u;
    {
        const bool branch_taken_0x3d9174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9174u;
        // 0x3d9178: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9174) {
            ctx->pc = 0x3D9278u;
            goto label_3d9278;
        }
    }
    ctx->pc = 0x3D917Cu;
label_3d917c:
    // 0x3d917c: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x3d917cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3d9180:
    // 0x3d9180: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9180u;
    {
        const bool branch_taken_0x3d9180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9180) {
            ctx->pc = 0x3D9184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9180u;
            // 0x3d9184: 0x96070010  lhu         $a3, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9198u;
            goto label_3d9198;
        }
    }
    ctx->pc = 0x3D9188u;
    // 0x3d9188: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3d9188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d918c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3d918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3d9190: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3D9190u;
    {
        const bool branch_taken_0x3d9190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9190u;
        // 0x3d9194: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9190) {
            ctx->pc = 0x3D9278u;
            goto label_3d9278;
        }
    }
    ctx->pc = 0x3D9198u;
label_3d9198:
    // 0x3d9198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d919c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d919cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d91a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d91a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d91a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3d91a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3d91a8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3d91a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d91ac: 0xc0f6400  jal         func_3D9000
    ctx->pc = 0x3D91ACu;
    SET_GPR_U32(ctx, 31, 0x3D91B4u);
    ctx->pc = 0x3D91B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D91ACu;
    // 0x3d91b0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9000u, 0x3D91ACu, 0x3D91B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D91B4u;
label_3d91b4:
    // 0x3d91b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d91b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d91b8: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x3d91b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d91bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d91c0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3D91C0u;
    {
        const bool branch_taken_0x3d91c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91C0u;
        // 0x3d91c4: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d91c0) {
            ctx->pc = 0x3D9238u;
            goto label_3d9238;
        }
    }
    ctx->pc = 0x3D91C8u;
    // 0x3d91c8: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d91c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d91cc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d91ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d91d0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3D91D0u;
    {
        const bool branch_taken_0x3d91d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D91D0u;
        // 0x3d91d4: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d91d0) {
            ctx->pc = 0x3D9278u;
            goto label_3d9278;
        }
    }
    ctx->pc = 0x3D91D8u;
    // 0x3d91d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d91dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d91e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d91e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d91e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d91e8: 0x54720024  bnel        $v1, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D91E8u;
    {
        const bool branch_taken_0x3d91e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3d91e8) {
            ctx->pc = 0x3D91ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D91E8u;
            // 0x3d91ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D927Cu;
            goto label_3d927c;
        }
    }
    ctx->pc = 0x3D91F0u;
    // 0x3d91f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3d91f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d91f4: 0x0  nop
    ctx->pc = 0x3d91f4u;
    // NOP
label_3d91f8:
    // 0x3d91f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d91fc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x3d91fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d9200: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3d9200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d9204: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9204u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9208: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d9208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d920c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3D920Cu;
    {
        const bool branch_taken_0x3d920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d920c) {
            ctx->pc = 0x3D9210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D920Cu;
            // 0x3d9210: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D927Cu;
            goto label_3d927c;
        }
    }
    ctx->pc = 0x3D9214u;
    // 0x3d9214: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3d9214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d9218: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d9218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d921c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d9220: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d9220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d9224: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d9224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9228: 0x5072fff3  beql        $v1, $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x3D9228u;
    {
        const bool branch_taken_0x3d9228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x3d9228) {
            ctx->pc = 0x3D922Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9228u;
            // 0x3d922c: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D91F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d91f8;
        }
    }
    ctx->pc = 0x3D9230u;
    // 0x3d9230: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3D9230u;
    {
        const bool branch_taken_0x3d9230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9230u;
        // 0x3d9234: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9230) {
            ctx->pc = 0x3D927Cu;
            goto label_3d927c;
        }
    }
    ctx->pc = 0x3D9238u;
label_3d9238:
    // 0x3d9238: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D9238u;
    {
        const bool branch_taken_0x3d9238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9238) {
            ctx->pc = 0x3D923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9238u;
            // 0x3d923c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D927Cu;
            goto label_3d927c;
        }
    }
    ctx->pc = 0x3D9240u;
    // 0x3d9240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D9240u;
    {
        const bool branch_taken_0x3d9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9240u;
        // 0x3d9244: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9240) {
            ctx->pc = 0x3D925Cu;
            goto label_3d925c;
        }
    }
    ctx->pc = 0x3D9248u;
label_3d9248:
    // 0x3d9248: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d9248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d924c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3d924cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d9250: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9250u;
    {
        const bool branch_taken_0x3d9250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9250u;
        // 0x3d9254: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9250) {
            ctx->pc = 0x3D9278u;
            goto label_3d9278;
        }
    }
    ctx->pc = 0x3D9258u;
    // 0x3d9258: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3d9258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d925c:
    // 0x3d925c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d9260: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d9264: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d9268: 0x9043fff8  lbu         $v1, -0x8($v0)
    ctx->pc = 0x3d9268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x3d926c: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x3d926cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3d9270: 0x5060fff5  beql        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3D9270u;
    {
        const bool branch_taken_0x3d9270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9270) {
            ctx->pc = 0x3D9274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9270u;
            // 0x3d9274: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9248;
        }
    }
    ctx->pc = 0x3D9278u;
label_3d9278:
    // 0x3d9278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d9278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d927c:
    // 0x3d927c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3d927cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d9280: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d9280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d9284: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3d9284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3d9288: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9288u;
        // 0x3d928c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9290u;
}
