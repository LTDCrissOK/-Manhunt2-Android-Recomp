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

// Function: sub_003DFB50
// Address: 0x3dfb50 - 0x3dfca8
void sub_003DFB50_0x3dfb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFB50_0x3dfb50");
#endif

    switch (ctx->pc) {
        case 0x3dfbb0u: goto label_3dfbb0;
        case 0x3dfbd0u: goto label_3dfbd0;
        case 0x3dfc10u: goto label_3dfc10;
        case 0x3dfc38u: goto label_3dfc38;
        case 0x3dfc54u: goto label_3dfc54;
        default: break;
    }

    ctx->pc = 0x3dfb50u;

    // 0x3dfb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dfb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dfb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dfb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dfb58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dfb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dfb5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dfb5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dfb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dfb64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3dfb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3dfb68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3dfb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3dfb6c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3dfb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3dfb70: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3dfb70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dfb74: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3dfb78: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3dfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dfb7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3dfb7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3dfb80: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3dfb80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3dfb84: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x3DFB84u;
    {
        const bool branch_taken_0x3dfb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfb84) {
            ctx->pc = 0x3DFB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFB84u;
            // 0x3dfb88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFC84u;
            goto label_3dfc84;
        }
    }
    ctx->pc = 0x3DFB8Cu;
    // 0x3dfb8c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x3dfb8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dfb90: 0x2501023  subu        $v0, $s2, $s0
    ctx->pc = 0x3dfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3dfb94: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3DFB94u;
    {
        const bool branch_taken_0x3dfb94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB94u;
        // 0x3dfb98: 0x2a043  sra         $s4, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb94) {
            ctx->pc = 0x3DFC40u;
            goto label_3dfc40;
        }
    }
    ctx->pc = 0x3DFB9Cu;
    // 0x3dfb9c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DFB9Cu;
    {
        const bool branch_taken_0x3dfb9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFB9Cu;
        // 0x3dfba0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb9c) {
            ctx->pc = 0x3DFBB8u;
            goto label_3dfbb8;
        }
    }
    ctx->pc = 0x3DFBA4u;
    // 0x3dfba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dfba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfba8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DFBA8u;
    SET_GPR_U32(ctx, 31, 0x3DFBB0u);
    ctx->pc = 0x3DFBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFBA8u;
    // 0x3dfbac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DFBA8u, 0x3DFBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFBB0u;
label_3dfbb0:
    // 0x3dfbb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFBB0u;
    {
        const bool branch_taken_0x3dfbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBB0u;
        // 0x3dfbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbb0) {
            ctx->pc = 0x3DFBC4u;
            goto label_3dfbc4;
        }
    }
    ctx->pc = 0x3DFBB8u;
label_3dfbb8:
    // 0x3dfbb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dfbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfbbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3dfbbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbc4:
    // 0x3dfbc4: 0x14a040  sll         $s4, $s4, 1
    ctx->pc = 0x3dfbc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x3dfbc8: 0x1092000a  beq         $a0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x3DFBC8u;
    {
        const bool branch_taken_0x3dfbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x3DFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBC8u;
        // 0x3dfbcc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbc8) {
            ctx->pc = 0x3DFBF4u;
            goto label_3dfbf4;
        }
    }
    ctx->pc = 0x3DFBD0u;
label_3dfbd0:
    // 0x3dfbd0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DFBD0u;
    {
        const bool branch_taken_0x3dfbd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfbd0) {
            ctx->pc = 0x3DFBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFBD0u;
            // 0x3dfbd4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFBECu;
            goto label_3dfbec;
        }
    }
    ctx->pc = 0x3DFBD8u;
    // 0x3dfbd8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x3dfbd8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dfbdc: 0x80860001  lb          $a2, 0x1($a0)
    ctx->pc = 0x3dfbdcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3dfbe0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x3dfbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3dfbe4: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x3dfbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3dfbe8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3dfbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3dfbec:
    // 0x3dfbec: 0x1492fff8  bne         $a0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3DFBECu;
    {
        const bool branch_taken_0x3dfbec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x3DFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFBECu;
        // 0x3dfbf0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbec) {
            ctx->pc = 0x3DFBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dfbd0;
        }
    }
    ctx->pc = 0x3DFBF4u;
