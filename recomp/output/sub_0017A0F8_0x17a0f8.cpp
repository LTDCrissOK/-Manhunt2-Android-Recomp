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

// Function: sub_0017A0F8
// Address: 0x17a0f8 - 0x17a2c0
void sub_0017A0F8_0x17a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A0F8_0x17a0f8");
#endif

    switch (ctx->pc) {
        case 0x17a0f8u: goto label_17a0f8;
        case 0x17a0fcu: goto label_17a0fc;
        case 0x17a100u: goto label_17a100;
        case 0x17a104u: goto label_17a104;
        case 0x17a108u: goto label_17a108;
        case 0x17a10cu: goto label_17a10c;
        case 0x17a110u: goto label_17a110;
        case 0x17a114u: goto label_17a114;
        case 0x17a118u: goto label_17a118;
        case 0x17a11cu: goto label_17a11c;
        case 0x17a120u: goto label_17a120;
        case 0x17a124u: goto label_17a124;
        case 0x17a128u: goto label_17a128;
        case 0x17a12cu: goto label_17a12c;
        case 0x17a130u: goto label_17a130;
        case 0x17a134u: goto label_17a134;
        case 0x17a138u: goto label_17a138;
        case 0x17a13cu: goto label_17a13c;
        case 0x17a140u: goto label_17a140;
        case 0x17a144u: goto label_17a144;
        case 0x17a148u: goto label_17a148;
        case 0x17a14cu: goto label_17a14c;
        case 0x17a150u: goto label_17a150;
        case 0x17a154u: goto label_17a154;
        case 0x17a158u: goto label_17a158;
        case 0x17a15cu: goto label_17a15c;
        case 0x17a160u: goto label_17a160;
        case 0x17a164u: goto label_17a164;
        case 0x17a168u: goto label_17a168;
        case 0x17a16cu: goto label_17a16c;
        case 0x17a170u: goto label_17a170;
        case 0x17a174u: goto label_17a174;
        case 0x17a178u: goto label_17a178;
        case 0x17a17cu: goto label_17a17c;
        case 0x17a180u: goto label_17a180;
        case 0x17a184u: goto label_17a184;
        case 0x17a188u: goto label_17a188;
        case 0x17a18cu: goto label_17a18c;
        case 0x17a190u: goto label_17a190;
        case 0x17a194u: goto label_17a194;
        case 0x17a198u: goto label_17a198;
        case 0x17a19cu: goto label_17a19c;
        case 0x17a1a0u: goto label_17a1a0;
        case 0x17a1a4u: goto label_17a1a4;
        case 0x17a1a8u: goto label_17a1a8;
        case 0x17a1acu: goto label_17a1ac;
        case 0x17a1b0u: goto label_17a1b0;
        case 0x17a1b4u: goto label_17a1b4;
        case 0x17a1b8u: goto label_17a1b8;
        case 0x17a1bcu: goto label_17a1bc;
        case 0x17a1c0u: goto label_17a1c0;
        case 0x17a1c4u: goto label_17a1c4;
        case 0x17a1c8u: goto label_17a1c8;
        case 0x17a1ccu: goto label_17a1cc;
        case 0x17a1d0u: goto label_17a1d0;
        case 0x17a1d4u: goto label_17a1d4;
        case 0x17a1d8u: goto label_17a1d8;
        case 0x17a1dcu: goto label_17a1dc;
        case 0x17a1e0u: goto label_17a1e0;
        case 0x17a1e4u: goto label_17a1e4;
        case 0x17a1e8u: goto label_17a1e8;
        case 0x17a1ecu: goto label_17a1ec;
        case 0x17a1f0u: goto label_17a1f0;
        case 0x17a1f4u: goto label_17a1f4;
        case 0x17a1f8u: goto label_17a1f8;
        case 0x17a1fcu: goto label_17a1fc;
        case 0x17a200u: goto label_17a200;
        case 0x17a204u: goto label_17a204;
        case 0x17a208u: goto label_17a208;
        case 0x17a20cu: goto label_17a20c;
        case 0x17a210u: goto label_17a210;
        case 0x17a214u: goto label_17a214;
        case 0x17a218u: goto label_17a218;
        case 0x17a21cu: goto label_17a21c;
        case 0x17a220u: goto label_17a220;
        case 0x17a224u: goto label_17a224;
        case 0x17a228u: goto label_17a228;
        case 0x17a22cu: goto label_17a22c;
        case 0x17a230u: goto label_17a230;
        case 0x17a234u: goto label_17a234;
        case 0x17a238u: goto label_17a238;
        case 0x17a23cu: goto label_17a23c;
        case 0x17a240u: goto label_17a240;
        case 0x17a244u: goto label_17a244;
        case 0x17a248u: goto label_17a248;
        case 0x17a24cu: goto label_17a24c;
        case 0x17a250u: goto label_17a250;
        case 0x17a254u: goto label_17a254;
        case 0x17a258u: goto label_17a258;
        case 0x17a25cu: goto label_17a25c;
        case 0x17a260u: goto label_17a260;
        case 0x17a264u: goto label_17a264;
        case 0x17a268u: goto label_17a268;
        case 0x17a26cu: goto label_17a26c;
        case 0x17a270u: goto label_17a270;
        case 0x17a274u: goto label_17a274;
        case 0x17a278u: goto label_17a278;
        case 0x17a27cu: goto label_17a27c;
        case 0x17a280u: goto label_17a280;
        case 0x17a284u: goto label_17a284;
        case 0x17a288u: goto label_17a288;
        case 0x17a28cu: goto label_17a28c;
        case 0x17a290u: goto label_17a290;
        case 0x17a294u: goto label_17a294;
        case 0x17a298u: goto label_17a298;
        case 0x17a29cu: goto label_17a29c;
        case 0x17a2a0u: goto label_17a2a0;
        case 0x17a2a4u: goto label_17a2a4;
        case 0x17a2a8u: goto label_17a2a8;
        case 0x17a2acu: goto label_17a2ac;
        case 0x17a2b0u: goto label_17a2b0;
        case 0x17a2b4u: goto label_17a2b4;
        case 0x17a2b8u: goto label_17a2b8;
        case 0x17a2bcu: goto label_17a2bc;
        default: break;
    }

    ctx->pc = 0x17a0f8u;

