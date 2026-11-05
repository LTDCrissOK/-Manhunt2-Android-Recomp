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

// Function: sub_001D0038
// Address: 0x1d0038 - 0x1d0548
void sub_001D0038_0x1d0038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0038_0x1d0038");
#endif

    switch (ctx->pc) {
        case 0x1d0098u: goto label_1d0098;
        case 0x1d00b8u: goto label_1d00b8;
        case 0x1d00c0u: goto label_1d00c0;
        case 0x1d00d8u: goto label_1d00d8;
        case 0x1d00fcu: goto label_1d00fc;
        case 0x1d0118u: goto label_1d0118;
        case 0x1d0158u: goto label_1d0158;
        case 0x1d016cu: goto label_1d016c;
        case 0x1d0188u: goto label_1d0188;
        case 0x1d01acu: goto label_1d01ac;
        case 0x1d01bcu: goto label_1d01bc;
        case 0x1d01d0u: goto label_1d01d0;
        case 0x1d01f0u: goto label_1d01f0;
        case 0x1d0208u: goto label_1d0208;
        case 0x1d021cu: goto label_1d021c;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d0254u: goto label_1d0254;
        case 0x1d02a4u: goto label_1d02a4;
        case 0x1d02d0u: goto label_1d02d0;
        case 0x1d02e0u: goto label_1d02e0;
        case 0x1d0308u: goto label_1d0308;
        case 0x1d0334u: goto label_1d0334;
        case 0x1d0344u: goto label_1d0344;
        case 0x1d0378u: goto label_1d0378;
        case 0x1d0388u: goto label_1d0388;
        case 0x1d03b0u: goto label_1d03b0;
        case 0x1d03d8u: goto label_1d03d8;
        case 0x1d03ecu: goto label_1d03ec;
        case 0x1d0404u: goto label_1d0404;
        case 0x1d041cu: goto label_1d041c;
        case 0x1d0434u: goto label_1d0434;
        case 0x1d0468u: goto label_1d0468;
        case 0x1d0484u: goto label_1d0484;
        case 0x1d0498u: goto label_1d0498;
        case 0x1d04bcu: goto label_1d04bc;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04ecu: goto label_1d04ec;
        case 0x1d0504u: goto label_1d0504;
        default: break;
    }

    ctx->pc = 0x1d0038u;

    // 0x1d0038: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d0038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d003c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d0040: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1d0040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1d0044: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d0044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0048: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1d0048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1d004c: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x1d004cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1d0050: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1d0050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0054: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x1d0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x1d0058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d005c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1d005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1d0060: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d0060u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0064: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1d0064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1d0068: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1d0068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1d006c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1d006cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1d0070: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1d0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1d0074: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1d0074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1d0078: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x1d0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x1d007c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1d007cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1d0080: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x1d0080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x1d0084: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x1d0084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    // 0x1d0088: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D0088u;
    {
        const bool branch_taken_0x1d0088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0088u;
        // 0x1d008c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0088) {
            ctx->pc = 0x1D0108u;
            goto label_1d0108;
        }
    }
    ctx->pc = 0x1D0090u;
    // 0x1d0090: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x1D0090u;
    SET_GPR_U32(ctx, 31, 0x1D0098u);
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x1D0090u, 0x1D0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0098u;
label_1d0098:
    // 0x1d0098: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0098u;
    {
        const bool branch_taken_0x1d0098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0098u;
        // 0x1d009c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0098) {
            ctx->pc = 0x1D0110u;
            goto label_1d0110;
        }
    }
    ctx->pc = 0x1D00A0u;
    // 0x1d00a0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1d00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d00a4: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1d00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d00a8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D00A8u;
    {
        const bool branch_taken_0x1d00a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00A8u;
        // 0x1d00ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00a8) {
            ctx->pc = 0x1D0108u;
            goto label_1d0108;
        }
    }
    ctx->pc = 0x1D00B0u;
    // 0x1d00b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d00b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d00b4: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1d00b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_1d00b8:
    // 0x1d00b8: 0xc0749e6  jal         func_1D2798
    ctx->pc = 0x1D00B8u;
    SET_GPR_U32(ctx, 31, 0x1D00C0u);
    ctx->pc = 0x1D00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00B8u;
    // 0x1d00bc: 0x8ea4000c  lw          $a0, 0xC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2798u, 0x1D00B8u, 0x1D00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00C0u;
