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

// Function: sub_002701F0
// Address: 0x2701f0 - 0x270338
void sub_002701F0_0x2701f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002701F0_0x2701f0");
#endif

    switch (ctx->pc) {
        case 0x270258u: goto label_270258;
        case 0x2702a0u: goto label_2702a0;
        case 0x2702c8u: goto label_2702c8;
        case 0x2702dcu: goto label_2702dc;
        case 0x270308u: goto label_270308;
        case 0x270318u: goto label_270318;
        case 0x270320u: goto label_270320;
        default: break;
    }

    ctx->pc = 0x2701f0u;

    // 0x2701f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2701f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2701f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2701f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2701f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2701f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2701fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2701fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x270200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x270204: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x270204u;
    {
        const bool branch_taken_0x270204 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x270208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270204u;
        // 0x270208: 0x8e1100b8  lw          $s1, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270204) {
            ctx->pc = 0x27024Cu;
            goto label_27024c;
        }
    }
    ctx->pc = 0x27020Cu;
    // 0x27020c: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x27020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x270210: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x270210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270214: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x270214u;
    {
        const bool branch_taken_0x270214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270214u;
        // 0x270218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270214) {
            ctx->pc = 0x270324u;
            goto label_270324;
        }
    }
    ctx->pc = 0x27021Cu;
    // 0x27021c: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x27021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x270220: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x270220u;
    {
        const bool branch_taken_0x270220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270220u;
        // 0x270224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270220) {
            ctx->pc = 0x270324u;
            goto label_270324;
        }
    }
    ctx->pc = 0x270228u;
    // 0x270228: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x270228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x27022c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27022Cu;
    {
        const bool branch_taken_0x27022c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27022c) {
            ctx->pc = 0x270230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27022Cu;
            // 0x270230: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270250u;
            goto label_270250;
        }
    }
    ctx->pc = 0x270234u;
    // 0x270234: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x270234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270238: 0xc62001ac  lwc1        $f0, 0x1AC($s1)
    ctx->pc = 0x270238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27023c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27023cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270240: 0x0  nop
    ctx->pc = 0x270240u;
    // NOP
    // 0x270244: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x270244u;
    {
        const bool branch_taken_0x270244 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x270248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270244u;
        // 0x270248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270244) {
            ctx->pc = 0x270324u;
            goto label_270324;
        }
    }
    ctx->pc = 0x27024Cu;
label_27024c:
    // 0x27024c: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x27024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_270250:
    // 0x270250: 0xc08e3b2  jal         func_238EC8
    ctx->pc = 0x270250u;
    SET_GPR_U32(ctx, 31, 0x270258u);
    ctx->pc = 0x270254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270250u;
    // 0x270254: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x270250u, 0x270258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270258u;
label_270258:
    // 0x270258: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x270258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x27025c: 0x50800022  beql        $a0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x27025Cu;
    {
        const bool branch_taken_0x27025c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27025c) {
            ctx->pc = 0x270260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27025Cu;
            // 0x270260: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2702E8u;
            goto label_2702e8;
        }
    }
    ctx->pc = 0x270264u;
    // 0x270264: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x270264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x270268: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x270268u;
    {
        const bool branch_taken_0x270268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270268) {
            ctx->pc = 0x27026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270268u;
            // 0x27026c: 0x8e2201f8  lw          $v0, 0x1F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270280u;
            goto label_270280;
        }
    }
    ctx->pc = 0x270270u;
    // 0x270270: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x270270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x270274: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x270274u;
    {
        const bool branch_taken_0x270274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270274) {
            ctx->pc = 0x270278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270274u;
            // 0x270278: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2702E8u;
            goto label_2702e8;
        }
    }
    ctx->pc = 0x27027Cu;
    // 0x27027c: 0x8e2201f8  lw          $v0, 0x1F8($s1)
    ctx->pc = 0x27027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_270280:
    // 0x270280: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270280u;
    {
        const bool branch_taken_0x270280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270280u;
        // 0x270284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270280) {
            ctx->pc = 0x2702A8u;
            goto label_2702a8;
        }
    }
    ctx->pc = 0x270288u;
    // 0x270288: 0xc48c0024  lwc1        $f12, 0x24($a0)
    ctx->pc = 0x270288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27028c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27028cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x270290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270294: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x270294u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x270298: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x270298u;
    SET_GPR_U32(ctx, 31, 0x2702A0u);
    ctx->pc = 0x27029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270298u;
    // 0x27029c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x270298u, 0x2702A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702A0u;