label_17a0f8:
    // 0x17a0f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17a0fc:
    // 0x17a0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17a100:
    // 0x17a100: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17a104:
    // 0x17a104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a108:
    // 0x17a108: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17a10c:
    // 0x17a10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17a110:
    // 0x17a110: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17a110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a114:
    // 0x17a114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17a118:
    // 0x17a118: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_17a11c:
    // 0x17a11c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17a11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_17a120:
    // 0x17a120: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_17a124:
    // 0x17a124: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x17a124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
label_17a128:
    // 0x17a128: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_17a12c:
    if (ctx->pc == 0x17A12Cu) {
        ctx->pc = 0x17A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A128u;
        // 0x17a12c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A130u;
        goto label_17a130;
    }
    ctx->pc = 0x17A128u;
    {
        const bool branch_taken_0x17a128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A128u;
        // 0x17a12c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a128) {
            ctx->pc = 0x17A1ECu;
            goto label_17a1ec;
        }
    }
    ctx->pc = 0x17A130u;
label_17a130:
    // 0x17a130: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x17a130u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_17a134:
    // 0x17a134: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x17a134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_17a138:
    // 0x17a138: 0x2761018  mult        $v0, $s3, $s6
    ctx->pc = 0x17a138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_17a13c:
    // 0x17a13c: 0x0  nop
    ctx->pc = 0x17a13cu;
    // NOP
label_17a140:
    // 0x17a140: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x17a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_17a144:
    // 0x17a144: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x17a144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17a148:
    // 0x17a148: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17a14c:
    // 0x17a14c: 0x1075001f  beq         $v1, $s5, . + 4 + (0x1F << 2)