label_1d00c0:
    // 0x1d00c0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d00c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d00c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D00C4u;
    {
        const bool branch_taken_0x1d00c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00C4u;
        // 0x1d00c8: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00c4) {
            ctx->pc = 0x1D0110u;
            goto label_1d0110;
        }
    }
    ctx->pc = 0x1D00CCu;
    // 0x1d00cc: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1d00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d00d0: 0xc0749ee  jal         func_1D27B8
    ctx->pc = 0x1D00D0u;
    SET_GPR_U32(ctx, 31, 0x1D00D8u);
    ctx->pc = 0x1D00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00D0u;
    // 0x1d00d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27B8u, 0x1D00D0u, 0x1D00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00D8u;
label_1d00d8:
    // 0x1d00d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d00d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00dc: 0x5220fff6  beql        $s1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D00DCu;
    {
        const bool branch_taken_0x1d00dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d00dc) {
            ctx->pc = 0x1D00E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D00DCu;
            // 0x1d00e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D00B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d00b8;
        }
    }
    ctx->pc = 0x1D00E4u;
    // 0x1d00e4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1d00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1d00e8: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D00E8u;
    {
        const bool branch_taken_0x1d00e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1d00e8) {
            ctx->pc = 0x1D00ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D00E8u;
            // 0x1d00ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D00B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d00b8;
        }
    }
    ctx->pc = 0x1D00F0u;
    // 0x1d00f0: 0x8e458e80  lw          $a1, -0x7180($s2)
    ctx->pc = 0x1d00f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938240)));
    // 0x1d00f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D00F4u;
    SET_GPR_U32(ctx, 31, 0x1D00FCu);
    ctx->pc = 0x1D00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00F4u;
    // 0x1d00f8: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D00F4u, 0x1D00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00FCu;
label_1d00fc:
    // 0x1d00fc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D00FCu;
    {
        const bool branch_taken_0x1d00fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00FCu;
        // 0x1d0100: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00fc) {
            ctx->pc = 0x1D00B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d00b8;
        }
    }
    ctx->pc = 0x1D0104u;
    // 0x1d0104: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d0104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_1d0108:
    // 0x1d0108: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1d0108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1d010c: 0x0  nop
    ctx->pc = 0x1d010cu;
    // NOP
label_1d0110:
    // 0x1d0110: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1D0110u;
    {
        const bool branch_taken_0x1d0110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0110u;
        // 0x1d0114: 0x245ecd70  addiu       $fp, $v0, -0x3290 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0110) {
            ctx->pc = 0x1D04D4u;
            goto label_1d04d4;
        }
    }
    ctx->pc = 0x1D0118u;
label_1d0118:
    // 0x1d0118: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x1d0118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d011c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d011cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0120: 0x0  nop
    ctx->pc = 0x1d0120u;
    // NOP
    // 0x1d0124: 0x450000fb  bc1f        . + 4 + (0xFB << 2)
    ctx->pc = 0x1D0124u;
    {
        const bool branch_taken_0x1d0124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0124u;
        // 0x1d0128: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0124) {
            ctx->pc = 0x1D0514u;
            goto label_1d0514;
        }
    }
    ctx->pc = 0x1D012Cu;
    // 0x1d012c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1d012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1d0130: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D0130u;
    {
        const bool branch_taken_0x1d0130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0130u;
        // 0x1d0134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0130) {
            ctx->pc = 0x1D0260u;
            goto label_1d0260;
        }
    }
    ctx->pc = 0x1D0138u;
    // 0x1d0138: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d0138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d013c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1D013Cu;
    {
        const bool branch_taken_0x1d013c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D013Cu;
        // 0x1d0140: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d013c) {
            ctx->pc = 0x1D025Cu;
            goto label_1d025c;
        }
    }
    ctx->pc = 0x1D0144u;
    // 0x1d0144: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d0144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d0148: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d0148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d014c: 0x24a5d278  addiu       $a1, $a1, -0x2D88
    ctx->pc = 0x1d014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955640));
    // 0x1d0150: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D0150u;
    SET_GPR_U32(ctx, 31, 0x1D0158u);
    ctx->pc = 0x1D0154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0150u;
    // 0x1d0154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D0150u, 0x1D0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0158u;
