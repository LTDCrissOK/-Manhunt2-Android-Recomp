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

// Function: sub_0011CAD8
// Address: 0x11cad8 - 0x11cbc0
void sub_0011CAD8_0x11cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CAD8_0x11cad8");
#endif

    switch (ctx->pc) {
        case 0x11cad8u: goto label_11cad8;
        case 0x11cadcu: goto label_11cadc;
        case 0x11cae0u: goto label_11cae0;
        case 0x11cae4u: goto label_11cae4;
        case 0x11cae8u: goto label_11cae8;
        case 0x11caecu: goto label_11caec;
        case 0x11caf0u: goto label_11caf0;
        case 0x11caf4u: goto label_11caf4;
        case 0x11caf8u: goto label_11caf8;
        case 0x11cafcu: goto label_11cafc;
        case 0x11cb00u: goto label_11cb00;
        case 0x11cb04u: goto label_11cb04;
        case 0x11cb08u: goto label_11cb08;
        case 0x11cb0cu: goto label_11cb0c;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cb14u: goto label_11cb14;
        case 0x11cb18u: goto label_11cb18;
        case 0x11cb1cu: goto label_11cb1c;
        case 0x11cb20u: goto label_11cb20;
        case 0x11cb24u: goto label_11cb24;
        case 0x11cb28u: goto label_11cb28;
        case 0x11cb2cu: goto label_11cb2c;
        case 0x11cb30u: goto label_11cb30;
        case 0x11cb34u: goto label_11cb34;
        case 0x11cb38u: goto label_11cb38;
        case 0x11cb3cu: goto label_11cb3c;
        case 0x11cb40u: goto label_11cb40;
        case 0x11cb44u: goto label_11cb44;
        case 0x11cb48u: goto label_11cb48;
        case 0x11cb4cu: goto label_11cb4c;
        case 0x11cb50u: goto label_11cb50;
        case 0x11cb54u: goto label_11cb54;
        case 0x11cb58u: goto label_11cb58;
        case 0x11cb5cu: goto label_11cb5c;
        case 0x11cb60u: goto label_11cb60;
        case 0x11cb64u: goto label_11cb64;
        case 0x11cb68u: goto label_11cb68;
        case 0x11cb6cu: goto label_11cb6c;
        case 0x11cb70u: goto label_11cb70;
        case 0x11cb74u: goto label_11cb74;
        case 0x11cb78u: goto label_11cb78;
        case 0x11cb7cu: goto label_11cb7c;
        case 0x11cb80u: goto label_11cb80;
        case 0x11cb84u: goto label_11cb84;
        case 0x11cb88u: goto label_11cb88;
        case 0x11cb8cu: goto label_11cb8c;
        case 0x11cb90u: goto label_11cb90;
        case 0x11cb94u: goto label_11cb94;
        case 0x11cb98u: goto label_11cb98;
        case 0x11cb9cu: goto label_11cb9c;
        case 0x11cba0u: goto label_11cba0;
        case 0x11cba4u: goto label_11cba4;
        case 0x11cba8u: goto label_11cba8;
        case 0x11cbacu: goto label_11cbac;
        case 0x11cbb0u: goto label_11cbb0;
        case 0x11cbb4u: goto label_11cbb4;
        case 0x11cbb8u: goto label_11cbb8;
        case 0x11cbbcu: goto label_11cbbc;
        default: break;
    }

    ctx->pc = 0x11cad8u;

label_11cad8:
    // 0x11cad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11cadc:
    // 0x11cadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_11cae0:
    // 0x11cae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11cae4:
    // 0x11cae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11cae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11cae8:
    // 0x11cae8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_11caec:
    // 0x11caec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11caecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_11caf0:
    // 0x11caf0: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x11caf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_11caf4:
    // 0x11caf4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_11caf8:
    if (ctx->pc == 0x11CAF8u) {
        ctx->pc = 0x11CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF4u;
        // 0x11caf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAFCu;
        goto label_11cafc;
    }
    ctx->pc = 0x11CAF4u;
    {
        const bool branch_taken_0x11caf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAF4u;
        // 0x11caf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11caf4) {
            ctx->pc = 0x11CBA8u;
            goto label_11cba8;
        }
    }
    ctx->pc = 0x11CAFCu;
label_11cafc:
    // 0x11cafc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_11cb00:
    // 0x11cb00: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_11cb04:
    if (ctx->pc == 0x11CB04u) {
        ctx->pc = 0x11CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB00u;
        // 0x11cb04: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB08u;
        goto label_11cb08;
    }
    ctx->pc = 0x11CB00u;
    {
        const bool branch_taken_0x11cb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb00) {
            ctx->pc = 0x11CB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CB00u;
            // 0x11cb04: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CBACu;
            goto label_11cbac;
        }
    }
    ctx->pc = 0x11CB08u;
label_11cb08:
    // 0x11cb08: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_11cb0c:
    if (ctx->pc == 0x11CB0Cu) {
        ctx->pc = 0x11CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB08u;
        // 0x11cb0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB10u;
        goto label_11cb10;
    }
    ctx->pc = 0x11CB08u;
    {
        const bool branch_taken_0x11cb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB08u;
        // 0x11cb0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb08) {
            ctx->pc = 0x11CB48u;
            goto label_11cb48;
        }
    }
    ctx->pc = 0x11CB10u;
label_11cb10:
    // 0x11cb10: 0x2412006c  addiu       $s2, $zero, 0x6C
    ctx->pc = 0x11cb10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_11cb14:
    // 0x11cb14: 0x2122018  mult        $a0, $s0, $s2
    ctx->pc = 0x11cb14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_11cb18:
    // 0x11cb18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_11cb1c:
    // 0x11cb1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11cb20:
    // 0x11cb20: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x11cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_11cb24:
    // 0x11cb24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_11cb28:
    // 0x11cb28: 0x40f809  jalr        $v0
