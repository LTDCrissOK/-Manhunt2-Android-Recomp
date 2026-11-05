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

// Function: sub_003EAE70
// Address: 0x3eae70 - 0x3eafa8
void sub_003EAE70_0x3eae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAE70_0x3eae70");
#endif

    switch (ctx->pc) {
        case 0x3eae70u: goto label_3eae70;
        case 0x3eae74u: goto label_3eae74;
        case 0x3eae78u: goto label_3eae78;
        case 0x3eae7cu: goto label_3eae7c;
        case 0x3eae80u: goto label_3eae80;
        case 0x3eae84u: goto label_3eae84;
        case 0x3eae88u: goto label_3eae88;
        case 0x3eae8cu: goto label_3eae8c;
        case 0x3eae90u: goto label_3eae90;
        case 0x3eae94u: goto label_3eae94;
        case 0x3eae98u: goto label_3eae98;
        case 0x3eae9cu: goto label_3eae9c;
        case 0x3eaea0u: goto label_3eaea0;
        case 0x3eaea4u: goto label_3eaea4;
        case 0x3eaea8u: goto label_3eaea8;
        case 0x3eaeacu: goto label_3eaeac;
        case 0x3eaeb0u: goto label_3eaeb0;
        case 0x3eaeb4u: goto label_3eaeb4;
        case 0x3eaeb8u: goto label_3eaeb8;
        case 0x3eaebcu: goto label_3eaebc;
        case 0x3eaec0u: goto label_3eaec0;
        case 0x3eaec4u: goto label_3eaec4;
        case 0x3eaec8u: goto label_3eaec8;
        case 0x3eaeccu: goto label_3eaecc;
        case 0x3eaed0u: goto label_3eaed0;
        case 0x3eaed4u: goto label_3eaed4;
        case 0x3eaed8u: goto label_3eaed8;
        case 0x3eaedcu: goto label_3eaedc;
        case 0x3eaee0u: goto label_3eaee0;
        case 0x3eaee4u: goto label_3eaee4;
        case 0x3eaee8u: goto label_3eaee8;
        case 0x3eaeecu: goto label_3eaeec;
        case 0x3eaef0u: goto label_3eaef0;
        case 0x3eaef4u: goto label_3eaef4;
        case 0x3eaef8u: goto label_3eaef8;
        case 0x3eaefcu: goto label_3eaefc;
        case 0x3eaf00u: goto label_3eaf00;
        case 0x3eaf04u: goto label_3eaf04;
        case 0x3eaf08u: goto label_3eaf08;
        case 0x3eaf0cu: goto label_3eaf0c;
        case 0x3eaf10u: goto label_3eaf10;
        case 0x3eaf14u: goto label_3eaf14;
        case 0x3eaf18u: goto label_3eaf18;
        case 0x3eaf1cu: goto label_3eaf1c;
        case 0x3eaf20u: goto label_3eaf20;
        case 0x3eaf24u: goto label_3eaf24;
        case 0x3eaf28u: goto label_3eaf28;
        case 0x3eaf2cu: goto label_3eaf2c;
        case 0x3eaf30u: goto label_3eaf30;
        case 0x3eaf34u: goto label_3eaf34;
        case 0x3eaf38u: goto label_3eaf38;
        case 0x3eaf3cu: goto label_3eaf3c;
        case 0x3eaf40u: goto label_3eaf40;
        case 0x3eaf44u: goto label_3eaf44;
        case 0x3eaf48u: goto label_3eaf48;
        case 0x3eaf4cu: goto label_3eaf4c;
        case 0x3eaf50u: goto label_3eaf50;
        case 0x3eaf54u: goto label_3eaf54;
        case 0x3eaf58u: goto label_3eaf58;
        case 0x3eaf5cu: goto label_3eaf5c;
        case 0x3eaf60u: goto label_3eaf60;
        case 0x3eaf64u: goto label_3eaf64;
        case 0x3eaf68u: goto label_3eaf68;
        case 0x3eaf6cu: goto label_3eaf6c;
        case 0x3eaf70u: goto label_3eaf70;
        case 0x3eaf74u: goto label_3eaf74;
        case 0x3eaf78u: goto label_3eaf78;
        case 0x3eaf7cu: goto label_3eaf7c;
        case 0x3eaf80u: goto label_3eaf80;
        case 0x3eaf84u: goto label_3eaf84;
        case 0x3eaf88u: goto label_3eaf88;
        case 0x3eaf8cu: goto label_3eaf8c;
        case 0x3eaf90u: goto label_3eaf90;
        case 0x3eaf94u: goto label_3eaf94;
        case 0x3eaf98u: goto label_3eaf98;
        case 0x3eaf9cu: goto label_3eaf9c;
        case 0x3eafa0u: goto label_3eafa0;
        case 0x3eafa4u: goto label_3eafa4;
        default: break;
    }

    ctx->pc = 0x3eae70u;

