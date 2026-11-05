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

// Function: sub_002421F8
// Address: 0x2421f8 - 0x242300
void sub_002421F8_0x2421f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002421F8_0x2421f8");
#endif

    switch (ctx->pc) {
        case 0x2421f8u: goto label_2421f8;
        case 0x2421fcu: goto label_2421fc;
        case 0x242200u: goto label_242200;
        case 0x242204u: goto label_242204;
        case 0x242208u: goto label_242208;
        case 0x24220cu: goto label_24220c;
        case 0x242210u: goto label_242210;
        case 0x242214u: goto label_242214;
        case 0x242218u: goto label_242218;
        case 0x24221cu: goto label_24221c;
        case 0x242220u: goto label_242220;
        case 0x242224u: goto label_242224;
        case 0x242228u: goto label_242228;
        case 0x24222cu: goto label_24222c;
        case 0x242230u: goto label_242230;
        case 0x242234u: goto label_242234;
        case 0x242238u: goto label_242238;
        case 0x24223cu: goto label_24223c;
        case 0x242240u: goto label_242240;
        case 0x242244u: goto label_242244;
        case 0x242248u: goto label_242248;
        case 0x24224cu: goto label_24224c;
        case 0x242250u: goto label_242250;
        case 0x242254u: goto label_242254;
        case 0x242258u: goto label_242258;
        case 0x24225cu: goto label_24225c;
        case 0x242260u: goto label_242260;
        case 0x242264u: goto label_242264;
        case 0x242268u: goto label_242268;
        case 0x24226cu: goto label_24226c;
        case 0x242270u: goto label_242270;
        case 0x242274u: goto label_242274;
        case 0x242278u: goto label_242278;
        case 0x24227cu: goto label_24227c;
        case 0x242280u: goto label_242280;
        case 0x242284u: goto label_242284;
        case 0x242288u: goto label_242288;
        case 0x24228cu: goto label_24228c;
        case 0x242290u: goto label_242290;
        case 0x242294u: goto label_242294;
        case 0x242298u: goto label_242298;
        case 0x24229cu: goto label_24229c;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422a4u: goto label_2422a4;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422acu: goto label_2422ac;
        case 0x2422b0u: goto label_2422b0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422b8u: goto label_2422b8;
        case 0x2422bcu: goto label_2422bc;
        case 0x2422c0u: goto label_2422c0;
        case 0x2422c4u: goto label_2422c4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ccu: goto label_2422cc;
        case 0x2422d0u: goto label_2422d0;
        case 0x2422d4u: goto label_2422d4;
        case 0x2422d8u: goto label_2422d8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e0u: goto label_2422e0;
        case 0x2422e4u: goto label_2422e4;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422ecu: goto label_2422ec;
        case 0x2422f0u: goto label_2422f0;
        case 0x2422f4u: goto label_2422f4;
        case 0x2422f8u: goto label_2422f8;
        case 0x2422fcu: goto label_2422fc;
        default: break;
    }

    ctx->pc = 0x2421f8u;

label_2421f8:
    // 0x2421f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2421f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2421fc:
    // 0x2421fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2421fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242200:
    // 0x242200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_242204:
    // 0x242204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242208:
    // 0x242208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24220c:
    // 0x24220c: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x24220cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242210:
    // 0x242210: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x242210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_242214:
    // 0x242214: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_242218:
    if (ctx->pc == 0x242218u) {
        ctx->pc = 0x242218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242214u;
        // 0x242218: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24221Cu;
        goto label_24221c;
    }
    ctx->pc = 0x242214u;
    {
        const bool branch_taken_0x242214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x242218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242214u;
        // 0x242218: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242214) {
            ctx->pc = 0x24222Cu;
            goto label_24222c;
        }
    }
    ctx->pc = 0x24221Cu;
label_24221c:
    // 0x24221c: 0x1000000d  b           . + 4 + (0xD << 2)
label_242220:
    if (ctx->pc == 0x242220u) {
        ctx->pc = 0x242220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24221Cu;
        // 0x242220: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242224u;
        goto label_242224;
    }
    ctx->pc = 0x24221Cu;
    {
        const bool branch_taken_0x24221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24221Cu;
        // 0x242220: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24221c) {
            ctx->pc = 0x242254u;
            goto label_242254;
        }
    }
    ctx->pc = 0x242224u;
label_242224:
    // 0x242224: 0x1000000b  b           . + 4 + (0xB << 2)
label_242228:
    if (ctx->pc == 0x242228u) {
        ctx->pc = 0x242228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242224u;
        // 0x242228: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24222Cu;
        goto label_24222c;
    }
    ctx->pc = 0x242224u;
    {
        const bool branch_taken_0x242224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242224u;
        // 0x242228: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242224) {
            ctx->pc = 0x242254u;
            goto label_242254;
        }
    }
    ctx->pc = 0x24222Cu;
label_24222c:
    // 0x24222c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24222cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242230:
    // 0x242230: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x242230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_242234:
    // 0x242234: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x242234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_242238:
    // 0x242238: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24223c:
    // 0x24223c: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_242240:
    if (ctx->pc == 0x242240u) {
        ctx->pc = 0x242240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24223Cu;
        // 0x242240: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242244u;
        goto label_242244;
    }
    ctx->pc = 0x24223Cu;
    {
        const bool branch_taken_0x24223c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24223Cu;
        // 0x242240: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24223c) {
            ctx->pc = 0x242224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242224;
        }
    }
    ctx->pc = 0x242244u;
