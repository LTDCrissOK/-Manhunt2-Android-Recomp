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

// Function: sub_002F57D8
// Address: 0x2f57d8 - 0x2f58b0
void sub_002F57D8_0x2f57d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F57D8_0x2f57d8");
#endif

    switch (ctx->pc) {
        case 0x2f5848u: goto label_2f5848;
        case 0x2f5860u: goto label_2f5860;
        case 0x2f5874u: goto label_2f5874;
        case 0x2f5888u: goto label_2f5888;
        default: break;
    }

    ctx->pc = 0x2f57d8u;

    // 0x2f57d8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2f57d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2f57dc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2f57dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2f57e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f57e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f57e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f57e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f57e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f57e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f57ec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2f57ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2f57f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f57f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f57f4: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x2f57f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
    // 0x2f57f8: 0x34219a02  ori         $at, $at, 0x9A02
    ctx->pc = 0x2f57f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39426);
    // 0x2f57fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f57fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5804: 0x460060a4  .word       0x460060A4                   # cvt.w.s     $f2, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f5808: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2f5808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f580c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2f5810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5814: 0xc6020374  lwc1        $f2, 0x374($s0)
    ctx->pc = 0x2f5814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5818: 0xc60311d4  lwc1        $f3, 0x11D4($s0)
    ctx->pc = 0x2f5818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f581c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2f5820: 0xae05121c  sw          $a1, 0x121C($s0)
    ctx->pc = 0x2f5820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 5));
    // 0x2f5824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5828: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f5828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2f582c: 0xe602124c  swc1        $f2, 0x124C($s0)
    ctx->pc = 0x2f582cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4684), bits); }
    // 0x2f5830: 0xe6031250  swc1        $f3, 0x1250($s0)
    ctx->pc = 0x2f5830u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4688), bits); }
    // 0x2f5834: 0xae031254  sw          $v1, 0x1254($s0)
    ctx->pc = 0x2f5834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4692), GPR_U32(ctx, 3));
    // 0x2f5838: 0xe60012ac  swc1        $f0, 0x12AC($s0)
    ctx->pc = 0x2f5838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4780), bits); }
    // 0x2f583c: 0xae051220  sw          $a1, 0x1220($s0)
    ctx->pc = 0x2f583cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4640), GPR_U32(ctx, 5));
    // 0x2f5840: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x2F5840u;
    SET_GPR_U32(ctx, 31, 0x2F5848u);
    ctx->pc = 0x2F5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5840u;
    // 0x2f5844: 0xae031258  sw          $v1, 0x1258($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F5840u, 0x2F5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5848u;
label_2f5848:
    // 0x2f5848: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F5848u;
    {
        const bool branch_taken_0x2f5848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5848u;
        // 0x2f584c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5848) {
            ctx->pc = 0x2F5898u;
            goto label_2f5898;
        }
    }
    ctx->pc = 0x2F5850u;
    // 0x2f5850: 0x8e05121c  lw          $a1, 0x121C($s0)
    ctx->pc = 0x2f5850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x2f5854: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5858: 0xc0bce40  jal         func_2F3900
    ctx->pc = 0x2F5858u;
    SET_GPR_U32(ctx, 31, 0x2F5860u);
    ctx->pc = 0x2F585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5858u;
    // 0x2f585c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3900u, 0x2F5858u, 0x2F5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5860u;
label_2f5860:
    // 0x2f5860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5860u;
    {
        const bool branch_taken_0x2f5860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5860u;
        // 0x2f5864: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5860) {
            ctx->pc = 0x2F587Cu;
            goto label_2f587c;
        }
    }
    ctx->pc = 0x2F5868u;
    // 0x2f5868: 0x8e04121c  lw          $a0, 0x121C($s0)
    ctx->pc = 0x2f5868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x2f586c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F586Cu;
    SET_GPR_U32(ctx, 31, 0x2F5874u);
    ctx->pc = 0x2F5870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F586Cu;
    // 0x2f5870: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F586Cu, 0x2F5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5874u;
label_2f5874:
    // 0x2f5874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5874u;
    {
        const bool branch_taken_0x2f5874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5874u;
        // 0x2f5878: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5874) {
            ctx->pc = 0x2F588Cu;
            goto label_2f588c;
        }
    }
    ctx->pc = 0x2F587Cu;
label_2f587c:
    // 0x2f587c: 0x8e04121c  lw          $a0, 0x121C($s0)
    ctx->pc = 0x2f587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x2f5880: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F5880u;
    SET_GPR_U32(ctx, 31, 0x2F5888u);
    ctx->pc = 0x2F5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5880u;
    // 0x2f5884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F5880u, 0x2F5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5888u;
label_2f5888:
    // 0x2f5888: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2f588c:
    // 0x2f588c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2f588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2f5890: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f5890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f5894: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f5894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
label_2f5898:
    // 0x2f5898: 0xae001248  sw          $zero, 0x1248($s0)
    ctx->pc = 0x2f5898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4680), GPR_U32(ctx, 0));
    // 0x2f589c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f589cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f58a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f58a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f58a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F58A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58A4u;
        // 0x2f58a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F58A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F58ACu;
    // 0x2f58ac: 0x0  nop
    ctx->pc = 0x2f58acu;
    // NOP
    ctx->pc = 0x2f58b0u;
}