label_1d0158:
    // 0x1d0158: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0158u;
    {
        const bool branch_taken_0x1d0158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0158u;
        // 0x1d015c: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0158) {
            ctx->pc = 0x1D0174u;
            goto label_1d0174;
        }
    }
    ctx->pc = 0x1D0160u;
    // 0x1d0160: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1d0160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1d0164: 0xc04952e  jal         func_1254B8
    ctx->pc = 0x1D0164u;
    SET_GPR_U32(ctx, 31, 0x1D016Cu);
    ctx->pc = 0x1D0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0164u;
    // 0x1d0168: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254B8u, 0x1D0164u, 0x1D016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D016Cu;
label_1d016c:
    // 0x1d016c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1D016Cu;
    {
        const bool branch_taken_0x1d016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D016Cu;
        // 0x1d0170: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d016c) {
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D0174u;
label_1d0174:
    // 0x1d0174: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0174u;
    {
        const bool branch_taken_0x1d0174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0174u;
        // 0x1d0178: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0174) {
            ctx->pc = 0x1D0198u;
            goto label_1d0198;
        }
    }
    ctx->pc = 0x1D017Cu;
    // 0x1d017c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0180: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D0180u;
    SET_GPR_U32(ctx, 31, 0x1D0188u);
    ctx->pc = 0x1D0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0180u;
    // 0x1d0184: 0x24a5d298  addiu       $a1, $a1, -0x2D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D0180u, 0x1D0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0188u;
label_1d0188:
    // 0x1d0188: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0188u;
    {
        const bool branch_taken_0x1d0188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0188) {
            ctx->pc = 0x1D018Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0188u;
            // 0x1d018c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D019Cu;
            goto label_1d019c;
        }
    }
    ctx->pc = 0x1D0190u;
    // 0x1d0190: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x1D0190u;
    {
        const bool branch_taken_0x1d0190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0190u;
        // 0x1d0194: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0190) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D0198u;
label_1d0198:
    // 0x1d0198: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d0198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1d019c:
    // 0x1d019c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01a0: 0x24a5d2a8  addiu       $a1, $a1, -0x2D58
    ctx->pc = 0x1d01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955688));
    // 0x1d01a4: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x1D01A4u;
    SET_GPR_U32(ctx, 31, 0x1D01ACu);
    ctx->pc = 0x1D01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01A4u;
    // 0x1d01a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x1D01A4u, 0x1D01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01ACu;
label_1d01ac:
    // 0x1d01ac: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x1D01ACu;
    {
        const bool branch_taken_0x1d01ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01ACu;
        // 0x1d01b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01ac) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D01B4u;
    // 0x1d01b4: 0xc0efb2d  jal         func_3BECB4
    ctx->pc = 0x1D01B4u;
    SET_GPR_U32(ctx, 31, 0x1D01BCu);
    ctx->pc = 0x1D01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01B4u;
    // 0x1d01b8: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BECB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BECB4u, 0x1D01B4u, 0x1D01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01BCu;
label_1d01bc:
    // 0x1d01bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D01BCu;
    {
        const bool branch_taken_0x1d01bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01BCu;
        // 0x1d01c0: 0x2450fff4  addiu       $s0, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01bc) {
            ctx->pc = 0x1D01D8u;
            goto label_1d01d8;
        }
    }
    ctx->pc = 0x1D01C4u;
    // 0x1d01c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d01c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01c8: 0xc0efb2d  jal         func_3BECB4
    ctx->pc = 0x1D01C8u;
    SET_GPR_U32(ctx, 31, 0x1D01D0u);
    ctx->pc = 0x1D01CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01C8u;
    // 0x1d01cc: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BECB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BECB4u, 0x1D01C8u, 0x1D01D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01D0u;
