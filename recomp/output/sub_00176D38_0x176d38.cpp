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

// Function: sub_00176D38
// Address: 0x176d38 - 0x176dd0
void sub_00176D38_0x176d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176D38_0x176d38");
#endif

    switch (ctx->pc) {
        case 0x176d38u: goto label_176d38;
        case 0x176d3cu: goto label_176d3c;
        case 0x176d40u: goto label_176d40;
        case 0x176d44u: goto label_176d44;
        case 0x176d48u: goto label_176d48;
        case 0x176d4cu: goto label_176d4c;
        case 0x176d50u: goto label_176d50;
        case 0x176d54u: goto label_176d54;
        case 0x176d58u: goto label_176d58;
        case 0x176d5cu: goto label_176d5c;
        case 0x176d60u: goto label_176d60;
        case 0x176d64u: goto label_176d64;
        case 0x176d68u: goto label_176d68;
        case 0x176d6cu: goto label_176d6c;
        case 0x176d70u: goto label_176d70;
        case 0x176d74u: goto label_176d74;
        case 0x176d78u: goto label_176d78;
        case 0x176d7cu: goto label_176d7c;
        case 0x176d80u: goto label_176d80;
        case 0x176d84u: goto label_176d84;
        case 0x176d88u: goto label_176d88;
        case 0x176d8cu: goto label_176d8c;
        case 0x176d90u: goto label_176d90;
        case 0x176d94u: goto label_176d94;
        case 0x176d98u: goto label_176d98;
        case 0x176d9cu: goto label_176d9c;
        case 0x176da0u: goto label_176da0;
        case 0x176da4u: goto label_176da4;
        case 0x176da8u: goto label_176da8;
        case 0x176dacu: goto label_176dac;
        case 0x176db0u: goto label_176db0;
        case 0x176db4u: goto label_176db4;
        case 0x176db8u: goto label_176db8;
        case 0x176dbcu: goto label_176dbc;
        case 0x176dc0u: goto label_176dc0;
        case 0x176dc4u: goto label_176dc4;
        case 0x176dc8u: goto label_176dc8;
        case 0x176dccu: goto label_176dcc;
        default: break;
    }

    ctx->pc = 0x176d38u;

label_176d38:
    // 0x176d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176d3c:
    // 0x176d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176d40:
    // 0x176d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176d44:
    // 0x176d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176d48:
    // 0x176d48: 0xc04f9a4  jal         func_13E690
label_176d4c:
    if (ctx->pc == 0x176D4Cu) {
        ctx->pc = 0x176D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D48u;
        // 0x176d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D50u;
        goto label_176d50;
    }
    ctx->pc = 0x176D48u;
    SET_GPR_U32(ctx, 31, 0x176D50u);
    ctx->pc = 0x176D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D48u;
    // 0x176d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176D48u, 0x176D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D50u;
label_176d50:
    // 0x176d50: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x176d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_176d54:
    // 0x176d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176d58:
    // 0x176d58: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_176d5c:
    // 0x176d5c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176d60:
    // 0x176d60: 0xc04f8fc  jal         func_13E3F0
label_176d64:
    if (ctx->pc == 0x176D64u) {
        ctx->pc = 0x176D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D60u;
        // 0x176d64: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D68u;
        goto label_176d68;
    }
    ctx->pc = 0x176D60u;
    SET_GPR_U32(ctx, 31, 0x176D68u);
    ctx->pc = 0x176D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D60u;
    // 0x176d64: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176D60u, 0x176D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D68u;
label_176d68:
    // 0x176d68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176d6c:
    // 0x176d6c: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x176d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_176d70:
    // 0x176d70: 0xc0461e8  jal         func_1187A0
label_176d74:
    if (ctx->pc == 0x176D74u) {
        ctx->pc = 0x176D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D70u;
        // 0x176d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D78u;
        goto label_176d78;
    }
    ctx->pc = 0x176D70u;
    SET_GPR_U32(ctx, 31, 0x176D78u);
    ctx->pc = 0x176D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D70u;
    // 0x176d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x176D70u, 0x176D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D78u;
label_176d78:
    // 0x176d78: 0xc60c00dc  lwc1        $f12, 0xDC($s0)
    ctx->pc = 0x176d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_176d7c:
    // 0x176d7c: 0xc046290  jal         func_118A40
label_176d80:
    if (ctx->pc == 0x176D80u) {
        ctx->pc = 0x176D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D7Cu;
        // 0x176d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D84u;
        goto label_176d84;
    }
    ctx->pc = 0x176D7Cu;
    SET_GPR_U32(ctx, 31, 0x176D84u);
    ctx->pc = 0x176D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D7Cu;
    // 0x176d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x176D7Cu, 0x176D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D84u;
label_176d84:
    // 0x176d84: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x176d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176d88:
    // 0x176d88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_176d8c:
    // 0x176d8c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x176d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_176d90:
    // 0x176d90: 0xc046256  jal         func_118958
label_176d94:
    if (ctx->pc == 0x176D94u) {
        ctx->pc = 0x176D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D90u;
        // 0x176d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D98u;
        goto label_176d98;
    }
    ctx->pc = 0x176D90u;
    SET_GPR_U32(ctx, 31, 0x176D98u);
    ctx->pc = 0x176D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D90u;
    // 0x176d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x176D90u, 0x176D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D98u;
label_176d98:
    // 0x176d98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x176d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_176d9c:
    // 0x176d9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176da0:
    // 0x176da0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x176da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_176da4:
    // 0x176da4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176da8:
    // 0x176da8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176dac:
    // 0x176dac: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176db0:
    // 0x176db0: 0x40f809  jalr        $v0
label_176db4:
    if (ctx->pc == 0x176DB4u) {
        ctx->pc = 0x176DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DB0u;
        // 0x176db4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DB8u;
        goto label_176db8;
    }
    ctx->pc = 0x176DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176DB8u);
        ctx->pc = 0x176DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DB0u;
        // 0x176db4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176DB0u, 0x176DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176DB8u;
label_176db8:
    // 0x176db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176dbc:
    // 0x176dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176dc0:
    // 0x176dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176dc4:
    // 0x176dc4: 0x3e00008  jr          $ra
label_176dc8:
    if (ctx->pc == 0x176DC8u) {
        ctx->pc = 0x176DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DC4u;
        // 0x176dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DCCu;
        goto label_176dcc;
    }
    ctx->pc = 0x176DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DC4u;
        // 0x176dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176DCCu;
label_176dcc:
    // 0x176dcc: 0x0  nop
    ctx->pc = 0x176dccu;
    // NOP
    ctx->pc = 0x176dd0u;
}
