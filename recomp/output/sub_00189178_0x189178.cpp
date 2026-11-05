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

// Function: sub_00189178
// Address: 0x189178 - 0x189250
void sub_00189178_0x189178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189178_0x189178");
#endif

    switch (ctx->pc) {
        case 0x189178u: goto label_189178;
        case 0x18917cu: goto label_18917c;
        case 0x189180u: goto label_189180;
        case 0x189184u: goto label_189184;
        case 0x189188u: goto label_189188;
        case 0x18918cu: goto label_18918c;
        case 0x189190u: goto label_189190;
        case 0x189194u: goto label_189194;
        case 0x189198u: goto label_189198;
        case 0x18919cu: goto label_18919c;
        case 0x1891a0u: goto label_1891a0;
        case 0x1891a4u: goto label_1891a4;
        case 0x1891a8u: goto label_1891a8;
        case 0x1891acu: goto label_1891ac;
        case 0x1891b0u: goto label_1891b0;
        case 0x1891b4u: goto label_1891b4;
        case 0x1891b8u: goto label_1891b8;
        case 0x1891bcu: goto label_1891bc;
        case 0x1891c0u: goto label_1891c0;
        case 0x1891c4u: goto label_1891c4;
        case 0x1891c8u: goto label_1891c8;
        case 0x1891ccu: goto label_1891cc;
        case 0x1891d0u: goto label_1891d0;
        case 0x1891d4u: goto label_1891d4;
        case 0x1891d8u: goto label_1891d8;
        case 0x1891dcu: goto label_1891dc;
        case 0x1891e0u: goto label_1891e0;
        case 0x1891e4u: goto label_1891e4;
        case 0x1891e8u: goto label_1891e8;
        case 0x1891ecu: goto label_1891ec;
        case 0x1891f0u: goto label_1891f0;
        case 0x1891f4u: goto label_1891f4;
        case 0x1891f8u: goto label_1891f8;
        case 0x1891fcu: goto label_1891fc;
        case 0x189200u: goto label_189200;
        case 0x189204u: goto label_189204;
        case 0x189208u: goto label_189208;
        case 0x18920cu: goto label_18920c;
        case 0x189210u: goto label_189210;
        case 0x189214u: goto label_189214;
        case 0x189218u: goto label_189218;
        case 0x18921cu: goto label_18921c;
        case 0x189220u: goto label_189220;
        case 0x189224u: goto label_189224;
        case 0x189228u: goto label_189228;
        case 0x18922cu: goto label_18922c;
        case 0x189230u: goto label_189230;
        case 0x189234u: goto label_189234;
        case 0x189238u: goto label_189238;
        case 0x18923cu: goto label_18923c;
        case 0x189240u: goto label_189240;
        case 0x189244u: goto label_189244;
        case 0x189248u: goto label_189248;
        case 0x18924cu: goto label_18924c;
        default: break;
    }

    ctx->pc = 0x189178u;

label_189178:
    // 0x189178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18917c:
    // 0x18917c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_189180:
    // 0x189180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x189180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_189184:
    // 0x189184: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x189184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_189188:
    // 0x189188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18918c:
    // 0x18918c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_189190:
    // 0x189190: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x189190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_189194:
    // 0x189194: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
label_189198:
    if (ctx->pc == 0x189198u) {
        ctx->pc = 0x189198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189194u;
        // 0x189198: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18919Cu;
        goto label_18919c;
    }
    ctx->pc = 0x189194u;
    {
        const bool branch_taken_0x189194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x189198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189194u;
        // 0x189198: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189194) {
            ctx->pc = 0x18923Cu;
            goto label_18923c;
        }
    }
    ctx->pc = 0x18919Cu;
label_18919c:
    // 0x18919c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1891a0:
    // 0x1891a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1891a4:
    if (ctx->pc == 0x1891A4u) {
        ctx->pc = 0x1891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A0u;
        // 0x1891a4: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891A8u;
        goto label_1891a8;
    }
    ctx->pc = 0x1891A0u;
    {
        const bool branch_taken_0x1891a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A0u;
        // 0x1891a4: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891a0) {
            ctx->pc = 0x1891B8u;
            goto label_1891b8;
        }
    }
    ctx->pc = 0x1891A8u;
label_1891a8:
    // 0x1891a8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1891a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1891ac:
    // 0x1891ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1891acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1891b0:
    // 0x1891b0: 0x40f809  jalr        $v0