label_1d01d0:
    // 0x1d01d0: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1D01D0u;
    {
        const bool branch_taken_0x1d01d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01D0u;
        // 0x1d01d4: 0x2450fff4  addiu       $s0, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01d0) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D01D8u;
label_1d01d8:
    // 0x1d01d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d01d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01dc: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1d01dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d01e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d01e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d01e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d01e8: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x1D01E8u;
    SET_GPR_U32(ctx, 31, 0x1D01F0u);
    ctx->pc = 0x1D01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01E8u;
    // 0x1d01ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x1D01E8u, 0x1D01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01F0u;
label_1d01f0:
    // 0x1d01f0: 0x3c14004a  lui         $s4, 0x4A
    ctx->pc = 0x1d01f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)74 << 16));
    // 0x1d01f4: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1d01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1d01f8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1d01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d01fc: 0x2450000d  addiu       $s0, $v0, 0xD
    ctx->pc = 0x1d01fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x1d0200: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1d0200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0204: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x1d0204u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
label_1d0208:
    // 0x1d0208: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x1d0208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d020c: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x1D020Cu;
    {
        const bool branch_taken_0x1d020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D020Cu;
        // 0x1d0210: 0x26849c38  addiu       $a0, $s4, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d020c) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D0214u;
    // 0x1d0214: 0xc080cd0  jal         func_203340
    ctx->pc = 0x1D0214u;
    SET_GPR_U32(ctx, 31, 0x1D021Cu);
    ctx->pc = 0x1D0218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0214u;
    // 0x1d0218: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203340u, 0x1D0214u, 0x1D021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D021Cu;
label_1d021c:
    // 0x1d021c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0220: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x1D0220u;
    SET_GPR_U32(ctx, 31, 0x1D0228u);
    ctx->pc = 0x1D0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0220u;
    // 0x1d0224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x1D0220u, 0x1D0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0228u;
label_1d0228:
    // 0x1d0228: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D0228u;
    {
        const bool branch_taken_0x1d0228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0228) {
            ctx->pc = 0x1D022Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0228u;
            // 0x1d022c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0208;
        }
    }
    ctx->pc = 0x1D0230u;
    // 0x1d0230: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x1d0230u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d0234: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x1d0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
    // 0x1d0238: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1d0238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d023c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d023cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0240: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d0240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0244: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d0244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0248: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d024c: 0xc07f65a  jal         func_1FD968
    ctx->pc = 0x1D024Cu;
    SET_GPR_U32(ctx, 31, 0x1D0254u);
    ctx->pc = 0x1D0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D024Cu;
    // 0x1d0250: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD968u, 0x1D024Cu, 0x1D0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0254u;
label_1d0254:
    // 0x1d0254: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1D0254u;
    {
        const bool branch_taken_0x1d0254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0254u;
        // 0x1d0258: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0254) {
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D025Cu;
label_1d025c:
    // 0x1d025c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0260:
    // 0x1d0260: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1D0260u;
    {
        const bool branch_taken_0x1d0260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0260u;
        // 0x1d0264: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0260) {
            ctx->pc = 0x1D043Cu;
            goto label_1d043c;
        }
    }
    ctx->pc = 0x1D0268u;
    // 0x1d0268: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1d0268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d026c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D026Cu;
    {
        const bool branch_taken_0x1d026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D026Cu;
        // 0x1d0270: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d026c) {
            ctx->pc = 0x1D043Cu;
            goto label_1d043c;
        }
    }
    ctx->pc = 0x1D0274u;
    // 0x1d0274: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x1d0274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0278: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x1d0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d027c: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x1d027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0280: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d0280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d0284: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d0284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d0288: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1d0288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d028c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d028cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d0290: 0x8ec20104  lw          $v0, 0x104($s6)
    ctx->pc = 0x1d0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x1d0294: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x1d0294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1d0298: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x1d0298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d029c: 0xc07508e  jal         func_1D4238
    ctx->pc = 0x1D029Cu;
    SET_GPR_U32(ctx, 31, 0x1D02A4u);
    ctx->pc = 0x1D02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D029Cu;
    // 0x1d02a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4238u, 0x1D029Cu, 0x1D02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02A4u;
