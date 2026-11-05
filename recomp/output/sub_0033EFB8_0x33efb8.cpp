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

// Function: sub_0033EFB8
// Address: 0x33efb8 - 0x33f118
void sub_0033EFB8_0x33efb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EFB8_0x33efb8");
#endif

    switch (ctx->pc) {
        case 0x33f000u: goto label_33f000;
        case 0x33f024u: goto label_33f024;
        case 0x33f03cu: goto label_33f03c;
        case 0x33f054u: goto label_33f054;
        case 0x33f06cu: goto label_33f06c;
        case 0x33f084u: goto label_33f084;
        case 0x33f09cu: goto label_33f09c;
        case 0x33f0b4u: goto label_33f0b4;
        case 0x33f0ccu: goto label_33f0cc;
        case 0x33f0e4u: goto label_33f0e4;
        default: break;
    }

    ctx->pc = 0x33efb8u;

    // 0x33efb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33efbc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33efc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33efc4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33efc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33efc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33efcc: 0x8c62c350  lw          $v0, -0x3CB0($v1)
    ctx->pc = 0x33efccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC350u));
    // 0x33efd0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x33efd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33efd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33efd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33efdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33efdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33efe0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33efe4: 0x18400043  blez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x33EFE4u;
    {
        const bool branch_taken_0x33efe4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFE4u;
        // 0x33efe8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33efe4) {
            ctx->pc = 0x33F0F4u;
            goto label_33f0f4;
        }
    }
    ctx->pc = 0x33EFECu;
    // 0x33efec: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33efecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x33eff0: 0x24526ff0  addiu       $s2, $v0, 0x6FF0
    ctx->pc = 0x33eff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28656));
    // 0x33eff4: 0x26540080  addiu       $s4, $s2, 0x80
    ctx->pc = 0x33eff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x33eff8: 0x241100e0  addiu       $s1, $zero, 0xE0
    ctx->pc = 0x33eff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33effc: 0x0  nop
    ctx->pc = 0x33effcu;
    // NOP
label_33f000:
    // 0x33f000: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x33f000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x33f004: 0x2718818  mult        $s1, $s3, $s1
    ctx->pc = 0x33f004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x33f008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f00c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33f00cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33f010: 0x2328021  addu        $s0, $s1, $s2
    ctx->pc = 0x33f010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x33f014: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x33f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x33f018: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x33f018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f01c: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F01Cu;
    SET_GPR_U32(ctx, 31, 0x33F024u);
    ctx->pc = 0x33F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F01Cu;
    // 0x33f020: 0xc60d0008  lwc1        $f13, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F01Cu, 0x33F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F024u;
label_33f024:
    // 0x33f024: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x33f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f028: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x33f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33f02c: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x33f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f030: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x33f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x33f034: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F034u;
    SET_GPR_U32(ctx, 31, 0x33F03Cu);
    ctx->pc = 0x33F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F034u;
    // 0x33f038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F034u, 0x33F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F03Cu;
label_33f03c:
    // 0x33f03c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x33f03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f040: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x33f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33f044: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x33f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f048: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x33f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x33f04c: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F04Cu;
    SET_GPR_U32(ctx, 31, 0x33F054u);
    ctx->pc = 0x33F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F04Cu;
    // 0x33f050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F04Cu, 0x33F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F054u;
label_33f054:
    // 0x33f054: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x33f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f058: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x33f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33f05c: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x33f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f060: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x33f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x33f064: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F064u;
    SET_GPR_U32(ctx, 31, 0x33F06Cu);
    ctx->pc = 0x33F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F064u;
    // 0x33f068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F064u, 0x33F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F06Cu;
label_33f06c:
    // 0x33f06c: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x33f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f070: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x33f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33f074: 0xc60d0048  lwc1        $f13, 0x48($s0)
    ctx->pc = 0x33f074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f078: 0x24840044  addiu       $a0, $a0, 0x44
    ctx->pc = 0x33f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x33f07c: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F07Cu;
    SET_GPR_U32(ctx, 31, 0x33F084u);
    ctx->pc = 0x33F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F07Cu;
    // 0x33f080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F07Cu, 0x33F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F084u;
label_33f084:
    // 0x33f084: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x33f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f088: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x33f088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33f08c: 0xc60d0058  lwc1        $f13, 0x58($s0)
    ctx->pc = 0x33f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f090: 0x24840054  addiu       $a0, $a0, 0x54
    ctx->pc = 0x33f090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x33f094: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F094u;
    SET_GPR_U32(ctx, 31, 0x33F09Cu);
    ctx->pc = 0x33F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F094u;
    // 0x33f098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F094u, 0x33F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F09Cu;
label_33f09c:
    // 0x33f09c: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x33f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f0a0: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x33f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33f0a4: 0xc60d0068  lwc1        $f13, 0x68($s0)
    ctx->pc = 0x33f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f0a8: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x33f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x33f0ac: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F0ACu;
    SET_GPR_U32(ctx, 31, 0x33F0B4u);
    ctx->pc = 0x33F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F0ACu;
    // 0x33f0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F0ACu, 0x33F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0B4u;
label_33f0b4:
    // 0x33f0b4: 0xc60c0070  lwc1        $f12, 0x70($s0)
    ctx->pc = 0x33f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f0b8: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x33f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33f0bc: 0xc60d0078  lwc1        $f13, 0x78($s0)
    ctx->pc = 0x33f0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f0c0: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x33f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x33f0c4: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F0C4u;
    SET_GPR_U32(ctx, 31, 0x33F0CCu);
    ctx->pc = 0x33F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F0C4u;
    // 0x33f0c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F0C4u, 0x33F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0CCu;
label_33f0cc:
    // 0x33f0cc: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x33f0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x33f0d0: 0xc60d0088  lwc1        $f13, 0x88($s0)
    ctx->pc = 0x33f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33f0d4: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x33f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33f0d8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x33f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33f0dc: 0xc0d0060  jal         func_340180
    ctx->pc = 0x33F0DCu;
    SET_GPR_U32(ctx, 31, 0x33F0E4u);
    ctx->pc = 0x33F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F0DCu;
    // 0x33f0e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340180u, 0x33F0DCu, 0x33F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0E4u;
label_33f0e4:
    // 0x33f0e4: 0x8ea3c350  lw          $v1, -0x3CB0($s5)
    ctx->pc = 0x33f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951760)));
    // 0x33f0e8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x33f0e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33f0ec: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x33F0ECu;
    {
        const bool branch_taken_0x33f0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0ECu;
        // 0x33f0f0: 0x241100e0  addiu       $s1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0ec) {
            ctx->pc = 0x33F000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f000;
        }
    }
    ctx->pc = 0x33F0F4u;
label_33f0f4:
    // 0x33f0f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f0f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f0f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f0fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33f0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f100: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33f100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f104: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33f104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f108: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33f108u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f10c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f110: 0x3e00008  jr          $ra
    ctx->pc = 0x33F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F110u;
        // 0x33f114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F118u;
}