label_17a150:
    if (ctx->pc == 0x17A150u) {
        ctx->pc = 0x17A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A14Cu;
        // 0x17a150: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A154u;
        goto label_17a154;
    }
    ctx->pc = 0x17A14Cu;
    {
        const bool branch_taken_0x17a14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x17A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A14Cu;
        // 0x17a150: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a14c) {
            ctx->pc = 0x17A1CCu;
            goto label_17a1cc;
        }
    }
    ctx->pc = 0x17A154u;
label_17a154:
    // 0x17a154: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_17a158:
    if (ctx->pc == 0x17A158u) {
        ctx->pc = 0x17A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A154u;
        // 0x17a158: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A15Cu;
        goto label_17a15c;
    }
    ctx->pc = 0x17A154u;
    {
        const bool branch_taken_0x17a154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A154u;
        // 0x17a158: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a154) {
            ctx->pc = 0x17A1CCu;
            goto label_17a1cc;
        }
    }
    ctx->pc = 0x17A15Cu;
label_17a15c:
    // 0x17a15c: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x17a15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_17a160:
    // 0x17a160: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_17a164:
    if (ctx->pc == 0x17A164u) {
        ctx->pc = 0x17A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A160u;
        // 0x17a164: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A168u;
        goto label_17a168;
    }
    ctx->pc = 0x17A160u;
    {
        const bool branch_taken_0x17a160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A160u;
        // 0x17a164: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a160) {
            ctx->pc = 0x17A1D0u;
            goto label_17a1d0;
        }
    }
    ctx->pc = 0x17A168u;
label_17a168:
    // 0x17a168: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17a16c:
    // 0x17a16c: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
label_17a170:
    if (ctx->pc == 0x17A170u) {
        ctx->pc = 0x17A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A16Cu;
        // 0x17a170: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A174u;
        goto label_17a174;
    }
    ctx->pc = 0x17A16Cu;
    {
        const bool branch_taken_0x17a16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a16c) {
            ctx->pc = 0x17A170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A16Cu;
            // 0x17a170: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A1D4u;
            goto label_17a1d4;
        }
    }
    ctx->pc = 0x17A174u;
label_17a174:
    // 0x17a174: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17a178:
    // 0x17a178: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x17a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_17a17c:
    // 0x17a17c: 0x40f809  jalr        $v0
label_17a180:
    if (ctx->pc == 0x17A180u) {
        ctx->pc = 0x17A184u;
        goto label_17a184;
    }
    ctx->pc = 0x17A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A184u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A17Cu, 0x17A184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A184u;
label_17a184:
    // 0x17a184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17a184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a188:
    // 0x17a188: 0xc04f750  jal         func_13DD40
label_17a18c:
    if (ctx->pc == 0x17A18Cu) {
        ctx->pc = 0x17A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A188u;
        // 0x17a18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A190u;
        goto label_17a190;
    }
    ctx->pc = 0x17A188u;
    SET_GPR_U32(ctx, 31, 0x17A190u);
    ctx->pc = 0x17A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A188u;
    // 0x17a18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x17A188u, 0x17A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A190u;
label_17a190:
    // 0x17a190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a194:
    // 0x17a194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a198:
    // 0x17a198: 0xc05eb12  jal         func_17AC48
label_17a19c:
    if (ctx->pc == 0x17A19Cu) {
        ctx->pc = 0x17A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A198u;
        // 0x17a19c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1A0u;
        goto label_17a1a0;
    }
    ctx->pc = 0x17A198u;
    SET_GPR_U32(ctx, 31, 0x17A1A0u);
    ctx->pc = 0x17A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A198u;
    // 0x17a19c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC48u, 0x17A198u, 0x17A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1A0u;