label_3eae70:
    // 0x3eae70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eae74:
    // 0x3eae74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eae78:
    // 0x3eae78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eae7c:
    // 0x3eae7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eae7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eae80:
    // 0x3eae80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eae84:
    // 0x3eae84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eae88:
    // 0x3eae88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eae8c:
    // 0x3eae8c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eae90:
    if (ctx->pc == 0x3EAE90u) {
        ctx->pc = 0x3EAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE8Cu;
        // 0x3eae90: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAE94u;
        goto label_3eae94;
    }
    ctx->pc = 0x3EAE8Cu;
    {
        const bool branch_taken_0x3eae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE8Cu;
        // 0x3eae90: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae8c) {
            ctx->pc = 0x3EAF0Cu;
            goto label_3eaf0c;
        }
    }
    ctx->pc = 0x3EAE94u;
label_3eae94:
    // 0x3eae94: 0x0  nop
    ctx->pc = 0x3eae94u;
    // NOP
label_3eae98:
    // 0x3eae98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eae9c:
    // 0x3eae9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaea0:
    // 0x3eaea0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eaea4:
    if (ctx->pc == 0x3EAEA4u) {
        ctx->pc = 0x3EAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEA0u;
        // 0x3eaea4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAEA8u;
        goto label_3eaea8;
    }
    ctx->pc = 0x3EAEA0u;
    {
        const bool branch_taken_0x3eaea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaea0) {
            ctx->pc = 0x3EAEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAEA0u;
            // 0x3eaea4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAEFCu;
            goto label_3eaefc;
        }
    }
    ctx->pc = 0x3EAEA8u;
label_3eaea8:
    // 0x3eaea8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eaea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eaeac:
    // 0x3eaeac: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eaeacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eaeb0:
    // 0x3eaeb0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eaeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eaeb4:
    // 0x3eaeb4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eaeb8:
    if (ctx->pc == 0x3EAEB8u) {
        ctx->pc = 0x3EAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEB4u;
        // 0x3eaeb8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAEBCu;
        goto label_3eaebc;
    }
    ctx->pc = 0x3EAEB4u;
    {
        const bool branch_taken_0x3eaeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eaeb4) {
            ctx->pc = 0x3EAEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAEB4u;
            // 0x3eaeb8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAEE8u;
            goto label_3eaee8;
        }
    }
    ctx->pc = 0x3EAEBCu;
label_3eaebc:
    // 0x3eaebc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eaebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eaec0:
    // 0x3eaec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eaec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eaec4:
    // 0x3eaec4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eaec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eaec8:
    // 0x3eaec8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eaec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eaecc:
    // 0x3eaecc: 0x40f809  jalr        $v0
label_3eaed0:
    if (ctx->pc == 0x3EAED0u) {
        ctx->pc = 0x3EAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAECCu;
        // 0x3eaed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAED4u;
        goto label_3eaed4;
    }
    ctx->pc = 0x3EAECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAED4u);
        ctx->pc = 0x3EAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAECCu;
        // 0x3eaed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAECCu, 0x3EAED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAED4u;
