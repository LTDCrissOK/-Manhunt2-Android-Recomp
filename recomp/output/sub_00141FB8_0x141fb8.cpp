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

// Function: sub_00141FB8
// Address: 0x141fb8 - 0x142128
void sub_00141FB8_0x141fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141FB8_0x141fb8");
#endif

    switch (ctx->pc) {
        case 0x141fb8u: goto label_141fb8;
        case 0x141fbcu: goto label_141fbc;
        case 0x141fc0u: goto label_141fc0;
        case 0x141fc4u: goto label_141fc4;
        case 0x141fc8u: goto label_141fc8;
        case 0x141fccu: goto label_141fcc;
        case 0x141fd0u: goto label_141fd0;
        case 0x141fd4u: goto label_141fd4;
        case 0x141fd8u: goto label_141fd8;
        case 0x141fdcu: goto label_141fdc;
        case 0x141fe0u: goto label_141fe0;
        case 0x141fe4u: goto label_141fe4;
        case 0x141fe8u: goto label_141fe8;
        case 0x141fecu: goto label_141fec;
        case 0x141ff0u: goto label_141ff0;
        case 0x141ff4u: goto label_141ff4;
        case 0x141ff8u: goto label_141ff8;
        case 0x141ffcu: goto label_141ffc;
        case 0x142000u: goto label_142000;
        case 0x142004u: goto label_142004;
        case 0x142008u: goto label_142008;
        case 0x14200cu: goto label_14200c;
        case 0x142010u: goto label_142010;
        case 0x142014u: goto label_142014;
        case 0x142018u: goto label_142018;
        case 0x14201cu: goto label_14201c;
        case 0x142020u: goto label_142020;
        case 0x142024u: goto label_142024;
        case 0x142028u: goto label_142028;
        case 0x14202cu: goto label_14202c;
        case 0x142030u: goto label_142030;
        case 0x142034u: goto label_142034;
        case 0x142038u: goto label_142038;
        case 0x14203cu: goto label_14203c;
        case 0x142040u: goto label_142040;
        case 0x142044u: goto label_142044;
        case 0x142048u: goto label_142048;
        case 0x14204cu: goto label_14204c;
        case 0x142050u: goto label_142050;
        case 0x142054u: goto label_142054;
        case 0x142058u: goto label_142058;
        case 0x14205cu: goto label_14205c;
        case 0x142060u: goto label_142060;
        case 0x142064u: goto label_142064;
        case 0x142068u: goto label_142068;
        case 0x14206cu: goto label_14206c;
        case 0x142070u: goto label_142070;
        case 0x142074u: goto label_142074;
        case 0x142078u: goto label_142078;
        case 0x14207cu: goto label_14207c;
        case 0x142080u: goto label_142080;
        case 0x142084u: goto label_142084;
        case 0x142088u: goto label_142088;
        case 0x14208cu: goto label_14208c;
        case 0x142090u: goto label_142090;
        case 0x142094u: goto label_142094;
        case 0x142098u: goto label_142098;
        case 0x14209cu: goto label_14209c;
        case 0x1420a0u: goto label_1420a0;
        case 0x1420a4u: goto label_1420a4;
        case 0x1420a8u: goto label_1420a8;
        case 0x1420acu: goto label_1420ac;
        case 0x1420b0u: goto label_1420b0;
        case 0x1420b4u: goto label_1420b4;
        case 0x1420b8u: goto label_1420b8;
        case 0x1420bcu: goto label_1420bc;
        case 0x1420c0u: goto label_1420c0;
        case 0x1420c4u: goto label_1420c4;
        case 0x1420c8u: goto label_1420c8;
        case 0x1420ccu: goto label_1420cc;
        case 0x1420d0u: goto label_1420d0;
        case 0x1420d4u: goto label_1420d4;
        case 0x1420d8u: goto label_1420d8;
        case 0x1420dcu: goto label_1420dc;
        case 0x1420e0u: goto label_1420e0;
        case 0x1420e4u: goto label_1420e4;
        case 0x1420e8u: goto label_1420e8;
        case 0x1420ecu: goto label_1420ec;
        case 0x1420f0u: goto label_1420f0;
        case 0x1420f4u: goto label_1420f4;
        case 0x1420f8u: goto label_1420f8;
        case 0x1420fcu: goto label_1420fc;
        case 0x142100u: goto label_142100;
        case 0x142104u: goto label_142104;
        case 0x142108u: goto label_142108;
        case 0x14210cu: goto label_14210c;
        case 0x142110u: goto label_142110;
        case 0x142114u: goto label_142114;
        case 0x142118u: goto label_142118;
        case 0x14211cu: goto label_14211c;
        case 0x142120u: goto label_142120;
        case 0x142124u: goto label_142124;
        default: break;
    }

    ctx->pc = 0x141fb8u;

