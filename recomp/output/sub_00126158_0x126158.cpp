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

// Function: sub_00126158
// Address: 0x126158 - 0x126310
void sub_00126158_0x126158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126158_0x126158");
#endif

    switch (ctx->pc) {
        case 0x126194u: goto label_126194;
        case 0x1261e8u: goto label_1261e8;
        case 0x126208u: goto label_126208;
        case 0x126230u: goto label_126230;
        case 0x126240u: goto label_126240;
        case 0x126280u: goto label_126280;
        case 0x12628cu: goto label_12628c;
        case 0x1262a8u: goto label_1262a8;
        case 0x1262e8u: goto label_1262e8;
        default: break;
    }

    ctx->pc = 0x126158u;

    // 0x126158: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x126158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12615c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126160: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x126160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x126164: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x126164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x126168: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12616c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x12616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x126170: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x126170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126174: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x126174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x126178: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x126178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x12617c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x12617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x126180: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x126180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x126184: 0x14a20058  bne         $a1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x126184u;
    {
        const bool branch_taken_0x126184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x126188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126184u;
        // 0x126188: 0xffbf0068  sd          $ra, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126184) {
            ctx->pc = 0x1262E8u;
            goto label_1262e8;
        }
    }
    ctx->pc = 0x12618Cu;
    // 0x12618c: 0xc04a08c  jal         func_128230
    ctx->pc = 0x12618Cu;
    SET_GPR_U32(ctx, 31, 0x126194u);
    ctx->pc = 0x126190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12618Cu;
    // 0x126190: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128230u, 0x12618Cu, 0x126194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126194u;
label_126194:
    // 0x126194: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x126194u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126198: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x126198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12619c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12619cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1261a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1261a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1261a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1261a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1261a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1261ac: 0x92420e80  lbu         $v0, 0xE80($s2)
    ctx->pc = 0x1261acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3712)));
    // 0x1261b0: 0x3a630020  xori        $v1, $s3, 0x20
    ctx->pc = 0x1261b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)32);
    // 0x1261b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1261b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1261b8: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1261b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1261bc: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x1261bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1261c0: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x1261c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x1261c4: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x1261c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1261c8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1261c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261cc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1261ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1261d0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1261d4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1261d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1261d8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1261d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1261dc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1261DCu;
    {
        const bool branch_taken_0x1261dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1261E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261DCu;
        // 0x1261e0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261dc) {
            ctx->pc = 0x126270u;
            goto label_126270;
        }
    }
    ctx->pc = 0x1261E4u;
    // 0x1261e4: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x1261e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_1261e8:
    // 0x1261e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1261e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1261ec: 0x8c430a80  lw          $v1, 0xA80($v0)
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2688)));
    // 0x1261f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1261F0u;
    {
        const bool branch_taken_0x1261f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1261F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261F0u;
        // 0x1261f4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261f0) {
            ctx->pc = 0x126258u;
            goto label_126258;
        }
    }
    ctx->pc = 0x1261F8u;
    // 0x1261f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1261f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1261fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126200: 0xc04a0a8  jal         func_1282A0
    ctx->pc = 0x126200u;
    SET_GPR_U32(ctx, 31, 0x126208u);
    ctx->pc = 0x126204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126200u;
    // 0x126204: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1282A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1282A0u, 0x126200u, 0x126208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126208u;
label_126208:
    // 0x126208: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x126208u;
    {
        const bool branch_taken_0x126208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126208u;
        // 0x12620c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126208) {
            ctx->pc = 0x12625Cu;
            goto label_12625c;
        }
    }
    ctx->pc = 0x126210u;
    // 0x126210: 0x16c0000c  bnez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x126210u;
    {
        const bool branch_taken_0x126210 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x126214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126210u;
        // 0x126214: 0x271102a  slt         $v0, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126210) {
            ctx->pc = 0x126244u;
            goto label_126244;
        }
    }
    ctx->pc = 0x126218u;
    // 0x126218: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x126218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12621c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12621Cu;
    {
        const bool branch_taken_0x12621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12621Cu;
        // 0x126220: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12621c) {
            ctx->pc = 0x126240u;
            goto label_126240;
        }
    }
    ctx->pc = 0x126224u;
    // 0x126224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126228: 0xc04a0d4  jal         func_128350
    ctx->pc = 0x126228u;
    SET_GPR_U32(ctx, 31, 0x126230u);
    ctx->pc = 0x12622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126228u;
    // 0x12622c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128350u, 0x126228u, 0x126230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126230u;