label_17a1a0:
    // 0x17a1a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_17a1a4:
    if (ctx->pc == 0x17A1A4u) {
        ctx->pc = 0x17A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1A0u;
        // 0x17a1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1A8u;
        goto label_17a1a8;
    }
    ctx->pc = 0x17A1A0u;
    {
        const bool branch_taken_0x17a1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1A0u;
        // 0x17a1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1a0) {
            ctx->pc = 0x17A1ECu;
            goto label_17a1ec;
        }
    }
    ctx->pc = 0x17A1A8u;
label_17a1a8:
    // 0x17a1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a1ac:
    // 0x17a1ac: 0xc05eb0c  jal         func_17AC30
label_17a1b0:
    if (ctx->pc == 0x17A1B0u) {
        ctx->pc = 0x17A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1ACu;
        // 0x17a1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1B4u;
        goto label_17a1b4;
    }
    ctx->pc = 0x17A1ACu;
    SET_GPR_U32(ctx, 31, 0x17A1B4u);
    ctx->pc = 0x17A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1ACu;
    // 0x17a1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC30u, 0x17A1ACu, 0x17A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1B4u;
label_17a1b4:
    // 0x17a1b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a1b8:
    // 0x17a1b8: 0xc05eef4  jal         func_17BBD0
label_17a1bc:
    if (ctx->pc == 0x17A1BCu) {
        ctx->pc = 0x17A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1B8u;
        // 0x17a1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1C0u;
        goto label_17a1c0;
    }
    ctx->pc = 0x17A1B8u;
    SET_GPR_U32(ctx, 31, 0x17A1C0u);
    ctx->pc = 0x17A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1B8u;
    // 0x17a1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BBD0u, 0x17A1B8u, 0x17A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1C0u;
label_17a1c0:
    // 0x17a1c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a1c4:
    // 0x17a1c4: 0xc05eb56  jal         func_17AD58
label_17a1c8:
    if (ctx->pc == 0x17A1C8u) {
        ctx->pc = 0x17A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1C4u;
        // 0x17a1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1CCu;
        goto label_17a1cc;
    }
    ctx->pc = 0x17A1C4u;
    SET_GPR_U32(ctx, 31, 0x17A1CCu);
    ctx->pc = 0x17A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1C4u;
    // 0x17a1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x17A1C4u, 0x17A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1CCu;
label_17a1cc:
    // 0x17a1cc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x17a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17a1d0:
    // 0x17a1d0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x17a1d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17a1d4:
    // 0x17a1d4: 0x2e630014  sltiu       $v1, $s3, 0x14
    ctx->pc = 0x17a1d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_17a1d8:
    // 0x17a1d8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_17a1dc:
    if (ctx->pc == 0x17A1DCu) {
        ctx->pc = 0x17A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1D8u;
        // 0x17a1dc: 0x92220009  lbu         $v0, 0x9($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1E0u;
        goto label_17a1e0;
    }
    ctx->pc = 0x17A1D8u;
    {
        const bool branch_taken_0x17a1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a1d8) {
            ctx->pc = 0x17A1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A1D8u;
            // 0x17a1dc: 0x92220009  lbu         $v0, 0x9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A1F0u;
            goto label_17a1f0;
        }
    }
    ctx->pc = 0x17A1E0u;
label_17a1e0:
    // 0x17a1e0: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x17a1e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
label_17a1e4:
    // 0x17a1e4: 0x1682ffd6  bne         $s4, $v0, . + 4 + (-0x2A << 2)
label_17a1e8:
    if (ctx->pc == 0x17A1E8u) {
        ctx->pc = 0x17A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1E4u;
        // 0x17a1e8: 0x2761018  mult        $v0, $s3, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1ECu;
        goto label_17a1ec;
    }
    ctx->pc = 0x17A1E4u;
    {
        const bool branch_taken_0x17a1e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1E4u;
        // 0x17a1e8: 0x2761018  mult        $v0, $s3, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1e4) {
            ctx->pc = 0x17A140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a140;
        }
    }
    ctx->pc = 0x17A1ECu;