label_141fb8:
    // 0x141fb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141fbc:
    // 0x141fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_141fc0:
    // 0x141fc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_141fc4:
    // 0x141fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x141fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141fc8:
    // 0x141fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x141fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_141fcc:
    // 0x141fcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x141fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_141fd0:
    // 0x141fd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_141fd4:
    // 0x141fd4: 0xc04e866  jal         func_13A198
label_141fd8:
    if (ctx->pc == 0x141FD8u) {
        ctx->pc = 0x141FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FD4u;
        // 0x141fd8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141FDCu;
        goto label_141fdc;
    }
    ctx->pc = 0x141FD4u;
    SET_GPR_U32(ctx, 31, 0x141FDCu);
    ctx->pc = 0x141FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141FD4u;
    // 0x141fd8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141FD4u, 0x141FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FDCu;
label_141fdc:
    // 0x141fdc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x141fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_141fe0:
    // 0x141fe0: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_141fe4:
    if (ctx->pc == 0x141FE4u) {
        ctx->pc = 0x141FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FE0u;
        // 0x141fe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141FE8u;
        goto label_141fe8;
    }
    ctx->pc = 0x141FE0u;
    {
        const bool branch_taken_0x141fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FE0u;
        // 0x141fe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fe0) {
            ctx->pc = 0x142110u;
            goto label_142110;
        }
    }
    ctx->pc = 0x141FE8u;
label_141fe8:
    // 0x141fe8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x141fe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_141fec:
    // 0x141fec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x141fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_141ff0:
    // 0x141ff0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x141ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_141ff4:
    // 0x141ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141ff8:
    // 0x141ff8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x141ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141ffc:
    // 0x141ffc: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
label_142000:
    if (ctx->pc == 0x142000u) {
        ctx->pc = 0x142000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FFCu;
        // 0x142000: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142004u;
        goto label_142004;
    }
    ctx->pc = 0x141FFCu;
    {
        const bool branch_taken_0x141ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x142000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FFCu;
        // 0x142000: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ffc) {
            ctx->pc = 0x142110u;
            goto label_142110;
        }
    }
    ctx->pc = 0x142004u;
label_142004:
    // 0x142004: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x142004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_142008:
    // 0x142008: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x142008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_14200c:
    // 0x14200c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_142010:
    // 0x142010: 0x8c530108  lw          $s3, 0x108($v0)
    ctx->pc = 0x142010u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_142014:
    // 0x142014: 0x5260003f  beql        $s3, $zero, . + 4 + (0x3F << 2)
label_142018:
    if (ctx->pc == 0x142018u) {
        ctx->pc = 0x142018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142014u;
        // 0x142018: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14201Cu;
        goto label_14201c;
    }
    ctx->pc = 0x142014u;
    {
        const bool branch_taken_0x142014 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x142014) {
            ctx->pc = 0x142018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142014u;
            // 0x142018: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142114u;
            goto label_142114;
        }
    }
    ctx->pc = 0x14201Cu;
label_14201c:
    // 0x14201c: 0xc05086e  jal         func_1421B8
