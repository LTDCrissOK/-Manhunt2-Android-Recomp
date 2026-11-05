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

// Function: sub_0034EF38
// Address: 0x34ef38 - 0x34fca0
void sub_0034EF38_0x34ef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EF38_0x34ef38");
#endif

    switch (ctx->pc) {
        case 0x34efdcu: goto label_34efdc;
        case 0x34f008u: goto label_34f008;
        case 0x34f078u: goto label_34f078;
        case 0x34f0c8u: goto label_34f0c8;
        case 0x34f0d4u: goto label_34f0d4;
        case 0x34f120u: goto label_34f120;
        case 0x34f144u: goto label_34f144;
        case 0x34f198u: goto label_34f198;
        case 0x34f1f4u: goto label_34f1f4;
        case 0x34f208u: goto label_34f208;
        case 0x34f2e8u: goto label_34f2e8;
        case 0x34f2f4u: goto label_34f2f4;
        case 0x34f328u: goto label_34f328;
        case 0x34f34cu: goto label_34f34c;
        case 0x34f3a0u: goto label_34f3a0;
        case 0x34f3a8u: goto label_34f3a8;
        case 0x34f444u: goto label_34f444;
        case 0x34f4a4u: goto label_34f4a4;
        case 0x34f4d0u: goto label_34f4d0;
        case 0x34f504u: goto label_34f504;
        case 0x34f54cu: goto label_34f54c;
        case 0x34f55cu: goto label_34f55c;
        case 0x34f56cu: goto label_34f56c;
        case 0x34f5b0u: goto label_34f5b0;
        case 0x34f618u: goto label_34f618;
        case 0x34f624u: goto label_34f624;
        case 0x34f7acu: goto label_34f7ac;
        case 0x34f800u: goto label_34f800;
        case 0x34f80cu: goto label_34f80c;
        case 0x34f82cu: goto label_34f82c;
        case 0x34f838u: goto label_34f838;
        case 0x34f8bcu: goto label_34f8bc;
        case 0x34f910u: goto label_34f910;
        case 0x34f994u: goto label_34f994;
        case 0x34f9fcu: goto label_34f9fc;
        case 0x34fa90u: goto label_34fa90;
        case 0x34fa98u: goto label_34fa98;
        case 0x34fb34u: goto label_34fb34;
        case 0x34fb8cu: goto label_34fb8c;
        case 0x34fbb8u: goto label_34fbb8;
        case 0x34fc24u: goto label_34fc24;
        case 0x34fc34u: goto label_34fc34;
        default: break;
    }

    ctx->pc = 0x34ef38u;

    // 0x34ef38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34ef3c: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x34ef3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x34ef40: 0x90432cfc  lbu         $v1, 0x2CFC($v0)
    ctx->pc = 0x34ef40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x482CFCu));
    // 0x34ef44: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x34ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x34ef48: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x34ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x34ef4c: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x34ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x34ef50: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x34ef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x34ef54: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x34ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x34ef58: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x34ef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x34ef5c: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x34ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x34ef60: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x34ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x34ef64: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x34ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x34ef68: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x34ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x34ef6c: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x34ef6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x34ef70: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x34ef70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x34ef74: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x34ef74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x34ef78: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x34ef78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x34ef7c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34EF7Cu;
    {
        const bool branch_taken_0x34ef7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF7Cu;
        // 0x34ef80: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef7c) {
            ctx->pc = 0x34EFA4u;
            goto label_34efa4;
        }
    }
    ctx->pc = 0x34EF84u;
    // 0x34ef84: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x34ef88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34ef8c: 0x8c822cf8  lw          $v0, 0x2CF8($a0)
    ctx->pc = 0x34ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CF8u));
    // 0x34ef90: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x34ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x34ef94: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x34ef94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ef98: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x34ef98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x34ef9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34EF9Cu;
    {
        const bool branch_taken_0x34ef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF9Cu;
        // 0x34efa0: 0xac822cf8  sw          $v0, 0x2CF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef9c) {
            ctx->pc = 0x34EFC4u;
            goto label_34efc4;
        }
    }
    ctx->pc = 0x34EFA4u;
label_34efa4:
    // 0x34efa4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x34efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x34efa8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34efac: 0x8ca22cf8  lw          $v0, 0x2CF8($a1)
    ctx->pc = 0x34efacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CF8u));
    // 0x34efb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x34efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34efb4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x34efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x34efb8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x34efb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34efbc: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x34efbcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x34efc0: 0xaca42cf8  sw          $a0, 0x2CF8($a1)
    ctx->pc = 0x34efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11512), GPR_U32(ctx, 4));
label_34efc4:
    // 0x34efc4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34efc8: 0x8c622cf8  lw          $v0, 0x2CF8($v1)
    ctx->pc = 0x34efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CF8u));
    // 0x34efcc: 0x10400323  beqz        $v0, . + 4 + (0x323 << 2)
    ctx->pc = 0x34EFCCu;
    {
        const bool branch_taken_0x34efcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFCCu;
        // 0x34efd0: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efcc) {
            ctx->pc = 0x34FC5Cu;
            goto label_34fc5c;
        }
    }
    ctx->pc = 0x34EFD4u;
    // 0x34efd4: 0xc0a0344  jal         func_280D10
    ctx->pc = 0x34EFD4u;
    SET_GPR_U32(ctx, 31, 0x34EFDCu);
    ctx->pc = 0x34EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EFD4u;
    // 0x34efd8: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D10u, 0x34EFD4u, 0x34EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EFDCu;
label_34efdc:
    // 0x34efdc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34EFDCu;
    {
        const bool branch_taken_0x34efdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFDCu;
        // 0x34efe0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efdc) {
            ctx->pc = 0x34EFFCu;
            goto label_34effc;
        }
    }
    ctx->pc = 0x34EFE4u;
    // 0x34efe4: 0x92022cfd  lbu         $v0, 0x2CFD($s0)
    ctx->pc = 0x34efe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11517)));
    // 0x34efe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EFE8u;
    {
        const bool branch_taken_0x34efe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFE8u;
        // 0x34efec: 0x2413001e  addiu       $s3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efe8) {
            ctx->pc = 0x34EFF8u;
            goto label_34eff8;
        }
    }
    ctx->pc = 0x34EFF0u;
    // 0x34eff0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34EFF0u;
    {
        const bool branch_taken_0x34eff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFF0u;
        // 0x34eff4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eff0) {
            ctx->pc = 0x34F000u;
            goto label_34f000;
        }
    }
    ctx->pc = 0x34EFF8u;
label_34eff8:
    // 0x34eff8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x34eff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34effc:
    // 0x34effc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x34effcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f000:
    // 0x34f000: 0xc0a0344  jal         func_280D10
    ctx->pc = 0x34F000u;
    SET_GPR_U32(ctx, 31, 0x34F008u);
    ctx->pc = 0x280D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D10u, 0x34F000u, 0x34F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F008u;
