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

// Function: sub_00176C78
// Address: 0x176c78 - 0x176d38
void sub_00176C78_0x176c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176C78_0x176c78");
#endif

    switch (ctx->pc) {
        case 0x176c78u: goto label_176c78;
        case 0x176c7cu: goto label_176c7c;
        case 0x176c80u: goto label_176c80;
        case 0x176c84u: goto label_176c84;
        case 0x176c88u: goto label_176c88;
        case 0x176c8cu: goto label_176c8c;
        case 0x176c90u: goto label_176c90;
        case 0x176c94u: goto label_176c94;
        case 0x176c98u: goto label_176c98;
        case 0x176c9cu: goto label_176c9c;
        case 0x176ca0u: goto label_176ca0;
        case 0x176ca4u: goto label_176ca4;
        case 0x176ca8u: goto label_176ca8;
        case 0x176cacu: goto label_176cac;
        case 0x176cb0u: goto label_176cb0;
        case 0x176cb4u: goto label_176cb4;
        case 0x176cb8u: goto label_176cb8;
        case 0x176cbcu: goto label_176cbc;
        case 0x176cc0u: goto label_176cc0;
        case 0x176cc4u: goto label_176cc4;
        case 0x176cc8u: goto label_176cc8;
        case 0x176cccu: goto label_176ccc;
        case 0x176cd0u: goto label_176cd0;
        case 0x176cd4u: goto label_176cd4;
        case 0x176cd8u: goto label_176cd8;
        case 0x176cdcu: goto label_176cdc;
        case 0x176ce0u: goto label_176ce0;
        case 0x176ce4u: goto label_176ce4;
        case 0x176ce8u: goto label_176ce8;
        case 0x176cecu: goto label_176cec;
        case 0x176cf0u: goto label_176cf0;
        case 0x176cf4u: goto label_176cf4;
        case 0x176cf8u: goto label_176cf8;
        case 0x176cfcu: goto label_176cfc;
        case 0x176d00u: goto label_176d00;
        case 0x176d04u: goto label_176d04;
        case 0x176d08u: goto label_176d08;
        case 0x176d0cu: goto label_176d0c;
        case 0x176d10u: goto label_176d10;
        case 0x176d14u: goto label_176d14;
        case 0x176d18u: goto label_176d18;
        case 0x176d1cu: goto label_176d1c;
        case 0x176d20u: goto label_176d20;
        case 0x176d24u: goto label_176d24;
        case 0x176d28u: goto label_176d28;
        case 0x176d2cu: goto label_176d2c;
        case 0x176d30u: goto label_176d30;
        case 0x176d34u: goto label_176d34;
        default: break;
    }

    ctx->pc = 0x176c78u;

label_176c78:
    // 0x176c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176c7c:
    // 0x176c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176c80:
    // 0x176c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176c84:
    // 0x176c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176c88:
    // 0x176c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176c8c:
    // 0x176c8c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x176c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_176c90:
    // 0x176c90: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x176c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_176c94:
    // 0x176c94: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x176c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_176c98:
    // 0x176c98: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_176c9c:
    if (ctx->pc == 0x176C9Cu) {
        ctx->pc = 0x176C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C98u;
        // 0x176c9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176CA0u;
        goto label_176ca0;
    }
    ctx->pc = 0x176C98u;
    {
        const bool branch_taken_0x176c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C98u;
        // 0x176c9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c98) {
            ctx->pc = 0x176D28u;
            goto label_176d28;
        }
    }
    ctx->pc = 0x176CA0u;
label_176ca0:
    // 0x176ca0: 0x58400022  blezl       $v0, . + 4 + (0x22 << 2)
label_176ca4:
    if (ctx->pc == 0x176CA4u) {
        ctx->pc = 0x176CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CA0u;
        // 0x176ca4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176CA8u;
        goto label_176ca8;
    }
    ctx->pc = 0x176CA0u;
    {
        const bool branch_taken_0x176ca0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x176ca0) {
            ctx->pc = 0x176CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176CA0u;
            // 0x176ca4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176D2Cu;
            goto label_176d2c;
        }
    }
    ctx->pc = 0x176CA8u;
label_176ca8:
    // 0x176ca8: 0xc04f9b8  jal         func_13E6E0
label_176cac:
    if (ctx->pc == 0x176CACu) {
        ctx->pc = 0x176CB0u;
        goto label_176cb0;
    }
    ctx->pc = 0x176CA8u;
    SET_GPR_U32(ctx, 31, 0x176CB0u);
    ctx->pc = 0x13E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E6E0u, 0x176CA8u, 0x176CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CB0u;