label_142020:
    if (ctx->pc == 0x142020u) {
        ctx->pc = 0x142020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14201Cu;
        // 0x142020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142024u;
        goto label_142024;
    }
    ctx->pc = 0x14201Cu;
    SET_GPR_U32(ctx, 31, 0x142024u);
    ctx->pc = 0x142020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14201Cu;
    // 0x142020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421B8u, 0x14201Cu, 0x142024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142024u;
label_142024:
    // 0x142024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142028:
    // 0x142028: 0xc09522a  jal         func_2548A8
label_14202c:
    if (ctx->pc == 0x14202Cu) {
        ctx->pc = 0x14202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142028u;
        // 0x14202c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142030u;
        goto label_142030;
    }
    ctx->pc = 0x142028u;
    SET_GPR_U32(ctx, 31, 0x142030u);
    ctx->pc = 0x14202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142028u;
    // 0x14202c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A8u, 0x142028u, 0x142030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142030u;
label_142030:
    // 0x142030: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_142034:
    if (ctx->pc == 0x142034u) {
        ctx->pc = 0x142038u;
        goto label_142038;
    }
    ctx->pc = 0x142030u;
    {
        const bool branch_taken_0x142030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x142030) {
            ctx->pc = 0x142048u;
            goto label_142048;
        }
    }
    ctx->pc = 0x142038u;
label_142038:
    // 0x142038: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_14203c:
    if (ctx->pc == 0x14203Cu) {
        ctx->pc = 0x14203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142038u;
        // 0x14203c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142040u;
        goto label_142040;
    }
    ctx->pc = 0x142038u;
    {
        const bool branch_taken_0x142038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142038u;
        // 0x14203c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142038) {
            ctx->pc = 0x142110u;
            goto label_142110;
        }
    }
    ctx->pc = 0x142040u;
label_142040:
    // 0x142040: 0x10000009  b           . + 4 + (0x9 << 2)
label_142044:
    if (ctx->pc == 0x142044u) {
        ctx->pc = 0x142048u;
        goto label_142048;
    }
    ctx->pc = 0x142040u;
    {
        const bool branch_taken_0x142040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142040) {
            ctx->pc = 0x142068u;
            goto label_142068;
        }
    }
    ctx->pc = 0x142048u;
label_142048:
    // 0x142048: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_14204c:
    if (ctx->pc == 0x14204Cu) {
        ctx->pc = 0x14204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142048u;
        // 0x14204c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142050u;
        goto label_142050;
    }
    ctx->pc = 0x142048u;
    {
        const bool branch_taken_0x142048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142048u;
        // 0x14204c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142048) {
            ctx->pc = 0x142110u;
            goto label_142110;
        }
    }
    ctx->pc = 0x142050u;
label_142050:
    // 0x142050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_142054:
    // 0x142054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142058:
    // 0x142058: 0xc050868  jal         func_1421A0
label_14205c:
    if (ctx->pc == 0x14205Cu) {
        ctx->pc = 0x14205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142058u;
        // 0x14205c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142060u;
        goto label_142060;
    }
    ctx->pc = 0x142058u;
    SET_GPR_U32(ctx, 31, 0x142060u);
    ctx->pc = 0x14205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142058u;
    // 0x14205c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421A0u, 0x142058u, 0x142060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142060u;
label_142060:
    // 0x142060: 0x1000002b  b           . + 4 + (0x2B << 2)
label_142064:
    if (ctx->pc == 0x142064u) {
        ctx->pc = 0x142064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142060u;
        // 0x142064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142068u;
        goto label_142068;
    }
    ctx->pc = 0x142060u;
    {
        const bool branch_taken_0x142060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142060u;
        // 0x142064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142060) {
            ctx->pc = 0x142110u;
            goto label_142110;
        }
    }
    ctx->pc = 0x142068u;
label_142068:
    // 0x142068: 0xc04da74  jal         func_1369D0