label_11cb2c:
    if (ctx->pc == 0x11CB2Cu) {
        ctx->pc = 0x11CB30u;
        goto label_11cb30;
    }
    ctx->pc = 0x11CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11CB30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CB28u, 0x11CB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CB30u;
label_11cb30:
    // 0x11cb30: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x11cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11cb34:
    // 0x11cb34: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x11cb34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_11cb38:
    // 0x11cb38: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x11cb38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_11cb3c:
    // 0x11cb3c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11cb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11cb40:
    // 0x11cb40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_11cb44:
    if (ctx->pc == 0x11CB44u) {
        ctx->pc = 0x11CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB40u;
        // 0x11cb44: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB48u;
        goto label_11cb48;
    }
    ctx->pc = 0x11CB40u;
    {
        const bool branch_taken_0x11cb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB40u;
        // 0x11cb44: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb40) {
            ctx->pc = 0x11CB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cb18;
        }
    }
    ctx->pc = 0x11CB48u;
label_11cb48:
    // 0x11cb48: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x11cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_11cb4c:
    // 0x11cb4c: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_11cb50:
    if (ctx->pc == 0x11CB50u) {
        ctx->pc = 0x11CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB4Cu;
        // 0x11cb50: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB54u;
        goto label_11cb54;
    }
    ctx->pc = 0x11CB4Cu;
    {
        const bool branch_taken_0x11cb4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB4Cu;
        // 0x11cb50: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb4c) {
            ctx->pc = 0x11CB9Cu;
            goto label_11cb9c;
        }
    }
    ctx->pc = 0x11CB54u;
label_11cb54:
    // 0x11cb54: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x11cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_11cb58:
    // 0x11cb58: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x11cb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_11cb5c:
    // 0x11cb5c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x11cb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11cb60:
    // 0x11cb60: 0x50b0000c  beql        $a1, $s0, . + 4 + (0xC << 2)
label_11cb64:
    if (ctx->pc == 0x11CB64u) {
        ctx->pc = 0x11CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB60u;
        // 0x11cb64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB68u;
        goto label_11cb68;
    }
    ctx->pc = 0x11CB60u;
    {
        const bool branch_taken_0x11cb60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x11cb60) {
            ctx->pc = 0x11CB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CB60u;
            // 0x11cb64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CB94u;
            goto label_11cb94;
        }
    }
    ctx->pc = 0x11CB68u;
label_11cb68:
    // 0x11cb68: 0x2610ff94  addiu       $s0, $s0, -0x6C
    ctx->pc = 0x11cb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
label_11cb6c:
    // 0x11cb6c: 0x0  nop
    ctx->pc = 0x11cb6cu;
    // NOP
label_11cb70:
    // 0x11cb70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11cb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cb74:
    // 0x11cb74: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x11cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_11cb78:
    // 0x11cb78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_11cb7c:
    // 0x11cb7c: 0x60f809  jalr        $v1
label_11cb80:
    if (ctx->pc == 0x11CB80u) {
        ctx->pc = 0x11CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB7Cu;
        // 0x11cb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB84u;
        goto label_11cb84;
    }
    ctx->pc = 0x11CB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11CB84u);
        ctx->pc = 0x11CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB7Cu;
        // 0x11cb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CB7Cu, 0x11CB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11CB84u;
label_11cb84:
    // 0x11cb84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_11cb88:
    // 0x11cb88: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
label_11cb8c:
    if (ctx->pc == 0x11CB8Cu) {
        ctx->pc = 0x11CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB88u;
        // 0x11cb8c: 0x2610ff94  addiu       $s0, $s0, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB90u;
        goto label_11cb90;
    }
    ctx->pc = 0x11CB88u;
    {
        const bool branch_taken_0x11cb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x11CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB88u;
        // 0x11cb8c: 0x2610ff94  addiu       $s0, $s0, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb88) {
            ctx->pc = 0x11CB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cb70;
        }
    }
    ctx->pc = 0x11CB90u;
label_11cb90:
    // 0x11cb90: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x11cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_11cb94:
    // 0x11cb94: 0xc0f528a  jal         func_3D4A28
label_11cb98:
    if (ctx->pc == 0x11CB98u) {
        ctx->pc = 0x11CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB94u;
        // 0x11cb98: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CB9Cu;
        goto label_11cb9c;
    }
    ctx->pc = 0x11CB94u;
    SET_GPR_U32(ctx, 31, 0x11CB9Cu);
    ctx->pc = 0x11CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB94u;
    // 0x11cb98: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x11CB94u, 0x11CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB9Cu;
label_11cb9c:
    // 0x11cb9c: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x11cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
label_11cba0:
    // 0x11cba0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x11cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_11cba4:
    // 0x11cba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11cba8:
    // 0x11cba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11cba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11cbac:
    // 0x11cbac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11cbacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11cbb0:
    // 0x11cbb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11cbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_11cbb4:
    // 0x11cbb4: 0x3e00008  jr          $ra
label_11cbb8:
    if (ctx->pc == 0x11CBB8u) {
        ctx->pc = 0x11CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBB4u;
        // 0x11cbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CBBCu;
        goto label_11cbbc;
    }
    ctx->pc = 0x11CBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBB4u;
        // 0x11cbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CBBCu;
label_11cbbc:
    // 0x11cbbc: 0x0  nop
    ctx->pc = 0x11cbbcu;
    // NOP
    ctx->pc = 0x11cbc0u;
}