label_1d02a4:
    // 0x1d02a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d02a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d02a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d02ac: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D02ACu;
    {
        const bool branch_taken_0x1d02ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02ACu;
        // 0x1d02b0: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02ac) {
            ctx->pc = 0x1D02C0u;
            goto label_1d02c0;
        }
    }
    ctx->pc = 0x1D02B4u;
    // 0x1d02b4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d02b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D02B8u;
    {
        const bool branch_taken_0x1d02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02B8u;
        // 0x1d02bc: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02b8) {
            ctx->pc = 0x1D02E4u;
            goto label_1d02e4;
        }
    }
    ctx->pc = 0x1D02C0u;
label_1d02c0:
    // 0x1d02c0: 0x8ec20104  lw          $v0, 0x104($s6)
    ctx->pc = 0x1d02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x1d02c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d02c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d02c8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1D02C8u;
    SET_GPR_U32(ctx, 31, 0x1D02D0u);
    ctx->pc = 0x1D02CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02C8u;
    // 0x1d02cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1D02C8u, 0x1D02D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02D0u;
label_1d02d0:
    // 0x1d02d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D02D0u;
    {
        const bool branch_taken_0x1d02d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02D0u;
        // 0x1d02d4: 0x26130080  addiu       $s3, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02d0) {
            ctx->pc = 0x1D02E4u;
            goto label_1d02e4;
        }
    }
    ctx->pc = 0x1D02D8u;
    // 0x1d02d8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1D02D8u;
    SET_GPR_U32(ctx, 31, 0x1D02E0u);
    ctx->pc = 0x1D02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02D8u;
    // 0x1d02dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1D02D8u, 0x1D02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02E0u;
label_1d02e0:
    // 0x1d02e0: 0x26130080  addiu       $s3, $s0, 0x80
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1d02e4:
    // 0x1d02e4: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1d02e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1d02e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02ec: 0x54620077  bnel        $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1D02ECu;
    {
        const bool branch_taken_0x1d02ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d02ec) {
            ctx->pc = 0x1D02F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D02ECu;
            // 0x1d02f0: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D02F4u;
    // 0x1d02f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d02f8: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x1d02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x1d02fc: 0x8c458e80  lw          $a1, -0x7180($v0)
    ctx->pc = 0x1d02fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F8E80u));
    // 0x1d0300: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D0300u;
    SET_GPR_U32(ctx, 31, 0x1D0308u);
    ctx->pc = 0x1D0304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0300u;
    // 0x1d0304: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D0300u, 0x1D0308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0308u;
label_1d0308:
    // 0x1d0308: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x1d0308u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d030c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D030Cu;
    {
        const bool branch_taken_0x1d030c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D030Cu;
        // 0x1d0310: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d030c) {
            ctx->pc = 0x1D0320u;
            goto label_1d0320;
        }
    }
    ctx->pc = 0x1D0314u;
    // 0x1d0314: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1d0314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d0318: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D0318u;
    {
        const bool branch_taken_0x1d0318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0318u;
        // 0x1d031c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0318) {
            ctx->pc = 0x1D0378u;
            goto label_1d0378;
        }
    }
    ctx->pc = 0x1D0320u;
label_1d0320:
    // 0x1d0320: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x1d0320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x1d0324: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D0324u;
    {
        const bool branch_taken_0x1d0324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0324) {
            ctx->pc = 0x1D0378u;
            goto label_1d0378;
        }
    }
    ctx->pc = 0x1D032Cu;
    // 0x1d032c: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x1D032Cu;
    SET_GPR_U32(ctx, 31, 0x1D0334u);
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x1D032Cu, 0x1D0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0334u;
label_1d0334:
    // 0x1d0334: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D0334u;
    {
        const bool branch_taken_0x1d0334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0334) {
            ctx->pc = 0x1D0378u;
            goto label_1d0378;
        }
    }
    ctx->pc = 0x1D033Cu;
    // 0x1d033c: 0xc0f0620  jal         func_3C1880
    ctx->pc = 0x1D033Cu;
    SET_GPR_U32(ctx, 31, 0x1D0344u);
    ctx->pc = 0x3C1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1880u, 0x1D033Cu, 0x1D0344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0344u;