label_34f008:
    // 0x34f008: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34f008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x34f00c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34f00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34f010: 0x8c832b44  lw          $v1, 0x2B44($a0)
    ctx->pc = 0x34f010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11076)));
    // 0x34f014: 0xa2022cfd  sb          $v0, 0x2CFD($s0)
    ctx->pc = 0x34f014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11517), (uint8_t)GPR_U32(ctx, 2));
    // 0x34f018: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x34f018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x34f01c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x34f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34f020: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34f020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34f024: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F024u;
    {
        const bool branch_taken_0x34f024 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F024u;
        // 0x34f028: 0x29040  sll         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f024) {
            ctx->pc = 0x34F034u;
            goto label_34f034;
        }
    }
    ctx->pc = 0x34F02Cu;
    // 0x34f02c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34f02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f030: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34f034:
    // 0x34f034: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x34f034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f038: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x34f038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x34f03c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x34F03Cu;
    {
        const bool branch_taken_0x34f03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F03Cu;
        // 0x34f040: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f03c) {
            ctx->pc = 0x34F0ECu;
            goto label_34f0ec;
        }
    }
    ctx->pc = 0x34F044u;
    // 0x34f044: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34f044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x34f048: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x34f048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34f04c: 0x2463e148  addiu       $v1, $v1, -0x1EB8
    ctx->pc = 0x34f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959432));
    // 0x34f050: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x34f050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x34f054: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x34f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34f058: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x34f058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x34f05c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34f05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34f060: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x34f060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34f064: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x34f064u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f068: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x34f068u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x34f06c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x34f06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34f070: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x34f070u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x34f074: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x34f074u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
label_34f078:
    // 0x34f078: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x34f078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x34f07c: 0x14570016  bne         $v0, $s7, . + 4 + (0x16 << 2)
    ctx->pc = 0x34F07Cu;
    {
        const bool branch_taken_0x34f07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x34F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F07Cu;
        // 0x34f080: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f07c) {
            ctx->pc = 0x34F0D8u;
            goto label_34f0d8;
        }
    }
    ctx->pc = 0x34F084u;
    // 0x34f084: 0x8ec2bd48  lw          $v0, -0x42B8($s6)
    ctx->pc = 0x34f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950216)));
    // 0x34f088: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f08c: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x34f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x34f090: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x34f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f094: 0xc4620078  lwc1        $f2, 0x78($v1)
    ctx->pc = 0x34f094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f098: 0xc4630070  lwc1        $f3, 0x70($v1)
    ctx->pc = 0x34f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34f09c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34f09cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x34f0a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x34f0a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x34f0a4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34f0a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34f0a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34f0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34f0ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f0b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x34f0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f0b4: 0x0  nop
    ctx->pc = 0x34f0b4u;
    // NOP
    // 0x34f0b8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34F0B8u;
    {
        const bool branch_taken_0x34f0b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0B8u;
        // 0x34f0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0b8) {
            ctx->pc = 0x34F0D4u;
            goto label_34f0d4;
        }
    }
    ctx->pc = 0x34F0C0u;
    // 0x34f0c0: 0xc0d40be  jal         func_3502F8
    ctx->pc = 0x34F0C0u;
    SET_GPR_U32(ctx, 31, 0x34F0C8u);
    ctx->pc = 0x34F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F0C0u;
    // 0x34f0c4: 0xa2000024  sb          $zero, 0x24($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502F8u, 0x34F0C0u, 0x34F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F0C8u;
label_34f0c8:
    // 0x34f0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f0cc: 0xc0d40b6  jal         func_3502D8
    ctx->pc = 0x34F0CCu;
    SET_GPR_U32(ctx, 31, 0x34F0D4u);
    ctx->pc = 0x34F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F0CCu;
    // 0x34f0d0: 0x26a5ec20  addiu       $a1, $s5, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502D8u, 0x34F0CCu, 0x34F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F0D4u;
label_34f0d4:
    // 0x34f0d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34f0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f0d8:
    // 0x34f0d8: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x34f0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x34f0dc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x34f0dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x34f0e0: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x34f0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x34f0e4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x34F0E4u;
    {
        const bool branch_taken_0x34f0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0E4u;
        // 0x34f0e8: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0e4) {
            ctx->pc = 0x34F078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f078;
        }
    }
    ctx->pc = 0x34F0ECu;
label_34f0ec:
    // 0x34f0ec: 0x12600122  beqz        $s3, . + 4 + (0x122 << 2)
    ctx->pc = 0x34F0ECu;
    {
        const bool branch_taken_0x34f0ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0ECu;
        // 0x34f0f0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0ec) {
            ctx->pc = 0x34F578u;
            goto label_34f578;
        }
    }
    ctx->pc = 0x34F0F4u;
    // 0x34f0f4: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x34f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x34f0f8: 0x2456ec20  addiu       $s6, $v0, -0x13E0
    ctx->pc = 0x34f0f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962208));
    // 0x34f0fc: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x34f0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f100: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34f104: 0x3c013cc8  lui         $at, 0x3CC8
    ctx->pc = 0x34f104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15560 << 16));
    // 0x34f108: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34f108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34f10c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x34f10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x34f110: 0x24757ee0  addiu       $s5, $v1, 0x7EE0
    ctx->pc = 0x34f110u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x34f114: 0x2454ebc8  addiu       $s4, $v0, -0x1438
    ctx->pc = 0x34f114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962120));
    // 0x34f118: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x34f118u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x34f11c: 0x8ed1004c  lw          $s1, 0x4C($s6)
    ctx->pc = 0x34f11cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
label_34f120:
    // 0x34f120: 0x12340112  beq         $s1, $s4, . + 4 + (0x112 << 2)
    ctx->pc = 0x34F120u;
    {
        const bool branch_taken_0x34f120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x34F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F120u;
        // 0x34f124: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f120) {
            ctx->pc = 0x34F56Cu;
            goto label_34f56c;
        }
    }
    ctx->pc = 0x34F128u;
    // 0x34f128: 0x8c822cf8  lw          $v0, 0x2CF8($a0)
    ctx->pc = 0x34f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11512)));
    // 0x34f12c: 0x50400110  beql        $v0, $zero, . + 4 + (0x110 << 2)
    ctx->pc = 0x34F12Cu;
    {
        const bool branch_taken_0x34f12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f12c) {
            ctx->pc = 0x34F130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F12Cu;
            // 0x34f130: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F570u;
            goto label_34f570;
        }
    }
    ctx->pc = 0x34F134u;
    // 0x34f134: 0x13c00016  beqz        $fp, . + 4 + (0x16 << 2)
    ctx->pc = 0x34F134u;
    {
        const bool branch_taken_0x34f134 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f134) {
            ctx->pc = 0x34F190u;
            goto label_34f190;
        }
    }
    ctx->pc = 0x34F13Cu;
    // 0x34f13c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34F13Cu;
    SET_GPR_U32(ctx, 31, 0x34F144u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34F13Cu, 0x34F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F144u;
label_34f144:
    // 0x34f144: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34f144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f148: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F148u;
    {
        const bool branch_taken_0x34f148 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F148u;
        // 0x34f14c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f148) {
            ctx->pc = 0x34F164u;
            goto label_34f164;
        }
    }
    ctx->pc = 0x34F150u;
    // 0x34f150: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34f150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f154: 0x0  nop
    ctx->pc = 0x34f154u;
    // NOP
    // 0x34f158: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34f158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34f15c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F15Cu;
    {
        const bool branch_taken_0x34f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f15c) {
            ctx->pc = 0x34F17Cu;
            goto label_34f17c;
        }
    }
    ctx->pc = 0x34F164u;
label_34f164:
    // 0x34f164: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34f164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34f168: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34f16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f170: 0x0  nop
    ctx->pc = 0x34f170u;
    // NOP
    // 0x34f174: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34f174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34f178: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34f178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34f17c:
    // 0x34f17c: 0x3c013da0  lui         $at, 0x3DA0
    ctx->pc = 0x34f17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15776 << 16));
    // 0x34f180: 0x3421a0a1  ori         $at, $at, 0xA0A1
    ctx->pc = 0x34f180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41121);
    // 0x34f184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f188: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x34F188u;
    {
        const bool branch_taken_0x34f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F188u;
        // 0x34f18c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f188) {
            ctx->pc = 0x34F1ECu;
            goto label_34f1ec;
        }
    }
    ctx->pc = 0x34F190u;