label_17a1ec:
    // 0x17a1ec: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x17a1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_17a1f0:
    // 0x17a1f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17a1f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a1f4:
    // 0x17a1f4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_17a1f8:
    if (ctx->pc == 0x17A1F8u) {
        ctx->pc = 0x17A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1F4u;
        // 0x17a1f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1FCu;
        goto label_17a1fc;
    }
    ctx->pc = 0x17A1F4u;
    {
        const bool branch_taken_0x17a1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1F4u;
        // 0x17a1f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1f4) {
            ctx->pc = 0x17A294u;
            goto label_17a294;
        }
    }
    ctx->pc = 0x17A1FCu;
label_17a1fc:
    // 0x17a1fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17a200:
    // 0x17a200: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x17a200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_17a204:
    // 0x17a204: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17a208:
    // 0x17a208: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17a20c:
    // 0x17a20c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_17a210:
    if (ctx->pc == 0x17A210u) {
        ctx->pc = 0x17A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A20Cu;
        // 0x17a210: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A214u;
        goto label_17a214;
    }
    ctx->pc = 0x17A20Cu;
    {
        const bool branch_taken_0x17a20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A20Cu;
        // 0x17a210: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a20c) {
            ctx->pc = 0x17A274u;
            goto label_17a274;
        }
    }
    ctx->pc = 0x17A214u;
label_17a214:
    // 0x17a214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a218:
    // 0x17a218: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17a21c:
    // 0x17a21c: 0xc05eb12  jal         func_17AC48
label_17a220:
    if (ctx->pc == 0x17A220u) {
        ctx->pc = 0x17A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A21Cu;
        // 0x17a220: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A224u;
        goto label_17a224;
    }
    ctx->pc = 0x17A21Cu;
    SET_GPR_U32(ctx, 31, 0x17A224u);
    ctx->pc = 0x17A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A21Cu;
    // 0x17a220: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC48u, 0x17A21Cu, 0x17A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A224u;
label_17a224:
    // 0x17a224: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_17a228:
    if (ctx->pc == 0x17A228u) {
        ctx->pc = 0x17A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A224u;
        // 0x17a228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A22Cu;
        goto label_17a22c;
    }
    ctx->pc = 0x17A224u;
    {
        const bool branch_taken_0x17a224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A224u;
        // 0x17a228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a224) {
            ctx->pc = 0x17A274u;
            goto label_17a274;
        }
    }
    ctx->pc = 0x17A22Cu;
label_17a22c:
    // 0x17a22c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a230:
    // 0x17a230: 0xc05eb0c  jal         func_17AC30
label_17a234:
    if (ctx->pc == 0x17A234u) {
        ctx->pc = 0x17A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A230u;
        // 0x17a234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A238u;
        goto label_17a238;
    }
    ctx->pc = 0x17A230u;
    SET_GPR_U32(ctx, 31, 0x17A238u);
    ctx->pc = 0x17A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A230u;
    // 0x17a234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC30u, 0x17A230u, 0x17A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A238u;
label_17a238:
    // 0x17a238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a23c:
    // 0x17a23c: 0xc05eb06  jal         func_17AC18
label_17a240:
    if (ctx->pc == 0x17A240u) {
        ctx->pc = 0x17A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A23Cu;
        // 0x17a240: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A244u;
        goto label_17a244;
    }
    ctx->pc = 0x17A23Cu;
    SET_GPR_U32(ctx, 31, 0x17A244u);
    ctx->pc = 0x17A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A23Cu;
    // 0x17a240: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x17A23Cu, 0x17A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A244u;
label_17a244:
    // 0x17a244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a248:
    // 0x17a248: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_17a24c:
    if (ctx->pc == 0x17A24Cu) {
        ctx->pc = 0x17A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A248u;
        // 0x17a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A250u;
        goto label_17a250;
    }
    ctx->pc = 0x17A248u;
    {
        const bool branch_taken_0x17a248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A248u;
        // 0x17a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a248) {
            ctx->pc = 0x17A274u;
            goto label_17a274;
        }
    }
    ctx->pc = 0x17A250u;
label_17a250:
    // 0x17a250: 0xc05eef4  jal         func_17BBD0