label_1d0344:
    // 0x1d0344: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d0344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d0348: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x1d0348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x1d034c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1d034cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d0350: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0350u;
    {
        const bool branch_taken_0x1d0350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0350) {
            ctx->pc = 0x1D0354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0350u;
            // 0x1d0354: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0358u;
            goto label_1d0358;
        }
    }
    ctx->pc = 0x1D0358u;
label_1d0358:
    // 0x1d0358: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1d0358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1d035c: 0x8cc4cd60  lw          $a0, -0x32A0($a2)
    ctx->pc = 0x1d035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954336)));
    // 0x1d0360: 0xc44ccd70  lwc1        $f12, -0x3290($v0)
    ctx->pc = 0x1d0360u;
    { uint32_t bits = FAST_READ32(0x5BCD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0364: 0xc7cd0004  lwc1        $f13, 0x4($fp)
    ctx->pc = 0x1d0364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d0368: 0xc7ce0008  lwc1        $f14, 0x8($fp)
    ctx->pc = 0x1d0368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d036c: 0x2810  mfhi        $a1
    ctx->pc = 0x1d036cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1d0370: 0xc0d9c84  jal         func_367210
    ctx->pc = 0x1D0370u;
    SET_GPR_U32(ctx, 31, 0x1D0378u);
    ctx->pc = 0x1D0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0370u;
    // 0x1d0374: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367210u, 0x1D0370u, 0x1D0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0378u;
label_1d0378:
    // 0x1d0378: 0x56000054  bnel        $s0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1D0378u;
    {
        const bool branch_taken_0x1d0378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0378) {
            ctx->pc = 0x1D037Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0378u;
            // 0x1d037c: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D0380u;
    // 0x1d0380: 0xc083fd0  jal         func_20FF40
    ctx->pc = 0x1D0380u;
    SET_GPR_U32(ctx, 31, 0x1D0388u);
    ctx->pc = 0x1D0384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0380u;
    // 0x1d0384: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FF40u, 0x1D0380u, 0x1D0388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0388u;
label_1d0388:
    // 0x1d0388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d038c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0390: 0x1202004d  beq         $s0, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1D0390u;
    {
        const bool branch_taken_0x1d0390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0390u;
        // 0x1d0394: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0390) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D0398u;
    // 0x1d0398: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x1d0398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1d039c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d039cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03a0: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x1d03a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x1d03a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d03a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03a8: 0xc0b0a1c  jal         func_2C2870
    ctx->pc = 0x1D03A8u;
    SET_GPR_U32(ctx, 31, 0x1D03B0u);
    ctx->pc = 0x1D03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03A8u;
    // 0x1d03ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x1D03A8u, 0x1D03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03B0u;
label_1d03b0:
    // 0x1d03b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d03b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03b4: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1D03B4u;
    {
        const bool branch_taken_0x1d03b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03B4u;
        // 0x1d03b8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03b4) {
            ctx->pc = 0x1D04C8u;
            goto label_1d04c8;
        }
    }
    ctx->pc = 0x1D03BCu;
    // 0x1d03bc: 0x26c301d8  addiu       $v1, $s6, 0x1D8
    ctx->pc = 0x1d03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 472));
    // 0x1d03c0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1d03c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d03c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d03cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d03ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03d0: 0xc0b0eaa  jal         func_2C3AA8
    ctx->pc = 0x1D03D0u;
    SET_GPR_U32(ctx, 31, 0x1D03D8u);
    ctx->pc = 0x1D03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03D0u;
    // 0x1d03d4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AA8u, 0x1D03D0u, 0x1D03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03D8u;
label_1d03d8:
    // 0x1d03d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d03d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d03dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d03dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03e0: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50
    ctx->pc = 0x1d03e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
    // 0x1d03e4: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x1D03E4u;
    SET_GPR_U32(ctx, 31, 0x1D03ECu);
    ctx->pc = 0x1D03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03E4u;
    // 0x1d03e8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x1D03E4u, 0x1D03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03ECu;
label_1d03ec:
    // 0x1d03ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D03ECu;
    {
        const bool branch_taken_0x1d03ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03ECu;
        // 0x1d03f0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03ec) {
            ctx->pc = 0x1D0424u;
            goto label_1d0424;
        }
    }
    ctx->pc = 0x1D03F4u;
    // 0x1d03f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d03f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03f8: 0x24a5d2b8  addiu       $a1, $a1, -0x2D48
    ctx->pc = 0x1d03f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955704));
    // 0x1d03fc: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x1D03FCu;
    SET_GPR_U32(ctx, 31, 0x1D0404u);
    ctx->pc = 0x1D0400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03FCu;
    // 0x1d0400: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x1D03FCu, 0x1D0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0404u;