label_34f190:
    // 0x34f190: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34F190u;
    SET_GPR_U32(ctx, 31, 0x34F198u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34F190u, 0x34F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F198u;
label_34f198:
    // 0x34f198: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f19c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F19Cu;
    {
        const bool branch_taken_0x34f19c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F19Cu;
        // 0x34f1a0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f19c) {
            ctx->pc = 0x34F1B8u;
            goto label_34f1b8;
        }
    }
    ctx->pc = 0x34F1A4u;
    // 0x34f1a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34f1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34f1a8: 0x0  nop
    ctx->pc = 0x34f1a8u;
    // NOP
    // 0x34f1ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34f1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34f1b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F1B0u;
    {
        const bool branch_taken_0x34f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f1b0) {
            ctx->pc = 0x34F1D0u;
            goto label_34f1d0;
        }
    }
    ctx->pc = 0x34F1B8u;
label_34f1b8:
    // 0x34f1b8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34f1bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f1c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34f1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34f1c4: 0x0  nop
    ctx->pc = 0x34f1c4u;
    // NOP
    // 0x34f1c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34f1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34f1cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34f1ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_34f1d0:
    // 0x34f1d0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x34f1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x34f1d4: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x34f1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x34f1d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f1dc: 0x3c014198  lui         $at, 0x4198
    ctx->pc = 0x34f1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16792 << 16));
    // 0x34f1e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34f1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f1e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34f1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34f1e8: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x34f1e8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f1ec:
    // 0x34f1ec: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34F1ECu;
    SET_GPR_U32(ctx, 31, 0x34F1F4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34F1ECu, 0x34F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1F4u;
label_34f1f4:
    // 0x34f1f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34f1f8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x34F1F8u;
    {
        const bool branch_taken_0x34f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1F8u;
        // 0x34f1fc: 0x8e62bd48  lw          $v0, -0x42B8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f1f8) {
            ctx->pc = 0x34F248u;
            goto label_34f248;
        }
    }
    ctx->pc = 0x34F200u;
    // 0x34f200: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34F200u;
    SET_GPR_U32(ctx, 31, 0x34F208u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34F200u, 0x34F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F208u;
label_34f208:
    // 0x34f208: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34f208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f20c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F20Cu;
    {
        const bool branch_taken_0x34f20c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F20Cu;
        // 0x34f210: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f20c) {
            ctx->pc = 0x34F228u;
            goto label_34f228;
        }
    }
    ctx->pc = 0x34F214u;
    // 0x34f214: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34f214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f218: 0x0  nop
    ctx->pc = 0x34f218u;
    // NOP
    // 0x34f21c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34f21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34f220: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x34F220u;
    {
        const bool branch_taken_0x34f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F220u;
        // 0x34f224: 0x46166502  mul.s       $f20, $f12, $f22 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f220) {
            ctx->pc = 0x34F318u;
            goto label_34f318;
        }
    }
    ctx->pc = 0x34F228u;
label_34f228:
    // 0x34f228: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34f228u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34f22c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34f230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f234: 0x0  nop
    ctx->pc = 0x34f234u;
    // NOP
    // 0x34f238: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34f238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34f23c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x34f23cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x34f240: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x34F240u;
    {
        const bool branch_taken_0x34f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F240u;
        // 0x34f244: 0x46166502  mul.s       $f20, $f12, $f22 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f240) {
            ctx->pc = 0x34F318u;
            goto label_34f318;
        }
    }
    ctx->pc = 0x34F248u;
label_34f248:
    // 0x34f248: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x34f248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x34f24c: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x34f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f250: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x34f250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x34f254: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x34f254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34f258: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x34f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f25c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34f25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34f260: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x34f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f264: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x34f264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34f268: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x34f268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f26c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x34f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x34f270: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x34f270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34f274: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x34f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f278: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x34f278u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f27c: 0x0  nop
    ctx->pc = 0x34f27cu;
    // NOP
    // 0x34f280: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34F280u;
    {
        const bool branch_taken_0x34f280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f280) {
            ctx->pc = 0x34F29Cu;
            goto label_34f29c;
        }
    }
    ctx->pc = 0x34F288u;
    // 0x34f288: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x34f288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x34f28c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x34f28cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x34f290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f294: 0x0  nop
    ctx->pc = 0x34f294u;
    // NOP
    // 0x34f298: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34f298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34f29c:
    // 0x34f29c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34f29cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f2a0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x34f2a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f2a4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34f2a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f2a8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34f2a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34f2ac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34f2acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34f2b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x34f2b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34f2b4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x34f2b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f2b8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f2bc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x34f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f2c0: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x34f2c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f2c4: 0x0  nop
    ctx->pc = 0x34f2c4u;
    // NOP
    // 0x34f2c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34F2C8u;
    {
        const bool branch_taken_0x34f2c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2C8u;
        // 0x34f2cc: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2c8) {
            ctx->pc = 0x34F2E0u;
            goto label_34f2e0;
        }
    }
    ctx->pc = 0x34F2D0u;
    // 0x34f2d0: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x34f2d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f2d4: 0x0  nop
    ctx->pc = 0x34f2d4u;
    // NOP
    // 0x34f2d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34F2D8u;
    {
        const bool branch_taken_0x34f2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2D8u;
        // 0x34f2dc: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2d8) {
            ctx->pc = 0x34F2ECu;
            goto label_34f2ec;
        }
    }
    ctx->pc = 0x34F2E0u;
