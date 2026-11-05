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

// Function: sub_001528B0
// Address: 0x1528b0 - 0x152960
void sub_001528B0_0x1528b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001528B0_0x1528b0");
#endif

    switch (ctx->pc) {
        case 0x1528b0u: goto label_1528b0;
        case 0x1528b4u: goto label_1528b4;
        case 0x1528b8u: goto label_1528b8;
        case 0x1528bcu: goto label_1528bc;
        case 0x1528c0u: goto label_1528c0;
        case 0x1528c4u: goto label_1528c4;
        case 0x1528c8u: goto label_1528c8;
        case 0x1528ccu: goto label_1528cc;
        case 0x1528d0u: goto label_1528d0;
        case 0x1528d4u: goto label_1528d4;
        case 0x1528d8u: goto label_1528d8;
        case 0x1528dcu: goto label_1528dc;
        case 0x1528e0u: goto label_1528e0;
        case 0x1528e4u: goto label_1528e4;
        case 0x1528e8u: goto label_1528e8;
        case 0x1528ecu: goto label_1528ec;
        case 0x1528f0u: goto label_1528f0;
        case 0x1528f4u: goto label_1528f4;
        case 0x1528f8u: goto label_1528f8;
        case 0x1528fcu: goto label_1528fc;
        case 0x152900u: goto label_152900;
        case 0x152904u: goto label_152904;
        case 0x152908u: goto label_152908;
        case 0x15290cu: goto label_15290c;
        case 0x152910u: goto label_152910;
        case 0x152914u: goto label_152914;
        case 0x152918u: goto label_152918;
        case 0x15291cu: goto label_15291c;
        case 0x152920u: goto label_152920;
        case 0x152924u: goto label_152924;
        case 0x152928u: goto label_152928;
        case 0x15292cu: goto label_15292c;
        case 0x152930u: goto label_152930;
        case 0x152934u: goto label_152934;
        case 0x152938u: goto label_152938;
        case 0x15293cu: goto label_15293c;
        case 0x152940u: goto label_152940;
        case 0x152944u: goto label_152944;
        case 0x152948u: goto label_152948;
        case 0x15294cu: goto label_15294c;
        case 0x152950u: goto label_152950;
        case 0x152954u: goto label_152954;
        case 0x152958u: goto label_152958;
        case 0x15295cu: goto label_15295c;
        default: break;
    }

    ctx->pc = 0x1528b0u;

label_1528b0:
    // 0x1528b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1528b4:
    // 0x1528b4: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x1528b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
label_1528b8:
    // 0x1528b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1528b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1528bc:
    // 0x1528bc: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x1528bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
label_1528c0:
    // 0x1528c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1528c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1528c4:
    // 0x1528c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1528c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1528c8:
    // 0x1528c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1528c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1528cc:
    // 0x1528cc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1528ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1528d0:
    // 0x1528d0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1528d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1528d4:
    // 0x1528d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1528d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1528d8:
    // 0x1528d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1528d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1528dc:
    // 0x1528dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1528dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1528e0:
    // 0x1528e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1528e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1528e4:
    // 0x1528e4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1528e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1528e8:
    // 0x1528e8: 0xc053cdc  jal         func_14F370
label_1528ec:
    if (ctx->pc == 0x1528ECu) {
        ctx->pc = 0x1528ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528E8u;
        // 0x1528ec: 0x8cd10108  lw          $s1, 0x108($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528F0u;
        goto label_1528f0;
    }
    ctx->pc = 0x1528E8u;
    SET_GPR_U32(ctx, 31, 0x1528F0u);
    ctx->pc = 0x1528ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528E8u;
    // 0x1528ec: 0x8cd10108  lw          $s1, 0x108($a2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F370u, 0x1528E8u, 0x1528F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528F0u;
label_1528f0:
    // 0x1528f0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_1528f4:
    if (ctx->pc == 0x1528F4u) {
        ctx->pc = 0x1528F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528F0u;
        // 0x1528f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528F8u;
        goto label_1528f8;
    }
    ctx->pc = 0x1528F0u;
    {
        const bool branch_taken_0x1528f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528f0) {
            ctx->pc = 0x1528F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1528F0u;
            // 0x1528f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15294Cu;
            goto label_15294c;
        }
    }
    ctx->pc = 0x1528F8u;
label_1528f8:
    // 0x1528f8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1528f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1528fc:
    // 0x1528fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1528fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152900:
    // 0x152900: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x152900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_152904:
    // 0x152904: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x152904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_152908:
    // 0x152908: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x152908u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_15290c:
    // 0x15290c: 0xc09c920  jal         func_272480
label_152910:
    if (ctx->pc == 0x152910u) {
        ctx->pc = 0x152910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15290Cu;
        // 0x152910: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152914u;
        goto label_152914;
    }
    ctx->pc = 0x15290Cu;
    SET_GPR_U32(ctx, 31, 0x152914u);
    ctx->pc = 0x152910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15290Cu;
    // 0x152910: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272480u, 0x15290Cu, 0x152914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152914u;
label_152914:
    // 0x152914: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_152918:
    if (ctx->pc == 0x152918u) {
        ctx->pc = 0x152918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152914u;
        // 0x152918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15291Cu;
        goto label_15291c;
    }
    ctx->pc = 0x152914u;
    {
        const bool branch_taken_0x152914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152914u;
        // 0x152918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152914) {
            ctx->pc = 0x152948u;
            goto label_152948;
        }
    }
    ctx->pc = 0x15291Cu;
label_15291c:
    // 0x15291c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15291cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_152920:
    // 0x152920: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x152920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_152924:
    // 0x152924: 0x40f809  jalr        $v0
label_152928:
    if (ctx->pc == 0x152928u) {
        ctx->pc = 0x152928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152924u;
        // 0x152928: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15292Cu;
        goto label_15292c;
    }
    ctx->pc = 0x152924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15292Cu);
        ctx->pc = 0x152928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152924u;
        // 0x152928: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152924u, 0x15292Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15292Cu;
label_15292c:
    // 0x15292c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152930:
    // 0x152930: 0xc054036  jal         func_1500D8
label_152934:
    if (ctx->pc == 0x152934u) {
        ctx->pc = 0x152934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152930u;
        // 0x152934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152938u;
        goto label_152938;
    }
    ctx->pc = 0x152930u;
    SET_GPR_U32(ctx, 31, 0x152938u);
    ctx->pc = 0x152934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152930u;
    // 0x152934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500D8u, 0x152930u, 0x152938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152938u;
label_152938:
    // 0x152938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15293c:
    // 0x15293c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15293cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_152940:
    // 0x152940: 0xc053c88  jal         func_14F220
label_152944:
    if (ctx->pc == 0x152944u) {
        ctx->pc = 0x152944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152940u;
        // 0x152944: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152948u;
        goto label_152948;
    }
    ctx->pc = 0x152940u;
    SET_GPR_U32(ctx, 31, 0x152948u);
    ctx->pc = 0x152944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152940u;
    // 0x152944: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F220u, 0x152940u, 0x152948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152948u;
label_152948:
    // 0x152948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15294c:
    // 0x15294c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15294cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_152950:
    // 0x152950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152954:
    // 0x152954: 0x3e00008  jr          $ra
label_152958:
    if (ctx->pc == 0x152958u) {
        ctx->pc = 0x152958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152954u;
        // 0x152958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15295Cu;
        goto label_15295c;
    }
    ctx->pc = 0x152954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152954u;
        // 0x152958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15295Cu;
label_15295c:
    // 0x15295c: 0x0  nop
    ctx->pc = 0x15295cu;
    // NOP
    ctx->pc = 0x152960u;
}