label_1d0404:
    // 0x1d0404: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0404u;
    {
        const bool branch_taken_0x1d0404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0404u;
        // 0x1d0408: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0404) {
            ctx->pc = 0x1D0424u;
            goto label_1d0424;
        }
    }
    ctx->pc = 0x1D040Cu;
    // 0x1d040c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0410: 0x24a5d2c0  addiu       $a1, $a1, -0x2D40
    ctx->pc = 0x1d0410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955712));
    // 0x1d0414: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x1D0414u;
    SET_GPR_U32(ctx, 31, 0x1D041Cu);
    ctx->pc = 0x1D0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0414u;
    // 0x1d0418: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x1D0414u, 0x1D041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D041Cu;
label_1d041c:
    // 0x1d041c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D041Cu;
    {
        const bool branch_taken_0x1d041c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d041c) {
            ctx->pc = 0x1D0420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D041Cu;
            // 0x1d0420: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D0424u;
label_1d0424:
    // 0x1d0424: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1d0424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d0428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d042c: 0xc0b118c  jal         func_2C4630
    ctx->pc = 0x1D042Cu;
    SET_GPR_U32(ctx, 31, 0x1D0434u);
    ctx->pc = 0x1D0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D042Cu;
    // 0x1d0430: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4630u, 0x1D042Cu, 0x1D0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0434u;
label_1d0434:
    // 0x1d0434: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D0434u;
    {
        const bool branch_taken_0x1d0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0434u;
        // 0x1d0438: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0434) {
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D043Cu;
label_1d043c:
    // 0x1d043c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D043Cu;
    {
        const bool branch_taken_0x1d043c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D043Cu;
        // 0x1d0440: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d043c) {
            ctx->pc = 0x1D0470u;
            goto label_1d0470;
        }
    }
    ctx->pc = 0x1D0444u;
    // 0x1d0444: 0x8ec200bc  lw          $v0, 0xBC($s6)
    ctx->pc = 0x1d0444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
    // 0x1d0448: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d0448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d044c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1d044cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1d0450: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D0450u;
    {
        const bool branch_taken_0x1d0450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0450) {
            ctx->pc = 0x1D0454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0450u;
            // 0x1d0454: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D0458u;
    // 0x1d0458: 0x8ec402a0  lw          $a0, 0x2A0($s6)
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 672)));
    // 0x1d045c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x1d045cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1d0460: 0xc0cf2da  jal         func_33CB68
    ctx->pc = 0x1D0460u;
    SET_GPR_U32(ctx, 31, 0x1D0468u);
    ctx->pc = 0x1D0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0460u;
    // 0x1d0464: 0x8e25007c  lw          $a1, 0x7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CB68u, 0x1D0460u, 0x1D0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0468u;
label_1d0468:
    // 0x1d0468: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D0468u;
    {
        const bool branch_taken_0x1d0468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0468u;
        // 0x1d046c: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0468) {
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D0470u;
label_1d0470:
    // 0x1d0470: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D0470u;
    {
        const bool branch_taken_0x1d0470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0470) {
            ctx->pc = 0x1D0474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0470u;
            // 0x1d0474: 0x8ea20038  lw          $v0, 0x38($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D04CCu;
            goto label_1d04cc;
        }
    }
    ctx->pc = 0x1D0478u;
    // 0x1d0478: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d047c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1D047Cu;
    SET_GPR_U32(ctx, 31, 0x1D0484u);
    ctx->pc = 0x1D0480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D047Cu;
    // 0x1d0480: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1D047Cu, 0x1D0484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0484u;