label_34f2e0:
    // 0x34f2e0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x34F2E0u;
    SET_GPR_U32(ctx, 31, 0x34F2E8u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x34F2E0u, 0x34F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2E8u;
label_34f2e8:
    // 0x34f2e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34f2e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_34f2ec:
    // 0x34f2ec: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34F2ECu;
    SET_GPR_U32(ctx, 31, 0x34F2F4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34F2ECu, 0x34F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2F4u;
label_34f2f4:
    // 0x34f2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f2f8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x34f2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x34f2fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34f2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f300: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34f300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34f304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f308: 0x0  nop
    ctx->pc = 0x34f308u;
    // NOP
    // 0x34f30c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f310: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34f310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34f314: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x34f314u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_34f318:
    // 0x34f318: 0x8e62bd48  lw          $v0, -0x42B8($s3)
    ctx->pc = 0x34f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x34f31c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34f31cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34f320: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34F320u;
    SET_GPR_U32(ctx, 31, 0x34F328u);
    ctx->pc = 0x34F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F320u;
    // 0x34f324: 0x8c500100  lw          $s0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34F320u, 0x34F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F328u;
label_34f328:
    // 0x34f328: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34f328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34f32c: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x34f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f330: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34f330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34f334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34f334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f338: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x34f338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34f33c: 0x8e62bd48  lw          $v0, -0x42B8($s3)
    ctx->pc = 0x34f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x34f340: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x34f340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x34f344: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34F344u;
    SET_GPR_U32(ctx, 31, 0x34F34Cu);
    ctx->pc = 0x34F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F344u;
    // 0x34f348: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34F344u, 0x34F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F34Cu;
label_34f34c:
    // 0x34f34c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34f34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34f350: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x34f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f354: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x34f354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x34f358: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34f358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34f35c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34f360: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x34f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34f364: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34f364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f368: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x34f368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x34f36c: 0x8e62bd48  lw          $v0, -0x42B8($s3)
    ctx->pc = 0x34f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x34f370: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x34f370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x34f374: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x34f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f378: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x34f378u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34f37c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x34f37cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34f380: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x34f380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34f384: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x34f384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34f388: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34f388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34f38c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x34f38cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34f390: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x34f390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34f394: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x34f394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x34f398: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34F398u;
    SET_GPR_U32(ctx, 31, 0x34F3A0u);
    ctx->pc = 0x34F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F398u;
    // 0x34f39c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34F398u, 0x34F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3A0u;
label_34f3a0:
    // 0x34f3a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34F3A0u;
    SET_GPR_U32(ctx, 31, 0x34F3A8u);
    ctx->pc = 0x34F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F3A0u;
    // 0x34f3a4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34F3A0u, 0x34F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3A8u;
label_34f3a8:
    // 0x34f3a8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34f3a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f3ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34f3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34f3b0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34f3b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f3b4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34f3b8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34f3bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34f3c0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34f3c4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34f3c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34f3c8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34f3c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34f3cc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34f3ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f3d0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34f3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34f3d4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x34f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f3d8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x34f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34f3dc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x34f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34f3e0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34f3e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34f3e4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34f3e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34f3e8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34f3e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34f3ec: 0x0  nop
    ctx->pc = 0x34f3ecu;
    // NOP
    // 0x34f3f0: 0x0  nop
    ctx->pc = 0x34f3f0u;
    // NOP
    // 0x34f3f4: 0x46010084  c1          0x10084
    ctx->pc = 0x34f3f4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x34f3f8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x34f3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x34f3fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f400: 0x0  nop
    ctx->pc = 0x34f400u;
    // NOP
    // 0x34f404: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34f404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f408: 0x0  nop
    ctx->pc = 0x34f408u;
    // NOP
    // 0x34f40c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34F40Cu;
    {
        const bool branch_taken_0x34f40c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F40Cu;
        // 0x34f410: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f40c) {
            ctx->pc = 0x34F438u;
            goto label_34f438;
        }
    }
    ctx->pc = 0x34F414u;
    // 0x34f414: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f41c: 0x0  nop
    ctx->pc = 0x34f41cu;
    // NOP
    // 0x34f420: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34f420u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34f424: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34f424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34f428: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34f428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34f42c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34f42cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34f430: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34f430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34f434: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x34f434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_34f438:
    // 0x34f438: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x34f438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34f43c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x34F43Cu;
    SET_GPR_U32(ctx, 31, 0x34F444u);
    ctx->pc = 0x34F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F43Cu;
    // 0x34f440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x34F43Cu, 0x34F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F444u;
label_34f444:
    // 0x34f444: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x34f444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x34f448: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x34f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x34f44c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x34f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x34f450: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x34f450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x34f454: 0xc440669c  lwc1        $f0, 0x669C($v0)
    ctx->pc = 0x34f454u;
    { uint32_t bits = FAST_READ32(0x47669Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f458: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34f458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34f45c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x34f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x34f460: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34f464: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x34f464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34f468: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34f468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f46c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x34f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x34f470: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x34f470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34f474: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x34f474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x34f478: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x34f478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x34f47c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x34f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x34f480: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x34f480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x34f484: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x34f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x34f488: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34f488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34f48c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f490: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x34f490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x34f494: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x34f494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34f498: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x34f498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x34f49c: 0xc077824  jal         func_1DE090
    ctx->pc = 0x34F49Cu;
    SET_GPR_U32(ctx, 31, 0x34F4A4u);
    ctx->pc = 0x34F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F49Cu;
    // 0x34f4a0: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x34F49Cu, 0x34F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F4A4u;
label_34f4a4:
    // 0x34f4a4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x34F4A4u;
    {
        const bool branch_taken_0x34f4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F4A4u;
        // 0x34f4a8: 0xc7a10094  lwc1        $f1, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f4a4) {
            ctx->pc = 0x34F56Cu;
            goto label_34f56c;
        }
    }
    ctx->pc = 0x34F4ACu;
    // 0x34f4ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34f4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34f4b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4b4: 0x0  nop
    ctx->pc = 0x34f4b4u;
    // NOP
    // 0x34f4b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34f4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f4bc: 0x0  nop
    ctx->pc = 0x34f4bcu;
    // NOP
    // 0x34f4c0: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x34F4C0u;
    {
        const bool branch_taken_0x34f4c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f4c0) {
            ctx->pc = 0x34F4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F4C0u;
            // 0x34f4c4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F570u;
            goto label_34f570;
        }
    }
    ctx->pc = 0x34F4C8u;
    // 0x34f4c8: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x34F4C8u;
    SET_GPR_U32(ctx, 31, 0x34F4D0u);
    ctx->pc = 0x34F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F4C8u;
    // 0x34f4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x34F4C8u, 0x34F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F4D0u;
label_34f4d0:
    // 0x34f4d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34f4d4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x34f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34f4d8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x34f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x34f4dc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x34f4dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f4e0: 0x10640022  beq         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x34F4E0u;
    {
        const bool branch_taken_0x34f4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x34F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F4E0u;
        // 0x34f4e4: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f4e0) {
            ctx->pc = 0x34F56Cu;
            goto label_34f56c;
        }
    }
    ctx->pc = 0x34F4E8u;
    // 0x34f4e8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34f4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34f4ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34f4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34f4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34f4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f4f4: 0x0  nop
    ctx->pc = 0x34f4f4u;
    // NOP
    // 0x34f4f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f4f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f4fc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34F4FCu;
    SET_GPR_U32(ctx, 31, 0x34F504u);
    ctx->pc = 0x34F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F4FCu;
    // 0x34f500: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34F4FCu, 0x34F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F504u;
label_34f504:
    // 0x34f504: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34f504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f508: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F508u;
    {
        const bool branch_taken_0x34f508 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F508u;
        // 0x34f50c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f508) {
            ctx->pc = 0x34F524u;
            goto label_34f524;
        }
    }
    ctx->pc = 0x34F510u;
    // 0x34f510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f514: 0x0  nop
    ctx->pc = 0x34f514u;
    // NOP
    // 0x34f518: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f51c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34F51Cu;
    {
        const bool branch_taken_0x34f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F51Cu;
        // 0x34f520: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f51c) {
            ctx->pc = 0x34F540u;
            goto label_34f540;
        }
    }
    ctx->pc = 0x34F524u;
label_34f524:
    // 0x34f524: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34f524u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34f528: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f530: 0x0  nop
    ctx->pc = 0x34f530u;
    // NOP
    // 0x34f534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f538: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f53c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x34f53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_34f540:
    // 0x34f540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f544: 0xc0d3b80  jal         func_34EE00
    ctx->pc = 0x34F544u;
    SET_GPR_U32(ctx, 31, 0x34F54Cu);
    ctx->pc = 0x34F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F544u;
    // 0x34f548: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EE00u, 0x34F544u, 0x34F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F54Cu;
label_34f54c:
    // 0x34f54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f554: 0xc0d40be  jal         func_3502F8
    ctx->pc = 0x34F554u;
    SET_GPR_U32(ctx, 31, 0x34F55Cu);
    ctx->pc = 0x34F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F554u;
    // 0x34f558: 0xa2220024  sb          $v0, 0x24($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502F8u, 0x34F554u, 0x34F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F55Cu;
label_34f55c:
    // 0x34f55c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x34f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x34f560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f564: 0xc0d40b6  jal         func_3502D8
    ctx->pc = 0x34F564u;
    SET_GPR_U32(ctx, 31, 0x34F56Cu);
    ctx->pc = 0x34F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F564u;
    // 0x34f568: 0x24a5ec78  addiu       $a1, $a1, -0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502D8u, 0x34F564u, 0x34F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F56Cu;