label_2702a0:
    // 0x2702a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2702A0u;
    {
        const bool branch_taken_0x2702a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702A0u;
        // 0x2702a4: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702a0) {
            ctx->pc = 0x2702E8u;
            goto label_2702e8;
        }
    }
    ctx->pc = 0x2702A8u;
label_2702a8:
    // 0x2702a8: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x2702a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x2702ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2702ACu;
    {
        const bool branch_taken_0x2702ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702ACu;
        // 0x2702b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702ac) {
            ctx->pc = 0x2702D0u;
            goto label_2702d0;
        }
    }
    ctx->pc = 0x2702B4u;
    // 0x2702b4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2702B4u;
    {
        const bool branch_taken_0x2702b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2702b4) {
            ctx->pc = 0x2702D0u;
            goto label_2702d0;
        }
    }
    ctx->pc = 0x2702BCu;
    // 0x2702bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2702bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2702c0: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2702C0u;
    SET_GPR_U32(ctx, 31, 0x2702C8u);
    ctx->pc = 0x2702C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2702C0u;
    // 0x2702c4: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2702C0u, 0x2702C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702C8u;
label_2702c8:
    // 0x2702c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2702C8u;
    {
        const bool branch_taken_0x2702c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702C8u;
        // 0x2702cc: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702c8) {
            ctx->pc = 0x2702E0u;
            goto label_2702e0;
        }
    }
    ctx->pc = 0x2702D0u;
label_2702d0:
    // 0x2702d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2702d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2702d4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2702D4u;
    SET_GPR_U32(ctx, 31, 0x2702DCu);
    ctx->pc = 0x2702D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2702D4u;
    // 0x2702d8: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2702D4u, 0x2702DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702DCu;
label_2702dc:
    // 0x2702dc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x2702dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_2702e0:
    // 0x2702e0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2702e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2702e4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x2702e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_2702e8:
    // 0x2702e8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2702e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2702ec: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x2702ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x2702f0: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x2702f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2702f4: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2702F4u;
    {
        const bool branch_taken_0x2702f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2702f4) {
            ctx->pc = 0x2702F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2702F4u;
            // 0x2702f8: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27030Cu;
            goto label_27030c;
        }
    }
    ctx->pc = 0x2702FCu;
    // 0x2702fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2702fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270300: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x270300u;
    SET_GPR_U32(ctx, 31, 0x270308u);
    ctx->pc = 0x270304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270300u;
    // 0x270304: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x270300u, 0x270308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270308u;
label_270308:
    // 0x270308: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x270308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_27030c:
    // 0x27030c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270310: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x270310u;
    SET_GPR_U32(ctx, 31, 0x270318u);
    ctx->pc = 0x270314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270310u;
    // 0x270314: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x270310u, 0x270318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270318u;
label_270318:
    // 0x270318: 0xc09bf28  jal         func_26FCA0
    ctx->pc = 0x270318u;
    SET_GPR_U32(ctx, 31, 0x270320u);
    ctx->pc = 0x27031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270318u;
    // 0x27031c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x270318u, 0x270320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270320u;
label_270320:
    // 0x270320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270324:
    // 0x270324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x270328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27032c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270330: 0x3e00008  jr          $ra
    ctx->pc = 0x270330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270330u;
        // 0x270334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270338u;
}