label_176cb0:
    // 0x176cb0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x176cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_176cb4:
    // 0x176cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176cb8:
    // 0x176cb8: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x176cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_176cbc:
    // 0x176cbc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176cc0:
    // 0x176cc0: 0xc04f8fc  jal         func_13E3F0
label_176cc4:
    if (ctx->pc == 0x176CC4u) {
        ctx->pc = 0x176CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CC0u;
        // 0x176cc4: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176CC8u;
        goto label_176cc8;
    }
    ctx->pc = 0x176CC0u;
    SET_GPR_U32(ctx, 31, 0x176CC8u);
    ctx->pc = 0x176CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CC0u;
    // 0x176cc4: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176CC0u, 0x176CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CC8u;
label_176cc8:
    // 0x176cc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x176cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176ccc:
    // 0x176ccc: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x176cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_176cd0:
    // 0x176cd0: 0xc0461e8  jal         func_1187A0
label_176cd4:
    if (ctx->pc == 0x176CD4u) {
        ctx->pc = 0x176CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CD0u;
        // 0x176cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176CD8u;
        goto label_176cd8;
    }
    ctx->pc = 0x176CD0u;
    SET_GPR_U32(ctx, 31, 0x176CD8u);
    ctx->pc = 0x176CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CD0u;
    // 0x176cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x176CD0u, 0x176CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CD8u;
label_176cd8:
    // 0x176cd8: 0xc62c00dc  lwc1        $f12, 0xDC($s1)
    ctx->pc = 0x176cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_176cdc:
    // 0x176cdc: 0xc046290  jal         func_118A40
label_176ce0:
    if (ctx->pc == 0x176CE0u) {
        ctx->pc = 0x176CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CDCu;
        // 0x176ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176CE4u;
        goto label_176ce4;
    }
    ctx->pc = 0x176CDCu;
    SET_GPR_U32(ctx, 31, 0x176CE4u);
    ctx->pc = 0x176CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CDCu;
    // 0x176ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x176CDCu, 0x176CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CE4u;
label_176ce4:
    // 0x176ce4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_176ce8:
    // 0x176ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176cec:
    // 0x176cec: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x176cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_176cf0:
    // 0x176cf0: 0xc045fea  jal         func_117FA8
label_176cf4:
    if (ctx->pc == 0x176CF4u) {
        ctx->pc = 0x176CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CF0u;
        // 0x176cf4: 0x8e2500bc  lw          $a1, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176CF8u;
        goto label_176cf8;
    }
    ctx->pc = 0x176CF0u;
    SET_GPR_U32(ctx, 31, 0x176CF8u);
    ctx->pc = 0x176CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CF0u;
    // 0x176cf4: 0x8e2500bc  lw          $a1, 0xBC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x176CF0u, 0x176CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CF8u;
label_176cf8:
    // 0x176cf8: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x176cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176cfc:
    // 0x176cfc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176cfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_176d00:
    // 0x176d00: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x176d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_176d04:
    // 0x176d04: 0xc046256  jal         func_118958
label_176d08:
    if (ctx->pc == 0x176D08u) {
        ctx->pc = 0x176D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D04u;
        // 0x176d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D0Cu;
        goto label_176d0c;
    }
    ctx->pc = 0x176D04u;
    SET_GPR_U32(ctx, 31, 0x176D0Cu);
    ctx->pc = 0x176D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D04u;
    // 0x176d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x176D04u, 0x176D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D0Cu;
label_176d0c:
    // 0x176d0c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x176d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_176d10:
    // 0x176d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176d14:
    // 0x176d14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176d18:
    // 0x176d18: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176d1c:
    // 0x176d1c: 0x40f809  jalr        $v0
label_176d20:
    if (ctx->pc == 0x176D20u) {
        ctx->pc = 0x176D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D1Cu;
        // 0x176d20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D24u;
        goto label_176d24;
    }
    ctx->pc = 0x176D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176D24u);
        ctx->pc = 0x176D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D1Cu;
        // 0x176d20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D1Cu, 0x176D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176D24u;
label_176d24:
    // 0x176d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176d28:
    // 0x176d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176d2c:
    // 0x176d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176d30:
    // 0x176d30: 0x3e00008  jr          $ra
label_176d34:
    if (ctx->pc == 0x176D34u) {
        ctx->pc = 0x176D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D30u;
        // 0x176d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D38u;
        goto label_fallthrough_0x176d30;
    }
    ctx->pc = 0x176D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D30u;
        // 0x176d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176d30:
    ctx->pc = 0x176D38u;
}