label_34f56c:
    // 0x34f56c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x34f56cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_34f570:
    // 0x34f570: 0x5640feeb  bnel        $s2, $zero, . + 4 + (-0x115 << 2)
    ctx->pc = 0x34F570u;
    {
        const bool branch_taken_0x34f570 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f570) {
            ctx->pc = 0x34F574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F570u;
            // 0x34f574: 0x8ed1004c  lw          $s1, 0x4C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f120;
        }
    }
    ctx->pc = 0x34F578u;
label_34f578:
    // 0x34f578: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34f578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x34f57c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x34f57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x34f580: 0x2462ed28  addiu       $v0, $v1, -0x12D8
    ctx->pc = 0x34f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962472));
    // 0x34f584: 0x8c51004c  lw          $s1, 0x4C($v0)
    ctx->pc = 0x34f584u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x6BED74u));
    // 0x34f588: 0x2483ed80  addiu       $v1, $a0, -0x1280
    ctx->pc = 0x34f588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
    // 0x34f58c: 0x122300d0  beq         $s1, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x34F58Cu;
    {
        const bool branch_taken_0x34f58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F58Cu;
        // 0x34f590: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f58c) {
            ctx->pc = 0x34F8D0u;
            goto label_34f8d0;
        }
    }
    ctx->pc = 0x34F594u;
    // 0x34f594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34f594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34f598: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x34f598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x34f59c: 0x2452c6c0  addiu       $s2, $v0, -0x3940
    ctx->pc = 0x34f59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
    // 0x34f5a0: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x34f5a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x34f5a4: 0x26530044  addiu       $s3, $s2, 0x44
    ctx->pc = 0x34f5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x34f5a8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34f5ac: 0x0  nop
    ctx->pc = 0x34f5acu;
    // NOP
label_34f5b0:
    // 0x34f5b0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x34f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x34f5b4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x34f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34f5b8: 0x8c642b00  lw          $a0, 0x2B00($v1)
    ctx->pc = 0x34f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
    // 0x34f5bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34f5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f5c0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x34f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34f5c4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x34f5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34f5c8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x34F5C8u;
    {
        const bool branch_taken_0x34f5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5C8u;
        // 0x34f5cc: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5c8) {
            ctx->pc = 0x34F62Cu;
            goto label_34f62c;
        }
    }
    ctx->pc = 0x34F5D0u;
    // 0x34f5d0: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x34f5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34f5d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f5d8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x34f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f5e0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x34f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f5e4: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x34f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f5e8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x34f5e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x34f5ec: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x34f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34f5f0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34f5f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x34f5f4: 0x92220049  lbu         $v0, 0x49($s1)
    ctx->pc = 0x34f5f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x34f5f8: 0xa2200025  sb          $zero, 0x25($s1)
    ctx->pc = 0x34f5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f5fc: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x34f5fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34f600: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x34f600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x34f604: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x34f604u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x34f608: 0xa2230024  sb          $v1, 0x24($s1)
    ctx->pc = 0x34f608u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f60c: 0xa2220048  sb          $v0, 0x48($s1)
    ctx->pc = 0x34f60cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x34f610: 0xc0d40be  jal         func_3502F8
    ctx->pc = 0x34F610u;
    SET_GPR_U32(ctx, 31, 0x34F618u);
    ctx->pc = 0x34F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F610u;
    // 0x34f614: 0x8e30004c  lw          $s0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502F8u, 0x34F610u, 0x34F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F618u;
label_34f618:
    // 0x34f618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f61c: 0xc0d40b6  jal         func_3502D8
    ctx->pc = 0x34F61Cu;
    SET_GPR_U32(ctx, 31, 0x34F624u);
    ctx->pc = 0x34F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F61Cu;
    // 0x34f620: 0x2685ec78  addiu       $a1, $s4, -0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502D8u, 0x34F61Cu, 0x34F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F624u;
label_34f624:
    // 0x34f624: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x34F624u;
    {
        const bool branch_taken_0x34f624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F624u;
        // 0x34f628: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f624) {
            ctx->pc = 0x34F8C0u;
            goto label_34f8c0;
        }
    }
    ctx->pc = 0x34F62Cu;
label_34f62c:
    // 0x34f62c: 0x63902  srl         $a3, $a2, 4
    ctx->pc = 0x34f62cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x34f630: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x34f630u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x34f634: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34F634u;
    {
        const bool branch_taken_0x34f634 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f634) {
            ctx->pc = 0x34F638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F634u;
            // 0x34f638: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F63Cu;
            goto label_34f63c;
        }
    }
    ctx->pc = 0x34F63Cu;
label_34f63c:
    // 0x34f63c: 0x1012  mflo        $v0
    ctx->pc = 0x34f63cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x34f640: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x34f640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x34f644: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x34f644u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x34f648: 0xa71818  mult        $v1, $a1, $a3
    ctx->pc = 0x34f648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34f64c: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x34f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34f650: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F650u;
    {
        const bool branch_taken_0x34f650 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F650u;
        // 0x34f654: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f650) {
            ctx->pc = 0x34F66Cu;
            goto label_34f66c;
        }
    }
    ctx->pc = 0x34F658u;
    // 0x34f658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34f658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f65c: 0x0  nop
    ctx->pc = 0x34f65cu;
    // NOP
    // 0x34f660: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34f660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34f664: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F664u;
    {
        const bool branch_taken_0x34f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f664) {
            ctx->pc = 0x34F684u;
            goto label_34f684;
        }
    }
    ctx->pc = 0x34F66Cu;
label_34f66c:
    // 0x34f66c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34f670: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34f674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34f678: 0x0  nop
    ctx->pc = 0x34f678u;
    // NOP
    // 0x34f67c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34f67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34f680: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34f680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34f684:
    // 0x34f684: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x34f684u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f688: 0x0  nop
    ctx->pc = 0x34f688u;
    // NOP
    // 0x34f68c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34f690: 0x46000a43  div.s       $f9, $f1, $f0
    ctx->pc = 0x34f690u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x34f694: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F694u;
    {
        const bool branch_taken_0x34f694 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x34F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F694u;
        // 0x34f698: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f694) {
            ctx->pc = 0x34F6B0u;
            goto label_34f6b0;
        }
    }
    ctx->pc = 0x34F69Cu;
    // 0x34f69c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x34f69cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f6a0: 0x0  nop
    ctx->pc = 0x34f6a0u;
    // NOP
    // 0x34f6a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34f6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34f6a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F6A8u;
    {
        const bool branch_taken_0x34f6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f6a8) {
            ctx->pc = 0x34F6C8u;
            goto label_34f6c8;
        }
    }
    ctx->pc = 0x34F6B0u;
label_34f6b0:
    // 0x34f6b0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34f6b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f6b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34f6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f6bc: 0x0  nop
    ctx->pc = 0x34f6bcu;
    // NOP
    // 0x34f6c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34f6c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34f6c4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x34f6c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_34f6c8:
    // 0x34f6c8: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F6C8u;
    {
        const bool branch_taken_0x34f6c8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x34F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6C8u;
        // 0x34f6cc: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6c8) {
            ctx->pc = 0x34F6E4u;
            goto label_34f6e4;
        }
    }
    ctx->pc = 0x34F6D0u;
    // 0x34f6d0: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x34f6d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34f6d4: 0x0  nop
    ctx->pc = 0x34f6d4u;
    // NOP
    // 0x34f6d8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x34f6d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x34f6dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34F6DCu;
    {
        const bool branch_taken_0x34f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6DCu;
        // 0x34f6e0: 0x92240025  lbu         $a0, 0x25($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6dc) {
            ctx->pc = 0x34F700u;
            goto label_34f700;
        }
    }
    ctx->pc = 0x34F6E4u;