label_126230:
    // 0x126230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126230u;
    {
        const bool branch_taken_0x126230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126230u;
        // 0x126234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126230) {
            ctx->pc = 0x126240u;
            goto label_126240;
        }
    }
    ctx->pc = 0x126238u;
    // 0x126238: 0xc04a0fa  jal         func_1283E8
    ctx->pc = 0x126238u;
    SET_GPR_U32(ctx, 31, 0x126240u);
    ctx->pc = 0x12623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126238u;
    // 0x12623c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1283E8u, 0x126238u, 0x126240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126240u;
label_126240:
    // 0x126240: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x126240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_126244:
    // 0x126244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126244u;
    {
        const bool branch_taken_0x126244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126244u;
        // 0x126248: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126244) {
            ctx->pc = 0x126258u;
            goto label_126258;
        }
    }
    ctx->pc = 0x12624Cu;
    // 0x12624c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x126250: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x126250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x126254: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x126254u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_126258:
    // 0x126258: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x126258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12625c:
    // 0x12625c: 0x92420e80  lbu         $v0, 0xE80($s2)
    ctx->pc = 0x12625cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3712)));
    // 0x126260: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x126260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x126264: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x126264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x126268: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x126268u;
    {
        const bool branch_taken_0x126268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126268u;
        // 0x12626c: 0x111140  sll         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126268) {
            ctx->pc = 0x1261E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1261e8;
        }
    }
    ctx->pc = 0x126270u;
label_126270:
    // 0x126270: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x126270u;
    {
        const bool branch_taken_0x126270 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x126274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126270u;
        // 0x126274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126270) {
            ctx->pc = 0x1262D8u;
            goto label_1262d8;
        }
    }
    ctx->pc = 0x126278u;
    // 0x126278: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x126278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x12627c: 0x0  nop
    ctx->pc = 0x12627cu;
    // NOP
label_126280:
    // 0x126280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126284: 0xc04a062  jal         func_128188
    ctx->pc = 0x126284u;
    SET_GPR_U32(ctx, 31, 0x12628Cu);
    ctx->pc = 0x126288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126284u;
    // 0x126288: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128188u, 0x126284u, 0x12628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12628Cu;
label_12628c:
    // 0x12628c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x12628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x126290: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x126290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126294: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x126294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x126298: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x126298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x12629c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12629Cu;
    {
        const bool branch_taken_0x12629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12629Cu;
        // 0x1262a0: 0x30d100ff  andi        $s1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12629c) {
            ctx->pc = 0x1262CCu;
            goto label_1262cc;
        }
    }
    ctx->pc = 0x1262A4u;
    // 0x1262a4: 0x0  nop
    ctx->pc = 0x1262a4u;
    // NOP
label_1262a8:
    // 0x1262a8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1262a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1262ac: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1262acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1262b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1262b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1262b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1262b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1262b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1262bc: 0x74282b  sltu        $a1, $v1, $s4
    ctx->pc = 0x1262bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1262c0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1262C0u;
    {
        const bool branch_taken_0x1262c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1262C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262C0u;
        // 0x1262c4: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262c0) {
            ctx->pc = 0x1262A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1262a8;
        }
    }
    ctx->pc = 0x1262C8u;
    // 0x1262c8: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x1262c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1262cc:
    // 0x1262cc: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x1262ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1262d0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1262D0u;
    {
        const bool branch_taken_0x1262d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1262D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262D0u;
        // 0x1262d4: 0x3b11021  addu        $v0, $sp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262d0) {
            ctx->pc = 0x126280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126280;
        }
    }
    ctx->pc = 0x1262D8u;
label_1262d8:
    // 0x1262d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1262d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1262dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262e0: 0xc04a02a  jal         func_1280A8
    ctx->pc = 0x1262E0u;
    SET_GPR_U32(ctx, 31, 0x1262E8u);
    ctx->pc = 0x1262E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1262E0u;
    // 0x1262e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280A8u, 0x1262E0u, 0x1262E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262E8u;
label_1262e8:
    // 0x1262e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1262e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1262ec: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1262ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1262f0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1262f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1262f4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1262f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1262f8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1262f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1262fc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1262fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x126300: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x126300u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126304: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x126304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x126308: 0x3e00008  jr          $ra
    ctx->pc = 0x126308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126308u;
        // 0x12630c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126310u;
}