label_17a254:
    if (ctx->pc == 0x17A254u) {
        ctx->pc = 0x17A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A250u;
        // 0x17a254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A258u;
        goto label_17a258;
    }
    ctx->pc = 0x17A250u;
    SET_GPR_U32(ctx, 31, 0x17A258u);
    ctx->pc = 0x17A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A250u;
    // 0x17a254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BBD0u, 0x17A250u, 0x17A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A258u;
label_17a258:
    // 0x17a258: 0x9202001f  lbu         $v0, 0x1F($s0)
    ctx->pc = 0x17a258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
label_17a25c:
    // 0x17a25c: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x17a25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_17a260:
    // 0x17a260: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x17a260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17a264:
    // 0x17a264: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17a268:
    if (ctx->pc == 0x17A268u) {
        ctx->pc = 0x17A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A264u;
        // 0x17a268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A26Cu;
        goto label_17a26c;
    }
    ctx->pc = 0x17A264u;
    {
        const bool branch_taken_0x17a264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A264u;
        // 0x17a268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a264) {
            ctx->pc = 0x17A274u;
            goto label_17a274;
        }
    }
    ctx->pc = 0x17A26Cu;
label_17a26c:
    // 0x17a26c: 0xc05eb56  jal         func_17AD58
label_17a270:
    if (ctx->pc == 0x17A270u) {
        ctx->pc = 0x17A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A26Cu;
        // 0x17a270: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A274u;
        goto label_17a274;
    }
    ctx->pc = 0x17A26Cu;
    SET_GPR_U32(ctx, 31, 0x17A274u);
    ctx->pc = 0x17A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A26Cu;
    // 0x17a270: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x17A26Cu, 0x17A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A274u;
label_17a274:
    // 0x17a274: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x17a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17a278:
    // 0x17a278: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x17a278u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17a27c:
    // 0x17a27c: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x17a27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_17a280:
    // 0x17a280: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_17a284:
    if (ctx->pc == 0x17A284u) {
        ctx->pc = 0x17A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A280u;
        // 0x17a284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A288u;
        goto label_17a288;
    }
    ctx->pc = 0x17A280u;
    {
        const bool branch_taken_0x17a280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A280u;
        // 0x17a284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a280) {
            ctx->pc = 0x17A298u;
            goto label_17a298;
        }
    }
    ctx->pc = 0x17A288u;
label_17a288:
    // 0x17a288: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x17a288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_17a28c:
    // 0x17a28c: 0x5682ffdc  bnel        $s4, $v0, . + 4 + (-0x24 << 2)
label_17a290:
    if (ctx->pc == 0x17A290u) {
        ctx->pc = 0x17A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A28Cu;
        // 0x17a290: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A294u;
        goto label_17a294;
    }
    ctx->pc = 0x17A28Cu;
    {
        const bool branch_taken_0x17a28c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a28c) {
            ctx->pc = 0x17A290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A28Cu;
            // 0x17a290: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a200;
        }
    }
    ctx->pc = 0x17A294u;
label_17a294:
    // 0x17a294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a298:
    // 0x17a298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17a29c:
    // 0x17a29c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a29cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a2a0:
    // 0x17a2a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17a2a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17a2a4:
    // 0x17a2a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17a2a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a2a8:
    // 0x17a2a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17a2a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17a2ac:
    // 0x17a2ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17a2acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17a2b0:
    // 0x17a2b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17a2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_17a2b4:
    // 0x17a2b4: 0x3e00008  jr          $ra
label_17a2b8:
    if (ctx->pc == 0x17A2B8u) {
        ctx->pc = 0x17A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2B4u;
        // 0x17a2b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2BCu;
        goto label_17a2bc;
    }
    ctx->pc = 0x17A2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2B4u;
        // 0x17a2b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A2BCu;
label_17a2bc:
    // 0x17a2bc: 0x0  nop
    ctx->pc = 0x17a2bcu;
    // NOP
    ctx->pc = 0x17a2c0u;
}