label_34f6e4:
    // 0x34f6e4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x34f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x34f6e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34f6ec: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x34f6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x34f6f0: 0x0  nop
    ctx->pc = 0x34f6f0u;
    // NOP
    // 0x34f6f4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x34f6f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x34f6f8: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x34f6f8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x34f6fc: 0x92240025  lbu         $a0, 0x25($s1)
    ctx->pc = 0x34f6fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
label_34f700:
    // 0x34f700: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x34f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x34f704: 0x0  nop
    ctx->pc = 0x34f704u;
    // NOP
    // 0x34f708: 0x0  nop
    ctx->pc = 0x34f708u;
    // NOP
    // 0x34f70c: 0x46056203  div.s       $f8, $f12, $f5
    ctx->pc = 0x34f70cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[12], ctx->f[5]); }
    // 0x34f710: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x34f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34f714: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x34f714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34f718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f71c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x34f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34f720: 0x4609c1c1  sub.s       $f7, $f24, $f9
    ctx->pc = 0x34f720u;
    ctx->f[7] = FPU_SUB_S(ctx->f[24], ctx->f[9]);
    // 0x34f724: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x34f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f728: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34f728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f72c: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x34f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34f730: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x34f730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34f734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34f738: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x34f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x34f73c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x34f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x34f740: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x34f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f744: 0x4608c081  sub.s       $f2, $f24, $f8
    ctx->pc = 0x34f744u;
    ctx->f[2] = FPU_SUB_S(ctx->f[24], ctx->f[8]);
    // 0x34f748: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x34f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34f74c: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x34f74cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x34f750: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x34f750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x34f754: 0xc6260030  lwc1        $f6, 0x30($s1)
    ctx->pc = 0x34f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34f758: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x34f758u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x34f75c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x34f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x34f760: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x34f760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x34f764: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x34f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34f768: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x34f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34f76c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34f76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34f770: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x34f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f774: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x34f774u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x34f778: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x34f778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x34f77c: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x34f77cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x34f780: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x34f780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x34f784: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x34f784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x34f788: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x34f788u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34f78c: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x34f78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x34f790: 0x14460030  bne         $v0, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x34F790u;
    {
        const bool branch_taken_0x34f790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x34F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F790u;
        // 0x34f794: 0xe6220010  swc1        $f2, 0x10($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f790) {
            ctx->pc = 0x34F854u;
            goto label_34f854;
        }
    }
    ctx->pc = 0x34F798u;
    // 0x34f798: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x34f798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x34f79c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34f79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34f7a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34f7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f7a4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34F7A4u;
    SET_GPR_U32(ctx, 31, 0x34F7ACu);
    ctx->pc = 0x34F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F7A4u;
    // 0x34f7a8: 0x460c4302  mul.s       $f12, $f8, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34F7A4u, 0x34F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7ACu;
label_34f7ac:
    // 0x34f7ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34f7b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34f7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34f7b4: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x34f7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x34f7b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x34f7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x34f7bc: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x34f7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x34f7c0: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34f7c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34f7c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34f7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34f7c8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34f7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34f7cc: 0x0  nop
    ctx->pc = 0x34f7ccu;
    // NOP
    // 0x34f7d0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x34f7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x34f7d4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x34f7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f7d8: 0xc6370000  lwc1        $f23, 0x0($s1)
    ctx->pc = 0x34f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34f7dc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x34f7dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x34f7e0: 0xc6360008  lwc1        $f22, 0x8($s1)
    ctx->pc = 0x34f7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34f7e4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x34f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f7e8: 0x4601bdc1  sub.s       $f23, $f23, $f1
    ctx->pc = 0x34f7e8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x34f7ec: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x34f7ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x34f7f0: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x34f7f0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x34f7f4: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x34f7f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x34f7f8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34F7F8u;
    SET_GPR_U32(ctx, 31, 0x34F800u);
    ctx->pc = 0x34F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F7F8u;
    // 0x34f7fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34F7F8u, 0x34F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F800u;
label_34f800:
    // 0x34f800: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x34f800u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x34f804: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34F804u;
    SET_GPR_U32(ctx, 31, 0x34F80Cu);
    ctx->pc = 0x34F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F804u;
    // 0x34f808: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34F804u, 0x34F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F80Cu;
label_34f80c:
    // 0x34f80c: 0x4615bd42  mul.s       $f21, $f23, $f21
    ctx->pc = 0x34f80cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x34f810: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x34f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f814: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x34f814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x34f818: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34f818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34f81c: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x34f81cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x34f820: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34f820u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f824: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34F824u;
    SET_GPR_U32(ctx, 31, 0x34F82Cu);
    ctx->pc = 0x34F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F824u;
    // 0x34f828: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34F824u, 0x34F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F82Cu;
label_34f82c:
    // 0x34f82c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x34f82cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x34f830: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34F830u;
    SET_GPR_U32(ctx, 31, 0x34F838u);
    ctx->pc = 0x34F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F830u;
    // 0x34f834: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34F830u, 0x34F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F838u;
label_34f838:
    // 0x34f838: 0x4615b582  mul.s       $f22, $f22, $f21
    ctx->pc = 0x34f838u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x34f83c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x34f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f840: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x34f840u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x34f844: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x34f844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x34f848: 0x46170841  sub.s       $f1, $f1, $f23
    ctx->pc = 0x34f848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x34f84c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34F84Cu;
    {
        const bool branch_taken_0x34f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F84Cu;
        // 0x34f850: 0xe6210014  swc1        $f1, 0x14($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f84c) {
            ctx->pc = 0x34F87Cu;
            goto label_34f87c;
        }
    }
    ctx->pc = 0x34F854u;
label_34f854:
    // 0x34f854: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x34f854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34f858: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x34f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34f85c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x34f85cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34f860: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x34f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f864: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x34f864u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x34f868: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x34f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f86c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34f86cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34f870: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x34f870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x34f874: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x34f874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x34f878: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x34f878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_34f87c:
    // 0x34f87c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34f880: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x34f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f884: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x34f884u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f888: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x34f888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x34f88c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34f88cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34f890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34f890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34f894: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34f898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34f898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f89c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34f89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f8a0: 0x0  nop
    ctx->pc = 0x34f8a0u;
    // NOP
    // 0x34f8a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34F8A4u;
    {
        const bool branch_taken_0x34f8a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F8A4u;
        // 0x34f8a8: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8a4) {
            ctx->pc = 0x34F8B4u;
            goto label_34f8b4;
        }
    }
    ctx->pc = 0x34F8ACu;
    // 0x34f8ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34f8acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34f8b0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x34f8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_34f8b4:
    // 0x34f8b4: 0xc0d3b80  jal         func_34EE00
    ctx->pc = 0x34F8B4u;
    SET_GPR_U32(ctx, 31, 0x34F8BCu);
    ctx->pc = 0x34F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F8B4u;
    // 0x34f8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EE00u, 0x34F8B4u, 0x34F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8BCu;
label_34f8bc:
    // 0x34f8bc: 0x8e31004c  lw          $s1, 0x4C($s1)
    ctx->pc = 0x34f8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_34f8c0:
    // 0x34f8c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x34f8c4: 0x2462ed80  addiu       $v0, $v1, -0x1280
    ctx->pc = 0x34f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
    // 0x34f8c8: 0x1622ff39  bne         $s1, $v0, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x34F8C8u;
    {
        const bool branch_taken_0x34f8c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x34F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F8C8u;
        // 0x34f8cc: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8c8) {
            ctx->pc = 0x34F5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f5b0;
        }
    }
    ctx->pc = 0x34F8D0u;