label_242244:
    // 0x242244: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x242244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_242248:
    // 0x242248: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24224c:
    if (ctx->pc == 0x24224Cu) {
        ctx->pc = 0x24224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242248u;
        // 0x24224c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242250u;
        goto label_242250;
    }
    ctx->pc = 0x242248u;
    {
        const bool branch_taken_0x242248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242248u;
        // 0x24224c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242248) {
            ctx->pc = 0x242238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242238;
        }
    }
    ctx->pc = 0x242250u;
label_242250:
    // 0x242250: 0x8cf101e8  lw          $s1, 0x1E8($a3)
    ctx->pc = 0x242250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_242254:
    // 0x242254: 0x24a565b0  addiu       $a1, $a1, 0x65B0
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26032));
label_242258:
    // 0x242258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24225c:
    // 0x24225c: 0xc073fde  jal         func_1CFF78
label_242260:
    if (ctx->pc == 0x242260u) {
        ctx->pc = 0x242260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24225Cu;
        // 0x242260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242264u;
        goto label_242264;
    }
    ctx->pc = 0x24225Cu;
    SET_GPR_U32(ctx, 31, 0x242264u);
    ctx->pc = 0x242260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24225Cu;
    // 0x242260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x24225Cu, 0x242264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242264u;
label_242264:
    // 0x242264: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x242264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_242268:
    // 0x242268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24226c:
    // 0x24226c: 0xc08fed2  jal         func_23FB48
label_242270:
    if (ctx->pc == 0x242270u) {
        ctx->pc = 0x242270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24226Cu;
        // 0x242270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242274u;
        goto label_242274;
    }
    ctx->pc = 0x24226Cu;
    SET_GPR_U32(ctx, 31, 0x242274u);
    ctx->pc = 0x242270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24226Cu;
    // 0x242270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x24226Cu, 0x242274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242274u;
label_242274:
    // 0x242274: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x242274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_242278:
    // 0x242278: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x242278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_24227c:
    // 0x24227c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x24227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_242280:
    // 0x242280: 0x40f809  jalr        $v0
label_242284:
    if (ctx->pc == 0x242284u) {
        ctx->pc = 0x242288u;
        goto label_242288;
    }
    ctx->pc = 0x242280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242288u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242280u, 0x242288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242288u;
label_242288:
    // 0x242288: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x242288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_24228c:
    // 0x24228c: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x24228cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_242290:
    // 0x242290: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x242290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_242294:
    // 0x242294: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x242294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_242298:
    // 0x242298: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x242298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_24229c:
    // 0x24229c: 0xc07682a  jal         func_1DA0A8
label_2422a0:
    if (ctx->pc == 0x2422A0u) {
        ctx->pc = 0x2422A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24229Cu;
        // 0x2422a0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422A4u;
        goto label_2422a4;
    }
    ctx->pc = 0x24229Cu;
    SET_GPR_U32(ctx, 31, 0x2422A4u);
    ctx->pc = 0x2422A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24229Cu;
    // 0x2422a0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x24229Cu, 0x2422A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422A4u;
label_2422a4:
    // 0x2422a4: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x2422a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_2422a8:
    // 0x2422a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2422a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2422ac:
    // 0x2422ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2422acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2422b0:
    // 0x2422b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2422b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2422b4:
    // 0x2422b4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2422b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2422b8:
    // 0x2422b8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2422b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2422bc:
    // 0x2422bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2422bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2422c0:
    // 0x2422c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2422c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2422c4:
    // 0x2422c4: 0x0  nop
    ctx->pc = 0x2422c4u;
    // NOP
label_2422c8:
    // 0x2422c8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2422cc:
    if (ctx->pc == 0x2422CCu) {
        ctx->pc = 0x2422CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422C8u;
        // 0x2422cc: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422D0u;
        goto label_2422d0;
    }
    ctx->pc = 0x2422C8u;
    {
        const bool branch_taken_0x2422c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2422c8) {
            ctx->pc = 0x2422CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2422C8u;
            // 0x2422cc: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2422E0u;
            goto label_2422e0;
        }
    }
    ctx->pc = 0x2422D0u;
label_2422d0:
    // 0x2422d0: 0xae0004a0  sw          $zero, 0x4A0($s0)
    ctx->pc = 0x2422d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
label_2422d4:
    // 0x2422d4: 0xae0004ac  sw          $zero, 0x4AC($s0)
    ctx->pc = 0x2422d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 0));
label_2422d8:
    // 0x2422d8: 0xae000fbc  sw          $zero, 0xFBC($s0)
    ctx->pc = 0x2422d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4028), GPR_U32(ctx, 0));
label_2422dc:
    // 0x2422dc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2422dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2422e0:
    // 0x2422e0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2422e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2422e4:
    // 0x2422e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2422e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2422e8:
    // 0x2422e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2422e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2422ec:
    // 0x2422ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2422ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2422f0:
    // 0x2422f0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2422f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2422f4:
    // 0x2422f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2422f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2422f8:
    // 0x2422f8: 0x3e00008  jr          $ra
label_2422fc:
    if (ctx->pc == 0x2422FCu) {
        ctx->pc = 0x2422FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422F8u;
        // 0x2422fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242300u;
        goto label_fallthrough_0x2422f8;
    }
    ctx->pc = 0x2422F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2422FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422F8u;
        // 0x2422fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2422F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2422f8:
    ctx->pc = 0x242300u;
}