label_1891b4:
    if (ctx->pc == 0x1891B4u) {
        ctx->pc = 0x1891B8u;
        goto label_1891b8;
    }
    ctx->pc = 0x1891B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1891B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1891B0u, 0x1891B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1891B8u;
label_1891b8:
    // 0x1891b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1891b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1891bc:
    // 0x1891bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1891bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1891c0:
    // 0x1891c0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1891c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1891c4:
    // 0x1891c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1891c8:
    if (ctx->pc == 0x1891C8u) {
        ctx->pc = 0x1891C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891C4u;
        // 0x1891c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891CCu;
        goto label_1891cc;
    }
    ctx->pc = 0x1891C4u;
    {
        const bool branch_taken_0x1891c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1891C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891C4u;
        // 0x1891c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891c4) {
            ctx->pc = 0x1891E0u;
            goto label_1891e0;
        }
    }
    ctx->pc = 0x1891CCu;
label_1891cc:
    // 0x1891cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1891ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1891d0:
    // 0x1891d0: 0x0  nop
    ctx->pc = 0x1891d0u;
    // NOP
label_1891d4:
    // 0x1891d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1891d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1891d8:
    // 0x1891d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1891dc:
    if (ctx->pc == 0x1891DCu) {
        ctx->pc = 0x1891E0u;
        goto label_1891e0;
    }
    ctx->pc = 0x1891D8u;
    {
        const bool branch_taken_0x1891d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1891d8) {
            ctx->pc = 0x1891F8u;
            goto label_1891f8;
        }
    }
    ctx->pc = 0x1891E0u;
label_1891e0:
    // 0x1891e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1891e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1891e4:
    // 0x1891e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1891e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1891e8:
    // 0x1891e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1891e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1891ec:
    // 0x1891ec: 0x0  nop
    ctx->pc = 0x1891ecu;
    // NOP
label_1891f0:
    // 0x1891f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1891f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1891f4:
    // 0x1891f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1891f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1891f8:
    // 0x1891f8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1891f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1891fc:
    // 0x1891fc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1891fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_189200:
    // 0x189200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189204:
    // 0x189204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189208:
    // 0x189208: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18920c:
    // 0x18920c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x18920cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_189210:
    // 0x189210: 0xc061a16  jal         func_186858
label_189214:
    if (ctx->pc == 0x189214u) {
        ctx->pc = 0x189214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189210u;
        // 0x189214: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189218u;
        goto label_189218;
    }
    ctx->pc = 0x189210u;
    SET_GPR_U32(ctx, 31, 0x189218u);
    ctx->pc = 0x189214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189210u;
    // 0x189214: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x189210u, 0x189218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189218u;
label_189218:
    // 0x189218: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18921c:
    // 0x18921c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18921cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189220:
    // 0x189220: 0x0  nop
    ctx->pc = 0x189220u;
    // NOP
label_189224:
    // 0x189224: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x189224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_189228:
    // 0x189228: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x189228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_18922c:
    // 0x18922c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_189230:
    if (ctx->pc == 0x189230u) {
        ctx->pc = 0x189230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18922Cu;
        // 0x189230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189234u;
        goto label_189234;
    }
    ctx->pc = 0x18922Cu;
    {
        const bool branch_taken_0x18922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18922c) {
            ctx->pc = 0x189230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18922Cu;
            // 0x189230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189240u;
            goto label_189240;
        }
    }
    ctx->pc = 0x189234u;
label_189234:
    // 0x189234: 0xc062f48  jal         func_18BD20
label_189238:
    if (ctx->pc == 0x189238u) {
        ctx->pc = 0x189238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189234u;
        // 0x189238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18923Cu;
        goto label_18923c;
    }
    ctx->pc = 0x189234u;
    SET_GPR_U32(ctx, 31, 0x18923Cu);
    ctx->pc = 0x189238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189234u;
    // 0x189238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD20u, 0x189234u, 0x18923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18923Cu;
label_18923c:
    // 0x18923c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18923cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189240:
    // 0x189240: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x189240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_189244:
    // 0x189244: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x189244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_189248:
    // 0x189248: 0x3e00008  jr          $ra
label_18924c:
    if (ctx->pc == 0x18924Cu) {
        ctx->pc = 0x18924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189248u;
        // 0x18924c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189250u;
        goto label_fallthrough_0x189248;
    }
    ctx->pc = 0x189248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189248u;
        // 0x18924c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x189248:
    ctx->pc = 0x189250u;
}