label_14206c:
    if (ctx->pc == 0x14206Cu) {
        ctx->pc = 0x14206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142068u;
        // 0x14206c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142070u;
        goto label_142070;
    }
    ctx->pc = 0x142068u;
    SET_GPR_U32(ctx, 31, 0x142070u);
    ctx->pc = 0x14206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142068u;
    // 0x14206c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369D0u, 0x142068u, 0x142070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142070u;
label_142070:
    // 0x142070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142074:
    // 0x142074: 0xc09522e  jal         func_2548B8
label_142078:
    if (ctx->pc == 0x142078u) {
        ctx->pc = 0x142078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142074u;
        // 0x142078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14207Cu;
        goto label_14207c;
    }
    ctx->pc = 0x142074u;
    SET_GPR_U32(ctx, 31, 0x14207Cu);
    ctx->pc = 0x142078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142074u;
    // 0x142078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548B8u, 0x142074u, 0x14207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14207Cu;
label_14207c:
    // 0x14207c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_142080:
    if (ctx->pc == 0x142080u) {
        ctx->pc = 0x142084u;
        goto label_142084;
    }
    ctx->pc = 0x14207Cu;
    {
        const bool branch_taken_0x14207c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14207c) {
            ctx->pc = 0x1420A8u;
            goto label_1420a8;
        }
    }
    ctx->pc = 0x142084u;
label_142084:
    // 0x142084: 0x56000014  bnel        $s0, $zero, . + 4 + (0x14 << 2)
label_142088:
    if (ctx->pc == 0x142088u) {
        ctx->pc = 0x142088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142084u;
        // 0x142088: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14208Cu;
        goto label_14208c;
    }
    ctx->pc = 0x142084u;
    {
        const bool branch_taken_0x142084 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x142084) {
            ctx->pc = 0x142088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142084u;
            // 0x142088: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1420D8u;
            goto label_1420d8;
        }
    }
    ctx->pc = 0x14208Cu;
label_14208c:
    // 0x14208c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142090:
    // 0x142090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_142094:
    // 0x142094: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x142094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_142098:
    // 0x142098: 0xc04dc4c  jal         func_137130
label_14209c:
    if (ctx->pc == 0x14209Cu) {
        ctx->pc = 0x14209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142098u;
        // 0x14209c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420A0u;
        goto label_1420a0;
    }
    ctx->pc = 0x142098u;
    SET_GPR_U32(ctx, 31, 0x1420A0u);
    ctx->pc = 0x14209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142098u;
    // 0x14209c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137130u, 0x142098u, 0x1420A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420A0u;
label_1420a0:
    // 0x1420a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1420a4:
    if (ctx->pc == 0x1420A4u) {
        ctx->pc = 0x1420A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420A0u;
        // 0x1420a4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420A8u;
        goto label_1420a8;
    }
    ctx->pc = 0x1420A0u;
    {
        const bool branch_taken_0x1420a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1420A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420A0u;
        // 0x1420a4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1420a0) {
            ctx->pc = 0x1420D8u;
            goto label_1420d8;
        }
    }
    ctx->pc = 0x1420A8u;
label_1420a8:
    // 0x1420a8: 0xc095238  jal         func_2548E0
label_1420ac:
    if (ctx->pc == 0x1420ACu) {
        ctx->pc = 0x1420ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420A8u;
        // 0x1420ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420B0u;
        goto label_1420b0;
    }
    ctx->pc = 0x1420A8u;
    SET_GPR_U32(ctx, 31, 0x1420B0u);
    ctx->pc = 0x1420ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420A8u;
    // 0x1420ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548E0u, 0x1420A8u, 0x1420B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420B0u;
label_1420b0:
    // 0x1420b0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1420b4:
    if (ctx->pc == 0x1420B4u) {
        ctx->pc = 0x1420B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420B0u;
        // 0x1420b4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420B8u;
        goto label_1420b8;
    }
    ctx->pc = 0x1420B0u;
    {
        const bool branch_taken_0x1420b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420b0) {
            ctx->pc = 0x1420B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1420B0u;
            // 0x1420b4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1420D8u;
            goto label_1420d8;
        }
    }
    ctx->pc = 0x1420B8u;