label_3eaed4:
    // 0x3eaed4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eaed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eaed8:
    // 0x3eaed8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eaedc:
    // 0x3eaedc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eaee0:
    if (ctx->pc == 0x3EAEE0u) {
        ctx->pc = 0x3EAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEDCu;
        // 0x3eaee0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAEE4u;
        goto label_3eaee4;
    }
    ctx->pc = 0x3EAEDCu;
    {
        const bool branch_taken_0x3eaedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEDCu;
        // 0x3eaee0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaedc) {
            ctx->pc = 0x3EAEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaec0;
        }
    }
    ctx->pc = 0x3EAEE4u;
label_3eaee4:
    // 0x3eaee4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eaee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eaee8:
    // 0x3eaee8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eaee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaeec:
    // 0x3eaeec: 0xc0f528a  jal         func_3D4A28
label_3eaef0:
    if (ctx->pc == 0x3EAEF0u) {
        ctx->pc = 0x3EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEECu;
        // 0x3eaef0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAEF4u;
        goto label_3eaef4;
    }
    ctx->pc = 0x3EAEECu;
    SET_GPR_U32(ctx, 31, 0x3EAEF4u);
    ctx->pc = 0x3EAEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAEECu;
    // 0x3eaef0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAEECu, 0x3EAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAEF4u;
label_3eaef4:
    // 0x3eaef4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eaef8:
    // 0x3eaef8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eaef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eaefc:
    // 0x3eaefc: 0xc0f5222  jal         func_3D4888
label_3eaf00:
    if (ctx->pc == 0x3EAF00u) {
        ctx->pc = 0x3EAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEFCu;
        // 0x3eaf00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF04u;
        goto label_3eaf04;
    }
    ctx->pc = 0x3EAEFCu;
    SET_GPR_U32(ctx, 31, 0x3EAF04u);
    ctx->pc = 0x3EAF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAEFCu;
    // 0x3eaf00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EAEFCu, 0x3EAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF04u;
label_3eaf04:
    // 0x3eaf04: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eaf08:
    if (ctx->pc == 0x3EAF08u) {
        ctx->pc = 0x3EAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF04u;
        // 0x3eaf08: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF0Cu;
        goto label_3eaf0c;
    }
    ctx->pc = 0x3EAF04u;
    {
        const bool branch_taken_0x3eaf04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF04u;
        // 0x3eaf08: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf04) {
            ctx->pc = 0x3EAE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eae98;
        }
    }
    ctx->pc = 0x3EAF0Cu;
label_3eaf0c:
    // 0x3eaf0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaf10:
    // 0x3eaf10: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eaf14:
    if (ctx->pc == 0x3EAF14u) {
        ctx->pc = 0x3EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF10u;
        // 0x3eaf14: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF18u;
        goto label_3eaf18;
    }
    ctx->pc = 0x3EAF10u;
    {
        const bool branch_taken_0x3eaf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF10u;
        // 0x3eaf14: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf10) {
            ctx->pc = 0x3EAF8Cu;
            goto label_3eaf8c;
        }
    }
    ctx->pc = 0x3EAF18u;
label_3eaf18:
    // 0x3eaf18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eaf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaf1c:
    // 0x3eaf1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eaf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaf20:
    // 0x3eaf20: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eaf24:
    if (ctx->pc == 0x3EAF24u) {
        ctx->pc = 0x3EAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF20u;
        // 0x3eaf24: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF28u;
        goto label_3eaf28;
    }
    ctx->pc = 0x3EAF20u;
    {
        const bool branch_taken_0x3eaf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaf20) {
            ctx->pc = 0x3EAF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAF20u;
            // 0x3eaf24: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAF7Cu;
            goto label_3eaf7c;
        }
    }
    ctx->pc = 0x3EAF28u;
label_3eaf28:
    // 0x3eaf28: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eaf2c:
    // 0x3eaf2c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eaf2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eaf30:
    // 0x3eaf30: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eaf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eaf34:
    // 0x3eaf34: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eaf38:
    if (ctx->pc == 0x3EAF38u) {
        ctx->pc = 0x3EAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF34u;
        // 0x3eaf38: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF3Cu;
        goto label_3eaf3c;
    }
    ctx->pc = 0x3EAF34u;
    {
        const bool branch_taken_0x3eaf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eaf34) {
            ctx->pc = 0x3EAF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAF34u;
            // 0x3eaf38: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAF68u;
            goto label_3eaf68;
        }
    }
    ctx->pc = 0x3EAF3Cu;