label_3dfbf4:
    // 0x3dfbf4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3dfbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3dfbf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dfbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfbfc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3dfbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dfc00: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DFC00u;
    {
        const bool branch_taken_0x3dfc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC00u;
        // 0x3dfc04: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc00) {
            ctx->pc = 0x3DFC28u;
            goto label_3dfc28;
        }
    }
    ctx->pc = 0x3DFC08u;
    // 0x3dfc08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3dfc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3dfc0c: 0x0  nop
    ctx->pc = 0x3dfc0cu;
    // NOP
label_3dfc10:
    // 0x3dfc10: 0x0  nop
    ctx->pc = 0x3dfc10u;
    // NOP
    // 0x3dfc14: 0x0  nop
    ctx->pc = 0x3dfc14u;
    // NOP
    // 0x3dfc18: 0x0  nop
    ctx->pc = 0x3dfc18u;
    // NOP
    // 0x3dfc1c: 0x0  nop
    ctx->pc = 0x3dfc1cu;
    // NOP
    // 0x3dfc20: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DFC20u;
    {
        const bool branch_taken_0x3dfc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC20u;
        // 0x3dfc24: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc20) {
            ctx->pc = 0x3DFC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dfc10;
        }
    }
    ctx->pc = 0x3DFC28u;
label_3dfc28:
    // 0x3dfc28: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DFC28u;
    {
        const bool branch_taken_0x3dfc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC28u;
        // 0x3dfc2c: 0x2901821  addu        $v1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc28) {
            ctx->pc = 0x3DFC70u;
            goto label_3dfc70;
        }
    }
    ctx->pc = 0x3DFC30u;
    // 0x3dfc30: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DFC30u;
    SET_GPR_U32(ctx, 31, 0x3DFC38u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DFC30u, 0x3DFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC38u;
label_3dfc38:
    // 0x3dfc38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3DFC38u;
    {
        const bool branch_taken_0x3dfc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC38u;
        // 0x3dfc3c: 0x2901821  addu        $v1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc38) {
            ctx->pc = 0x3DFC70u;
            goto label_3dfc70;
        }
    }
    ctx->pc = 0x3DFC40u;
label_3dfc40:
    // 0x3dfc40: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DFC40u;
    {
        const bool branch_taken_0x3dfc40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC40u;
        // 0x3dfc44: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc40) {
            ctx->pc = 0x3DFC5Cu;
            goto label_3dfc5c;
        }
    }
    ctx->pc = 0x3DFC48u;
    // 0x3dfc48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dfc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfc4c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DFC4Cu;
    SET_GPR_U32(ctx, 31, 0x3DFC54u);
    ctx->pc = 0x3DFC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFC4Cu;
    // 0x3dfc50: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DFC4Cu, 0x3DFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFC54u;
label_3dfc54:
    // 0x3dfc54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFC54u;
    {
        const bool branch_taken_0x3dfc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC54u;
        // 0x3dfc58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc54) {
            ctx->pc = 0x3DFC68u;
            goto label_3dfc68;
        }
    }
    ctx->pc = 0x3DFC5Cu;
label_3dfc5c:
    // 0x3dfc5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dfc5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfc60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3dfc60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfc64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dfc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dfc68:
    // 0x3dfc68: 0x14a040  sll         $s4, $s4, 1
    ctx->pc = 0x3dfc68u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x3dfc6c: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x3dfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3dfc70:
    // 0x3dfc70: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x3dfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3dfc74: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3dfc74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3dfc78: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3dfc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3dfc7c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3dfc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3dfc80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dfc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfc84:
    // 0x3dfc84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dfc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dfc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dfc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfc8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3dfc8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dfc90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3dfc90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dfc94: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3dfc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3dfc98: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFC98u;
        // 0x3dfc9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFCA0u;
    // 0x3dfca0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3dfca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dfca4: 0x0  nop
    ctx->pc = 0x3dfca4u;
    // NOP
    ctx->pc = 0x3dfca8u;
}