label_34f8d0:
    // 0x34f8d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x34f8d4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x34f8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x34f8d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34f8d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x34f8dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f8e0: 0xc4812b90  lwc1        $f1, 0x2B90($a0)
    ctx->pc = 0x34f8e0u;
    { uint32_t bits = FAST_READ32(0x482B90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f8e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34f8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f8e8: 0x0  nop
    ctx->pc = 0x34f8e8u;
    // NOP
    // 0x34f8ec: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34F8ECu;
    {
        const bool branch_taken_0x34f8ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F8ECu;
        // 0x34f8f0: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8ec) {
            ctx->pc = 0x34F914u;
            goto label_34f914;
        }
    }
    ctx->pc = 0x34F8F4u;
    // 0x34f8f4: 0x8c622b44  lw          $v0, 0x2B44($v1)
    ctx->pc = 0x34f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11076)));
    // 0x34f8f8: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x34f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x34f8fc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x34f8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x34f900: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F900u;
    {
        const bool branch_taken_0x34f900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34f900) {
            ctx->pc = 0x34F914u;
            goto label_34f914;
        }
    }
    ctx->pc = 0x34F908u;
    // 0x34f908: 0xc0d40ca  jal         func_350328
    ctx->pc = 0x34F908u;
    SET_GPR_U32(ctx, 31, 0x34F910u);
    ctx->pc = 0x350328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350328u, 0x34F908u, 0x34F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F910u;