label_1d0484:
    // 0x1d0484: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1d0484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1d0488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d0488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d048c: 0x247087a0  addiu       $s0, $v1, -0x7860
    ctx->pc = 0x1d048cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936480));
    // 0x1d0490: 0xc046860  jal         func_11A180
    ctx->pc = 0x1D0490u;
    SET_GPR_U32(ctx, 31, 0x1D0498u);
    ctx->pc = 0x1D0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0490u;
    // 0x1d0494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A180u, 0x1D0490u, 0x1D0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0498u;
label_1d0498:
    // 0x1d0498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d0498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d049c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1d049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1d04a0: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D04A0u;
    {
        const bool branch_taken_0x1d04a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A0u;
        // 0x1d04a4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04a0) {
            ctx->pc = 0x1D04BCu;
            goto label_1d04bc;
        }
    }
    ctx->pc = 0x1D04A8u;
    // 0x1d04a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d04a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04ac: 0x8c46bd50  lw          $a2, -0x42B0($v0)
    ctx->pc = 0x1d04acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x1d04b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d04b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d04b4: 0xc046642  jal         func_119908
    ctx->pc = 0x1D04B4u;
    SET_GPR_U32(ctx, 31, 0x1D04BCu);
    ctx->pc = 0x1D04B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04B4u;
    // 0x1d04b8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1D04B4u, 0x1D04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04BCu;
label_1d04bc:
    // 0x1d04bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d04bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D04C0u;
    SET_GPR_U32(ctx, 31, 0x1D04C8u);
    ctx->pc = 0x1D04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04C0u;
    // 0x1d04c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D04C0u, 0x1D04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04C8u;
label_1d04c8:
    // 0x1d04c8: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x1d04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_1d04cc:
    // 0x1d04cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d04d0: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x1d04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
label_1d04d4:
    // 0x1d04d4: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1d04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d04d8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1d04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d04dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D04DCu;
    {
        const bool branch_taken_0x1d04dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04DCu;
        // 0x1d04e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04dc) {
            ctx->pc = 0x1D0508u;
            goto label_1d0508;
        }
    }
    ctx->pc = 0x1D04E4u;
    // 0x1d04e4: 0xc0749e6  jal         func_1D2798
    ctx->pc = 0x1D04E4u;
    SET_GPR_U32(ctx, 31, 0x1D04ECu);
    ctx->pc = 0x1D2798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2798u, 0x1D04E4u, 0x1D04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x8ea50038  lw          $a1, 0x38($s5)
    ctx->pc = 0x1d04ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1d04f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d04f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d04f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D04F4u;
    {
        const bool branch_taken_0x1d04f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04f4) {
            ctx->pc = 0x1D0508u;
            goto label_1d0508;
        }
    }
    ctx->pc = 0x1D04FCu;
    // 0x1d04fc: 0xc0749ee  jal         func_1D27B8
    ctx->pc = 0x1D04FCu;
    SET_GPR_U32(ctx, 31, 0x1D0504u);
    ctx->pc = 0x1D0500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04FCu;
    // 0x1d0500: 0x8ea4000c  lw          $a0, 0xC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27B8u, 0x1D04FCu, 0x1D0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0504u;
label_1d0504:
    // 0x1d0504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0508:
    // 0x1d0508: 0x5620ff03  bnel        $s1, $zero, . + 4 + (-0xFD << 2)
    ctx->pc = 0x1D0508u;
    {
        const bool branch_taken_0x1d0508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0508) {
            ctx->pc = 0x1D050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0508u;
            // 0x1d050c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0118;
        }
    }
    ctx->pc = 0x1D0510u;
    // 0x1d0510: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1d0510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d0514:
    // 0x1d0514: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1d0514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0518: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1d0518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d051c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1d051cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0520: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1d0520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d0524: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1d0524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0528: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1d0528u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d052c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1d052cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d0530: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1d0530u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d0534: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1d0534u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d0538: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x1d0538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d053c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D053Cu;
        // 0x1d0540: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0544u;
    // 0x1d0544: 0x0  nop
    ctx->pc = 0x1d0544u;
    // NOP
    ctx->pc = 0x1d0548u;
}
