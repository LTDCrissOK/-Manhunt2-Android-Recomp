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

// Function: sub_0030CF68
// Address: 0x30cf68 - 0x30d068
void sub_0030CF68_0x30cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CF68_0x30cf68");
#endif

    switch (ctx->pc) {
        case 0x30cf98u: goto label_30cf98;
        case 0x30cfacu: goto label_30cfac;
        case 0x30cfd0u: goto label_30cfd0;
        case 0x30cfecu: goto label_30cfec;
        case 0x30cff4u: goto label_30cff4;
        case 0x30cffcu: goto label_30cffc;
        case 0x30d020u: goto label_30d020;
        case 0x30d044u: goto label_30d044;
        default: break;
    }

    ctx->pc = 0x30cf68u;

    // 0x30cf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30cf6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30cf70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30cf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30cf74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30cf74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30cf7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30cf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30cf80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30cf84: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x30cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30cf88: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30CF88u;
    {
        const bool branch_taken_0x30cf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf88) {
            ctx->pc = 0x30CF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CF88u;
            // 0x30cf8c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CFB4u;
            goto label_30cfb4;
        }
    }
    ctx->pc = 0x30CF90u;
    // 0x30cf90: 0xc0c341a  jal         func_30D068
    ctx->pc = 0x30CF90u;
    SET_GPR_U32(ctx, 31, 0x30CF98u);
    ctx->pc = 0x30D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D068u, 0x30CF90u, 0x30CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF98u;
label_30cf98:
    // 0x30cf98: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x30cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30cf9c: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x30CF9Cu;
    {
        const bool branch_taken_0x30cf9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf9c) {
            ctx->pc = 0x30CFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CF9Cu;
            // 0x30cfa0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CFA4u;
    // 0x30cfa4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30CFA4u;
    SET_GPR_U32(ctx, 31, 0x30CFACu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30CFA4u, 0x30CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFACu;
label_30cfac:
    // 0x30cfac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30CFACu;
    {
        const bool branch_taken_0x30cfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFACu;
        // 0x30cfb0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfac) {
            ctx->pc = 0x30D010u;
            goto label_30d010;
        }
    }
    ctx->pc = 0x30CFB4u;
label_30cfb4:
    // 0x30cfb4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x30CFB4u;
    {
        const bool branch_taken_0x30cfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cfb4) {
            ctx->pc = 0x30CFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30CFB4u;
            // 0x30cfb8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D028u;
            goto label_30d028;
        }
    }
    ctx->pc = 0x30CFBCu;
    // 0x30cfbc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x30cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30cfc0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30CFC0u;
    {
        const bool branch_taken_0x30cfc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CFC0u;
        // 0x30cfc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cfc0) {
            ctx->pc = 0x30D00Cu;
            goto label_30d00c;
        }
    }
    ctx->pc = 0x30CFC8u;
    // 0x30cfc8: 0x3c130031  lui         $s3, 0x31
    ctx->pc = 0x30cfc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49 << 16));
    // 0x30cfcc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x30cfccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30cfd0:
    // 0x30cfd0: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x30cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x30cfd4: 0x2665cf30  addiu       $a1, $s3, -0x30D0
    ctx->pc = 0x30cfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954800));
    // 0x30cfd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30cfd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cfdc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x30cfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30cfe0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30cfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30cfe4: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30CFE4u;
    SET_GPR_U32(ctx, 31, 0x30CFECu);
    ctx->pc = 0x30CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFE4u;
    // 0x30cfe8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30CFE4u, 0x30CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFECu;
label_30cfec:
    // 0x30cfec: 0xc0c3232  jal         func_30C8C8
    ctx->pc = 0x30CFECu;
    SET_GPR_U32(ctx, 31, 0x30CFF4u);
    ctx->pc = 0x30CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFECu;
    // 0x30cff0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C8C8u, 0x30CFECu, 0x30CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFF4u;
label_30cff4:
    // 0x30cff4: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x30CFF4u;
    SET_GPR_U32(ctx, 31, 0x30CFFCu);
    ctx->pc = 0x30CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CFF4u;
    // 0x30cff8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x30CFF4u, 0x30CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CFFCu;
label_30cffc:
    // 0x30cffc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x30cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x30d000: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x30d000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30d004: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x30D004u;
    {
        const bool branch_taken_0x30d004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d004) {
            ctx->pc = 0x30D008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D004u;
            // 0x30d008: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cfd0;
        }
    }
    ctx->pc = 0x30D00Cu;
label_30d00c:
    // 0x30d00c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x30d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30d010:
    // 0x30d010: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D010u;
    {
        const bool branch_taken_0x30d010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d010) {
            ctx->pc = 0x30D014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D010u;
            // 0x30d014: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D024u;
            goto label_30d024;
        }
    }
    ctx->pc = 0x30D018u;
    // 0x30d018: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30D018u;
    SET_GPR_U32(ctx, 31, 0x30D020u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30D018u, 0x30D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D020u;
label_30d020:
    // 0x30d020: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x30d020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_30d024:
    // 0x30d024: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30d024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30d028:
    // 0x30d028: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D028u;
    {
        const bool branch_taken_0x30d028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D028u;
        // 0x30d02c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d028) {
            ctx->pc = 0x30D048u;
            goto label_30d048;
        }
    }
    ctx->pc = 0x30D030u;
    // 0x30d030: 0x8c43be1c  lw          $v1, -0x41E4($v0)
    ctx->pc = 0x30d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950428)));
    // 0x30d034: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D034u;
    {
        const bool branch_taken_0x30d034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d034) {
            ctx->pc = 0x30D038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D034u;
            // 0x30d038: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D048u;
            goto label_30d048;
        }
    }
    ctx->pc = 0x30D03Cu;
    // 0x30d03c: 0xc0c7a32  jal         func_31E8C8
    ctx->pc = 0x30D03Cu;
    SET_GPR_U32(ctx, 31, 0x30D044u);
    ctx->pc = 0x30D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D03Cu;
    // 0x30d040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x30D03Cu, 0x30D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D044u;
label_30d044:
    // 0x30d044: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x30d044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_30d048:
    // 0x30d048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d04c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30d050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30d054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30d058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d05c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D05Cu;
        // 0x30d060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D064u;
    // 0x30d064: 0x0  nop
    ctx->pc = 0x30d064u;
    // NOP
    ctx->pc = 0x30d068u;
}