label_34f910:
    // 0x34f910: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34f910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_34f914:
    // 0x34f914: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34f914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34f918: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34f918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34f91c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f920: 0xc4812b90  lwc1        $f1, 0x2B90($a0)
    ctx->pc = 0x34f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f928: 0x0  nop
    ctx->pc = 0x34f928u;
    // NOP
    // 0x34f92c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x34F92Cu;
    {
        const bool branch_taken_0x34f92c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F92Cu;
        // 0x34f930: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f92c) {
            ctx->pc = 0x34F978u;
            goto label_34f978;
        }
    }
    ctx->pc = 0x34F934u;
    // 0x34f934: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x34f934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x34f938: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34f938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34f93c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f940: 0x0  nop
    ctx->pc = 0x34f940u;
    // NOP
    // 0x34f944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f948: 0x0  nop
    ctx->pc = 0x34f948u;
    // NOP
    // 0x34f94c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x34F94Cu;
    {
        const bool branch_taken_0x34f94c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F94Cu;
        // 0x34f950: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f94c) {
            ctx->pc = 0x34F978u;
            goto label_34f978;
        }
    }
    ctx->pc = 0x34F954u;
    // 0x34f954: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x34f954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x34f958: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34f958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34f95c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34f95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f960: 0x0  nop
    ctx->pc = 0x34f960u;
    // NOP
    // 0x34f964: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f968: 0x0  nop
    ctx->pc = 0x34f968u;
    // NOP
    // 0x34f96c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34F96Cu;
    {
        const bool branch_taken_0x34f96c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F96Cu;
        // 0x34f970: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f96c) {
            ctx->pc = 0x34F978u;
            goto label_34f978;
        }
    }
    ctx->pc = 0x34F974u;
    // 0x34f974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34f974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f978:
    // 0x34f978: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34f978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34f97c: 0x8c622b44  lw          $v0, 0x2B44($v1)
    ctx->pc = 0x34f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B44u));
    // 0x34f980: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x34f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x34f984: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x34F984u;
    {
        const bool branch_taken_0x34f984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F984u;
        // 0x34f988: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f984) {
            ctx->pc = 0x34FC5Cu;
            goto label_34fc5c;
        }
    }
    ctx->pc = 0x34F98Cu;
    // 0x34f98c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34F98Cu;
    SET_GPR_U32(ctx, 31, 0x34F994u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34F98Cu, 0x34F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F994u;
label_34f994:
    // 0x34f994: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x34f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x34f998: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x34f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x34f99c: 0x438818  mult        $s1, $v0, $v1
    ctx->pc = 0x34f99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x34f9a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34f9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f9a8: 0x2453e148  addiu       $s3, $v0, -0x1EB8
    ctx->pc = 0x34f9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959432));
    // 0x34f9ac: 0x2339021  addu        $s2, $s1, $s3
    ctx->pc = 0x34f9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x34f9b0: 0x92560024  lbu         $s6, 0x24($s2)
    ctx->pc = 0x34f9b0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x34f9b4: 0x16c300a9  bne         $s6, $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x34F9B4u;
    {
        const bool branch_taken_0x34f9b4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x34F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9B4u;
        // 0x34f9b8: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9b4) {
            ctx->pc = 0x34FC5Cu;
            goto label_34fc5c;
        }
    }
    ctx->pc = 0x34F9BCu;
    // 0x34f9bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x34f9c0: 0x3c0144bb  lui         $at, 0x44BB
    ctx->pc = 0x34f9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17595 << 16));
    // 0x34f9c4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x34f9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x34f9c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34f9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f9cc: 0xc4942b90  lwc1        $f20, 0x2B90($a0)
    ctx->pc = 0x34f9ccu;
    { uint32_t bits = FAST_READ32(0x482B90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34f9d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34f9d4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34f9d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x34f9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34f9dc: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x34f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x34f9e0: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x34f9e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x34f9e4: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x34f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x34f9e8: 0x2670002c  addiu       $s0, $s3, 0x2C
    ctx->pc = 0x34f9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x34f9ec: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x34f9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x34f9f0: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x34f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x34f9f4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x34F9F4u;
    SET_GPR_U32(ctx, 31, 0x34F9FCu);
    ctx->pc = 0x34F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F9F4u;
    // 0x34f9f8: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x34F9F4u, 0x34F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9FCu;
label_34f9fc:
    // 0x34f9fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x34f9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x34fa00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34fa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34fa04: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x34fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x34fa08: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34fa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x34fa0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34fa0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34fa10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34fa10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fa14: 0x26630034  addiu       $v1, $s3, 0x34
    ctx->pc = 0x34fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x34fa18: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x34fa18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x34fa1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34fa20: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x34fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x34fa24: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x34fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34fa28: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x34fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x34fa2c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x34fa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x34fa30: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34fa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34fa34: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x34fa34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x34fa38: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x34fa38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34fa3c: 0xe4940038  swc1        $f20, 0x38($a0)
    ctx->pc = 0x34fa3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x34fa40: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x34fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x34fa44: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x34fa44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34fa48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34fa4c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x34fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34fa50: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x34fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34fa54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34fa54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34fa58: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x34fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34fa5c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x34fa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34fa60: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x34fa60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x34fa64: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x34fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x34fa68: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34fa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34fa6c: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x34fa6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x34fa70: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x34fa70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x34fa74: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x34fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x34fa78: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x34fa78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34fa7c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x34fa7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34fa80: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x34fa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34fa84: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x34fa84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34fa88: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34FA88u;
    SET_GPR_U32(ctx, 31, 0x34FA90u);
    ctx->pc = 0x34FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA88u;
    // 0x34fa8c: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34FA88u, 0x34FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA90u;
label_34fa90:
    // 0x34fa90: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34FA90u;
    SET_GPR_U32(ctx, 31, 0x34FA98u);
    ctx->pc = 0x34FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA90u;
    // 0x34fa94: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34FA90u, 0x34FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA98u;
label_34fa98:
    // 0x34fa98: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34fa98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fa9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34fa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34faa0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34faa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34faa4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34faa8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34faac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34fab0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34fab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34fab4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34fab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34fab8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34fab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34fabc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34fabcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34fac0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34fac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34fac4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x34fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34fac8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x34fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34facc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x34faccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34fad0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34fad0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34fad4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34fad4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34fad8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34fad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34fadc: 0x0  nop
    ctx->pc = 0x34fadcu;
    // NOP
    // 0x34fae0: 0x0  nop
    ctx->pc = 0x34fae0u;
    // NOP
    // 0x34fae4: 0x46010084  c1          0x10084
    ctx->pc = 0x34fae4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x34fae8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x34fae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x34faec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34faecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34faf0: 0x0  nop
    ctx->pc = 0x34faf0u;
    // NOP
    // 0x34faf4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34faf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34faf8: 0x0  nop
    ctx->pc = 0x34faf8u;
    // NOP
    // 0x34fafc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34FAFCu;
    {
        const bool branch_taken_0x34fafc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAFCu;
        // 0x34fb00: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fafc) {
            ctx->pc = 0x34FB28u;
            goto label_34fb28;
        }
    }
    ctx->pc = 0x34FB04u;
    // 0x34fb04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34fb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34fb08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34fb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fb0c: 0x0  nop
    ctx->pc = 0x34fb0cu;
    // NOP
    // 0x34fb10: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34fb10u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34fb14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34fb14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34fb18: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34fb18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34fb1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34fb1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34fb20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34fb20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34fb24: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x34fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_34fb28:
    // 0x34fb28: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x34fb28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34fb2c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x34FB2Cu;
    SET_GPR_U32(ctx, 31, 0x34FB34u);
    ctx->pc = 0x34FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FB2Cu;
    // 0x34fb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x34FB2Cu, 0x34FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB34u;
label_34fb34:
    // 0x34fb34: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x34fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x34fb38: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x34fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x34fb3c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x34fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x34fb40: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x34fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x34fb44: 0xc440669c  lwc1        $f0, 0x669C($v0)
    ctx->pc = 0x34fb44u;
    { uint32_t bits = FAST_READ32(0x47669Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34fb48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34fb4c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x34fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x34fb50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34fb54: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x34fb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34fb58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34fb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fb5c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x34fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x34fb60: 0x27a600e4  addiu       $a2, $sp, 0xE4
    ctx->pc = 0x34fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x34fb64: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x34fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x34fb68: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x34fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x34fb6c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x34fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x34fb70: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x34fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x34fb74: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x34fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x34fb78: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x34fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x34fb7c: 0xe7b500e4  swc1        $f21, 0xE4($sp)
    ctx->pc = 0x34fb7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x34fb80: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x34fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x34fb84: 0xc077824  jal         func_1DE090
    ctx->pc = 0x34FB84u;
    SET_GPR_U32(ctx, 31, 0x34FB8Cu);
    ctx->pc = 0x34FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FB84u;
    // 0x34fb88: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x34FB84u, 0x34FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB8Cu;
label_34fb8c:
    // 0x34fb8c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x34FB8Cu;
    {
        const bool branch_taken_0x34fb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB8Cu;
        // 0x34fb90: 0xc7a10094  lwc1        $f1, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb8c) {
            ctx->pc = 0x34FC58u;
            goto label_34fc58;
        }
    }
    ctx->pc = 0x34FB94u;
    // 0x34fb94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34fb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34fb98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34fb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fb9c: 0x0  nop
    ctx->pc = 0x34fb9cu;
    // NOP
    // 0x34fba0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34fba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34fba4: 0x0  nop
    ctx->pc = 0x34fba4u;
    // NOP
    // 0x34fba8: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x34FBA8u;
    {
        const bool branch_taken_0x34fba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34fba8) {
            ctx->pc = 0x34FBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FBA8u;
            // 0x34fbac: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FC5Cu;
            goto label_34fc5c;
        }
    }
    ctx->pc = 0x34FBB0u;
    // 0x34fbb0: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x34FBB0u;
    SET_GPR_U32(ctx, 31, 0x34FBB8u);
    ctx->pc = 0x34FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FBB0u;
    // 0x34fbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x34FBB0u, 0x34FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBB8u;
label_34fbb8:
    // 0x34fbb8: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x34fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x34fbbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34fbc0: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x34fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x34fbc4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x34fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34fbc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fbcc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x34fbccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fbd0: 0x10850021  beq         $a0, $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x34FBD0u;
    {
        const bool branch_taken_0x34fbd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x34FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBD0u;
        // 0x34fbd4: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fbd0) {
            ctx->pc = 0x34FC58u;
            goto label_34fc58;
        }
    }
    ctx->pc = 0x34FBD8u;
    // 0x34fbd8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x34fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x34fbdc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34fbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34fbe0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34fbe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34fbe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34fbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34fbe8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x34fbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x34fbec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34fbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34fbf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34fbf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34fbf4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x34fbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x34fbf8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x34fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34fbfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34fbfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34fc00: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x34fc00u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x34fc04: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34fc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34fc08: 0x0  nop
    ctx->pc = 0x34fc08u;
    // NOP
    // 0x34fc0c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x34FC0Cu;
    {
        const bool branch_taken_0x34fc0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC0Cu;
        // 0x34fc10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc0c) {
            ctx->pc = 0x34FC58u;
            goto label_34fc58;
        }
    }
    ctx->pc = 0x34FC14u;
    // 0x34fc14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34fc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc18: 0xa2420024  sb          $v0, 0x24($s2)
    ctx->pc = 0x34fc18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x34fc1c: 0xc0d40be  jal         func_3502F8
    ctx->pc = 0x34FC1Cu;
    SET_GPR_U32(ctx, 31, 0x34FC24u);
    ctx->pc = 0x34FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FC1Cu;
    // 0x34fc20: 0xa2560025  sb          $s6, 0x25($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502F8u, 0x34FC1Cu, 0x34FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC24u;
label_34fc24:
    // 0x34fc24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x34fc28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc2c: 0xc0d40b6  jal         func_3502D8
    ctx->pc = 0x34FC2Cu;
    SET_GPR_U32(ctx, 31, 0x34FC34u);
    ctx->pc = 0x34FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FC2Cu;
    // 0x34fc30: 0x2465ed28  addiu       $a1, $v1, -0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3502D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3502D8u, 0x34FC2Cu, 0x34FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC34u;
label_34fc34:
    // 0x34fc34: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x34fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34fc38: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x34fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x34fc3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x34fc3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34fc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc44: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x34fc44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x34fc48: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x34fc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34fc4c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34fc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34fc50: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x34fc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34fc54: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x34fc54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_34fc58:
    // 0x34fc58: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x34fc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_34fc5c:
    // 0x34fc5c: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x34fc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34fc60: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x34fc60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x34fc64: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x34fc64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x34fc68: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x34fc68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x34fc6c: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x34fc6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34fc70: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x34fc70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x34fc74: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x34fc74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34fc78: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x34fc78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34fc7c: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x34fc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x34fc80: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x34fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34fc84: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x34fc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34fc88: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x34fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34fc8c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x34fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34fc90: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x34fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34fc94: 0x3e00008  jr          $ra
    ctx->pc = 0x34FC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC94u;
        // 0x34fc98: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FC9Cu;
    // 0x34fc9c: 0x0  nop
    ctx->pc = 0x34fc9cu;
    // NOP
    ctx->pc = 0x34fca0u;
}