label_1420b8:
    // 0x1420b8: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_1420bc:
    if (ctx->pc == 0x1420BCu) {
        ctx->pc = 0x1420BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420B8u;
        // 0x1420bc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420C0u;
        goto label_1420c0;
    }
    ctx->pc = 0x1420B8u;
    {
        const bool branch_taken_0x1420b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1420b8) {
            ctx->pc = 0x1420BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1420B8u;
            // 0x1420bc: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1420D8u;
            goto label_1420d8;
        }
    }
    ctx->pc = 0x1420C0u;
label_1420c0:
    // 0x1420c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1420c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1420c4:
    // 0x1420c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1420c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1420c8:
    // 0x1420c8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1420c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1420cc:
    // 0x1420cc: 0xc04dc4c  jal         func_137130
label_1420d0:
    if (ctx->pc == 0x1420D0u) {
        ctx->pc = 0x1420D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420CCu;
        // 0x1420d0: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420D4u;
        goto label_1420d4;
    }
    ctx->pc = 0x1420CCu;
    SET_GPR_U32(ctx, 31, 0x1420D4u);
    ctx->pc = 0x1420D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420CCu;
    // 0x1420d0: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137130u, 0x1420CCu, 0x1420D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420D4u;
label_1420d4:
    // 0x1420d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1420d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1420d8:
    // 0x1420d8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1420d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1420dc:
    // 0x1420dc: 0x40f809  jalr        $v0
label_1420e0:
    if (ctx->pc == 0x1420E0u) {
        ctx->pc = 0x1420E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420DCu;
        // 0x1420e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420E4u;
        goto label_1420e4;
    }
    ctx->pc = 0x1420DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1420E4u);
        ctx->pc = 0x1420E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420DCu;
        // 0x1420e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1420DCu, 0x1420E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1420E4u;
label_1420e4:
    // 0x1420e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1420e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1420e8:
    // 0x1420e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1420e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1420ec:
    // 0x1420ec: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1420ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_1420f0:
    // 0x1420f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1420f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1420f4:
    // 0x1420f4: 0xc04668a  jal         func_119A28
label_1420f8:
    if (ctx->pc == 0x1420F8u) {
        ctx->pc = 0x1420F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1420F4u;
        // 0x1420f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1420FCu;
        goto label_1420fc;
    }
    ctx->pc = 0x1420F4u;
    SET_GPR_U32(ctx, 31, 0x1420FCu);
    ctx->pc = 0x1420F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420F4u;
    // 0x1420f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x1420F4u, 0x1420FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420FCu;
label_1420fc:
    // 0x1420fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1420fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_142100:
    // 0x142100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142104:
    // 0x142104: 0xc050868  jal         func_1421A0
label_142108:
    if (ctx->pc == 0x142108u) {
        ctx->pc = 0x142108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142104u;
        // 0x142108: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14210Cu;
        goto label_14210c;
    }
    ctx->pc = 0x142104u;
    SET_GPR_U32(ctx, 31, 0x14210Cu);
    ctx->pc = 0x142108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142104u;
    // 0x142108: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421A0u, 0x142104u, 0x14210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14210Cu;
label_14210c:
    // 0x14210c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14210cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142110:
    // 0x142110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_142114:
    // 0x142114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142118:
    // 0x142118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x142118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14211c:
    // 0x14211c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_142120:
    // 0x142120: 0x3e00008  jr          $ra
label_142124:
    if (ctx->pc == 0x142124u) {
        ctx->pc = 0x142124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142120u;
        // 0x142124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142128u;
        goto label_fallthrough_0x142120;
    }
    ctx->pc = 0x142120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142120u;
        // 0x142124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142120:
    ctx->pc = 0x142128u;
}