label_3eaf3c:
    // 0x3eaf3c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eaf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eaf40:
    // 0x3eaf40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eaf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eaf44:
    // 0x3eaf44: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eaf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eaf48:
    // 0x3eaf48: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eaf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eaf4c:
    // 0x3eaf4c: 0x40f809  jalr        $v0
label_3eaf50:
    if (ctx->pc == 0x3EAF50u) {
        ctx->pc = 0x3EAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF4Cu;
        // 0x3eaf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF54u;
        goto label_3eaf54;
    }
    ctx->pc = 0x3EAF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAF54u);
        ctx->pc = 0x3EAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF4Cu;
        // 0x3eaf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAF4Cu, 0x3EAF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAF54u;
label_3eaf54:
    // 0x3eaf54: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaf58:
    // 0x3eaf58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eaf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eaf5c:
    // 0x3eaf5c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eaf60:
    if (ctx->pc == 0x3EAF60u) {
        ctx->pc = 0x3EAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF5Cu;
        // 0x3eaf60: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF64u;
        goto label_3eaf64;
    }
    ctx->pc = 0x3EAF5Cu;
    {
        const bool branch_taken_0x3eaf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF5Cu;
        // 0x3eaf60: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf5c) {
            ctx->pc = 0x3EAF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaf40;
        }
    }
    ctx->pc = 0x3EAF64u;
label_3eaf64:
    // 0x3eaf64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaf68:
    // 0x3eaf68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eaf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaf6c:
    // 0x3eaf6c: 0xc0f528a  jal         func_3D4A28
label_3eaf70:
    if (ctx->pc == 0x3EAF70u) {
        ctx->pc = 0x3EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF6Cu;
        // 0x3eaf70: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF74u;
        goto label_3eaf74;
    }
    ctx->pc = 0x3EAF6Cu;
    SET_GPR_U32(ctx, 31, 0x3EAF74u);
    ctx->pc = 0x3EAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF6Cu;
    // 0x3eaf70: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAF6Cu, 0x3EAF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF74u;
label_3eaf74:
    // 0x3eaf74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eaf78:
    // 0x3eaf78: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eaf78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eaf7c:
    // 0x3eaf7c: 0xc0f5222  jal         func_3D4888
label_3eaf80:
    if (ctx->pc == 0x3EAF80u) {
        ctx->pc = 0x3EAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF7Cu;
        // 0x3eaf80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF84u;
        goto label_3eaf84;
    }
    ctx->pc = 0x3EAF7Cu;
    SET_GPR_U32(ctx, 31, 0x3EAF84u);
    ctx->pc = 0x3EAF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF7Cu;
    // 0x3eaf80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EAF7Cu, 0x3EAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF84u;
label_3eaf84:
    // 0x3eaf84: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eaf88:
    if (ctx->pc == 0x3EAF88u) {
        ctx->pc = 0x3EAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF84u;
        // 0x3eaf88: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAF8Cu;
        goto label_3eaf8c;
    }
    ctx->pc = 0x3EAF84u;
    {
        const bool branch_taken_0x3eaf84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF84u;
        // 0x3eaf88: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf84) {
            ctx->pc = 0x3EAF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaf18;
        }
    }
    ctx->pc = 0x3EAF8Cu;
label_3eaf8c:
    // 0x3eaf8c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eaf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eaf90:
    // 0x3eaf90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eaf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eaf94:
    // 0x3eaf94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eaf94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eaf98:
    // 0x3eaf98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eaf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eaf9c:
    // 0x3eaf9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eaf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eafa0:
    // 0x3eafa0: 0x3e00008  jr          $ra
label_3eafa4:
    if (ctx->pc == 0x3EAFA4u) {
        ctx->pc = 0x3EAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFA0u;
        // 0x3eafa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAFA8u;
        goto label_fallthrough_0x3eafa0;
    }
    ctx->pc = 0x3EAFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFA0u;
        // 0x3eafa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eafa0:
    ctx->pc = 0x3EAFA8u;
}
