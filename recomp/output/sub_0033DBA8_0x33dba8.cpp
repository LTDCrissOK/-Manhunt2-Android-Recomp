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

// Function: sub_0033DBA8
// Address: 0x33dba8 - 0x33ead8
void sub_0033DBA8_0x33dba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DBA8_0x33dba8");
#endif

    switch (ctx->pc) {
        case 0x33dcc0u: goto label_33dcc0;
        case 0x33dcecu: goto label_33dcec;
        case 0x33dcfcu: goto label_33dcfc;
        case 0x33dd04u: goto label_33dd04;
        case 0x33dd0cu: goto label_33dd0c;
        case 0x33e080u: goto label_33e080;
        case 0x33e08cu: goto label_33e08c;
        case 0x33e098u: goto label_33e098;
        case 0x33e0a4u: goto label_33e0a4;
        case 0x33e0b0u: goto label_33e0b0;
        case 0x33e0bcu: goto label_33e0bc;
        case 0x33e0c8u: goto label_33e0c8;
        case 0x33e0d4u: goto label_33e0d4;
        case 0x33e0e0u: goto label_33e0e0;
        case 0x33e1dcu: goto label_33e1dc;
        case 0x33e1e4u: goto label_33e1e4;
        case 0x33e1ecu: goto label_33e1ec;
        case 0x33e574u: goto label_33e574;
        case 0x33e600u: goto label_33e600;
        case 0x33e618u: goto label_33e618;
        case 0x33e638u: goto label_33e638;
        case 0x33e6c4u: goto label_33e6c4;
        case 0x33e6dcu: goto label_33e6dc;
        case 0x33e6fcu: goto label_33e6fc;
        case 0x33e798u: goto label_33e798;
        case 0x33e7b0u: goto label_33e7b0;
        case 0x33e7d4u: goto label_33e7d4;
        default: break;
    }

    ctx->pc = 0x33dba8u;

    // 0x33dba8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x33dba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x33dbac: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x33dbacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33dbb0: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x33dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x33dbb4: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x33dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x33dbb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33dbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dbbc: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x33dbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x33dbc0: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x33dbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x33dbc4: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x33dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x33dbc8: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x33dbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x33dbcc: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x33dbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x33dbd0: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x33dbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x33dbd4: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x33dbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x33dbd8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x33dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x33dbdc: 0xe7bf0158  swc1        $f31, 0x158($sp)
    ctx->pc = 0x33dbdcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x33dbe0: 0xe7be0150  swc1        $f30, 0x150($sp)
    ctx->pc = 0x33dbe0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x33dbe4: 0xe7bd0148  swc1        $f29, 0x148($sp)
    ctx->pc = 0x33dbe4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x33dbe8: 0xe7bc0140  swc1        $f28, 0x140($sp)
    ctx->pc = 0x33dbe8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x33dbec: 0xe7bb0138  swc1        $f27, 0x138($sp)
    ctx->pc = 0x33dbecu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x33dbf0: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x33dbf0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x33dbf4: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x33dbf4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x33dbf8: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x33dbf8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x33dbfc: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x33dbfcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x33dc00: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x33dc00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33dc04: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x33dc04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x33dc08: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x33DC08u;
    {
        const bool branch_taken_0x33dc08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC08u;
        // 0x33dc0c: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc08) {
            ctx->pc = 0x33DC14u;
            goto label_33dc14;
        }
    }
    ctx->pc = 0x33DC10u;
    // 0x33dc10: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x33dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_33dc14:
    // 0x33dc14: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x33dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33dc18: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DC18u;
    {
        const bool branch_taken_0x33dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dc18) {
            ctx->pc = 0x33DC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DC18u;
            // 0x33dc1c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DC34u;
            goto label_33dc34;
        }
    }
    ctx->pc = 0x33DC20u;
    // 0x33dc20: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x33dc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33dc24: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x33dc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x33dc28: 0x10400393  beqz        $v0, . + 4 + (0x393 << 2)
    ctx->pc = 0x33DC28u;
    {
        const bool branch_taken_0x33dc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC28u;
        // 0x33dc2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc28) {
            ctx->pc = 0x33EA78u;
            goto label_33ea78;
        }
    }
    ctx->pc = 0x33DC30u;
    // 0x33dc30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x33dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_33dc34:
    // 0x33dc34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33dc38: 0x8c422ccc  lw          $v0, 0x2CCC($v0)
    ctx->pc = 0x33dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CCCu));
    // 0x33dc3c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dc40: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33dc44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x33dc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dc48: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x33dc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33dc4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x33dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dc50: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x33dc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33dc54: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x33dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dc58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33DC58u;
    {
        const bool branch_taken_0x33dc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC58u;
        // 0x33dc5c: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc58) {
            ctx->pc = 0x33DC94u;
            goto label_33dc94;
        }
    }
    ctx->pc = 0x33DC60u;
    // 0x33dc60: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x33dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dc64: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x33dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33dc68: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33dc68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33dc6c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x33dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dc70: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x33dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33dc74: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33dc74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33dc78: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x33dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dc7c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x33dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33dc80: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33dc80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33dc84: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x33dc84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dc88: 0x0  nop
    ctx->pc = 0x33dc88u;
    // NOP
    // 0x33dc8c: 0x4501037a  bc1t        . + 4 + (0x37A << 2)
    ctx->pc = 0x33DC8Cu;
    {
        const bool branch_taken_0x33dc8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC8Cu;
        // 0x33dc90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc8c) {
            ctx->pc = 0x33EA78u;
            goto label_33ea78;
        }
    }
    ctx->pc = 0x33DC94u;
label_33dc94:
    // 0x33dc94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x33dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33dc98: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x33dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x33dc9c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x33dc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33dca0: 0x26107ee0  addiu       $s0, $s0, 0x7EE0
    ctx->pc = 0x33dca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32480));
    // 0x33dca4: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x33dca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33dca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dcac: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x33dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x33dcb0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x33dcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x33dcb4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x33dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33dcb8: 0xc0c362e  jal         func_30D8B8
    ctx->pc = 0x33DCB8u;
    SET_GPR_U32(ctx, 31, 0x33DCC0u);
    ctx->pc = 0x33DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DCB8u;
    // 0x33dcbc: 0x473821  addu        $a3, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8B8u, 0x33DCB8u, 0x33DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCC0u;
label_33dcc0:
    // 0x33dcc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33dcc4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x33dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x33dcc8: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x33dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33dccc: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x33dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x33dcd0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x33dcd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33dcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33dcd8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x33dcd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33dcdc: 0x10800366  beqz        $a0, . + 4 + (0x366 << 2)
    ctx->pc = 0x33DCDCu;
    {
        const bool branch_taken_0x33dcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCDCu;
        // 0x33dce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcdc) {
            ctx->pc = 0x33EA78u;
            goto label_33ea78;
        }
    }
    ctx->pc = 0x33DCE4u;
    // 0x33dce4: 0xc0c3504  jal         func_30D410
    ctx->pc = 0x33DCE4u;
    SET_GPR_U32(ctx, 31, 0x33DCECu);
    ctx->pc = 0x33DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DCE4u;
    // 0x33dce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D410u, 0x33DCE4u, 0x33DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCECu;
label_33dcec:
    // 0x33dcec: 0x10400362  beqz        $v0, . + 4 + (0x362 << 2)
    ctx->pc = 0x33DCECu;
    {
        const bool branch_taken_0x33dcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCECu;
        // 0x33dcf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcec) {
            ctx->pc = 0x33EA78u;
            goto label_33ea78;
        }
    }
    ctx->pc = 0x33DCF4u;
    // 0x33dcf4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33DCF4u;
    SET_GPR_U32(ctx, 31, 0x33DCFCu);
    ctx->pc = 0x33DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DCF4u;
    // 0x33dcf8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33DCF4u, 0x33DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DCFCu;
label_33dcfc:
    // 0x33dcfc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33DCFCu;
    SET_GPR_U32(ctx, 31, 0x33DD04u);
    ctx->pc = 0x33DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DCFCu;
    // 0x33dd00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33DCFCu, 0x33DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DD04u;
label_33dd04:
    // 0x33dd04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33DD04u;
    SET_GPR_U32(ctx, 31, 0x33DD0Cu);
    ctx->pc = 0x33DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DD04u;
    // 0x33dd08: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33DD04u, 0x33DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DD0Cu;
label_33dd0c:
    // 0x33dd0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33dd10: 0x8c43c340  lw          $v1, -0x3CC0($v0)
    ctx->pc = 0x33dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FC340u));
    // 0x33dd14: 0x10600112  beqz        $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x33DD14u;
    {
        const bool branch_taken_0x33dd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD14u;
        // 0x33dd18: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd14) {
            ctx->pc = 0x33E160u;
            goto label_33e160;
        }
    }
    ctx->pc = 0x33DD1Cu;
    // 0x33dd1c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x33dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33dd20: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x33dd20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33dd24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x33dd24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd28: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x33dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33dd2c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x33dd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd30: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x33dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x33dd34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33dd38: 0xc4a1c348  lwc1        $f1, -0x3CB8($a1)
    ctx->pc = 0x33dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294951752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dd3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33dd40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33dd44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33dd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dd48: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x33dd48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33dd4c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x33dd4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33dd50: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x33dd50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dd54: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x33dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x33dd58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33dd5c: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x33dd5cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33dd60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33dd64: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x33dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33dd68: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x33dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33dd6c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x33dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33dd70: 0x90710002  lbu         $s1, 0x2($v1)
    ctx->pc = 0x33dd70u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x33dd74: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33dd78: 0x90b20002  lbu         $s2, 0x2($a1)
    ctx->pc = 0x33dd78u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x33dd7c: 0x90530002  lbu         $s3, 0x2($v0)
    ctx->pc = 0x33dd7cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x33dd80: 0x905e0000  lbu         $fp, 0x0($v0)
    ctx->pc = 0x33dd80u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33dd84: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x33dd84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x33dd88: 0x90760000  lbu         $s6, 0x0($v1)
    ctx->pc = 0x33dd88u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33dd8c: 0x90770001  lbu         $s7, 0x1($v1)
    ctx->pc = 0x33dd8cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x33dd90: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x33dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x33dd94: 0x90b40000  lbu         $s4, 0x0($a1)
    ctx->pc = 0x33dd94u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33dd98: 0x450100d2  bc1t        . + 4 + (0xD2 << 2)
    ctx->pc = 0x33DD98u;
    {
        const bool branch_taken_0x33dd98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD98u;
        // 0x33dd9c: 0x90b50001  lbu         $s5, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd98) {
            ctx->pc = 0x33E0E4u;
            goto label_33e0e4;
        }
    }
    ctx->pc = 0x33DDA0u;
    // 0x33dda0: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DDA0u;
    {
        const bool branch_taken_0x33dda0 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x33DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDA0u;
        // 0x33dda4: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dda0) {
            ctx->pc = 0x33DDBCu;
            goto label_33ddbc;
        }
    }
    ctx->pc = 0x33DDA8u;
    // 0x33dda8: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x33dda8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33ddac: 0x0  nop
    ctx->pc = 0x33ddacu;
    // NOP
    // 0x33ddb0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x33ddb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33ddb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33DDB4u;
    {
        const bool branch_taken_0x33ddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ddb4) {
            ctx->pc = 0x33DDD4u;
            goto label_33ddd4;
        }
    }
    ctx->pc = 0x33DDBCu;
label_33ddbc:
    // 0x33ddbc: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x33ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x33ddc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ddc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33ddc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33ddc8: 0x0  nop
    ctx->pc = 0x33ddc8u;
    // NOP
    // 0x33ddcc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x33ddccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33ddd0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x33ddd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_33ddd4:
    // 0x33ddd4: 0x6e00006  bltz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DDD4u;
    {
        const bool branch_taken_0x33ddd4 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x33DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDD4u;
        // 0x33ddd8: 0x171842  srl         $v1, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddd4) {
            ctx->pc = 0x33DDF0u;
            goto label_33ddf0;
        }
    }
    ctx->pc = 0x33DDDCu;
    // 0x33dddc: 0x4497d800  mtc1        $s7, $f27
    ctx->pc = 0x33dddcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x33dde0: 0x0  nop
    ctx->pc = 0x33dde0u;
    // NOP
    // 0x33dde4: 0x4680dee0  cvt.s.w     $f27, $f27
    ctx->pc = 0x33dde4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[27], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x33dde8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33DDE8u;
    {
        const bool branch_taken_0x33dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dde8) {
            ctx->pc = 0x33DE08u;
            goto label_33de08;
        }
    }
    ctx->pc = 0x33DDF0u;
label_33ddf0:
    // 0x33ddf0: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x33ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x33ddf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ddf8: 0x4482d800  mtc1        $v0, $f27
    ctx->pc = 0x33ddf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x33ddfc: 0x0  nop
    ctx->pc = 0x33ddfcu;
    // NOP
    // 0x33de00: 0x4680dee0  cvt.s.w     $f27, $f27
    ctx->pc = 0x33de00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[27], sizeof(tmp)); ctx->f[27] = FPU_CVT_S_W(tmp); }
    // 0x33de04: 0x461bdec0  add.s       $f27, $f27, $f27
    ctx->pc = 0x33de04u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[27]);
label_33de08:
    // 0x33de08: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DE08u;
    {
        const bool branch_taken_0x33de08 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x33DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE08u;
        // 0x33de0c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de08) {
            ctx->pc = 0x33DE24u;
            goto label_33de24;
        }
    }
    ctx->pc = 0x33DE10u;
    // 0x33de10: 0x4491d000  mtc1        $s1, $f26
    ctx->pc = 0x33de10u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x33de14: 0x0  nop
    ctx->pc = 0x33de14u;
    // NOP
    // 0x33de18: 0x4680d6a0  cvt.s.w     $f26, $f26
    ctx->pc = 0x33de18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[26], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x33de1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33DE1Cu;
    {
        const bool branch_taken_0x33de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de1c) {
            ctx->pc = 0x33DE3Cu;
            goto label_33de3c;
        }
    }
    ctx->pc = 0x33DE24u;
label_33de24:
    // 0x33de24: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x33de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x33de28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33de2c: 0x4482d000  mtc1        $v0, $f26
    ctx->pc = 0x33de2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x33de30: 0x0  nop
    ctx->pc = 0x33de30u;
    // NOP
    // 0x33de34: 0x4680d6a0  cvt.s.w     $f26, $f26
    ctx->pc = 0x33de34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[26], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
    // 0x33de38: 0x461ad680  add.s       $f26, $f26, $f26
    ctx->pc = 0x33de38u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[26]);
label_33de3c:
    // 0x33de3c: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DE3Cu;
    {
        const bool branch_taken_0x33de3c = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x33DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE3Cu;
        // 0x33de40: 0x8fa200ac  lw          $v0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de3c) {
            ctx->pc = 0x33DE58u;
            goto label_33de58;
        }
    }
    ctx->pc = 0x33DE44u;
    // 0x33de44: 0x449ec800  mtc1        $fp, $f25
    ctx->pc = 0x33de44u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x33de48: 0x0  nop
    ctx->pc = 0x33de48u;
    // NOP
    // 0x33de4c: 0x4680ce60  cvt.s.w     $f25, $f25
    ctx->pc = 0x33de4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[25], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x33de50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33DE50u;
    {
        const bool branch_taken_0x33de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de50) {
            ctx->pc = 0x33DE78u;
            goto label_33de78;
        }
    }
    ctx->pc = 0x33DE58u;
label_33de58:
    // 0x33de58: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x33de58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
    // 0x33de5c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x33de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x33de60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33de64: 0x4482c800  mtc1        $v0, $f25
    ctx->pc = 0x33de64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x33de68: 0x0  nop
    ctx->pc = 0x33de68u;
    // NOP
    // 0x33de6c: 0x4680ce60  cvt.s.w     $f25, $f25
    ctx->pc = 0x33de6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[25], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x33de70: 0x4619ce40  add.s       $f25, $f25, $f25
    ctx->pc = 0x33de70u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[25]);
    // 0x33de74: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x33de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_33de78:
    // 0x33de78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DE78u;
    {
        const bool branch_taken_0x33de78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE78u;
        // 0x33de7c: 0x8fa400ac  lw          $a0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de78) {
            ctx->pc = 0x33DE94u;
            goto label_33de94;
        }
    }
    ctx->pc = 0x33DE80u;
    // 0x33de80: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x33de80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33de84: 0x0  nop
    ctx->pc = 0x33de84u;
    // NOP
    // 0x33de88: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x33de88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x33de8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DE8Cu;
    {
        const bool branch_taken_0x33de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de8c) {
            ctx->pc = 0x33DEB0u;
            goto label_33deb0;
        }
    }
    ctx->pc = 0x33DE94u;
label_33de94:
    // 0x33de94: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x33de94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x33de98: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x33de98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33de9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33dea0: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x33dea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33dea4: 0x0  nop
    ctx->pc = 0x33dea4u;
    // NOP
    // 0x33dea8: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x33dea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x33deac: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x33deacu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_33deb0:
    // 0x33deb0: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DEB0u;
    {
        const bool branch_taken_0x33deb0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x33DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEB0u;
        // 0x33deb4: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33deb0) {
            ctx->pc = 0x33DECCu;
            goto label_33decc;
        }
    }
    ctx->pc = 0x33DEB8u;
    // 0x33deb8: 0x4493b800  mtc1        $s3, $f23
    ctx->pc = 0x33deb8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33debc: 0x0  nop
    ctx->pc = 0x33debcu;
    // NOP
    // 0x33dec0: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x33dec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x33dec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33DEC4u;
    {
        const bool branch_taken_0x33dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dec4) {
            ctx->pc = 0x33DEE4u;
            goto label_33dee4;
        }
    }
    ctx->pc = 0x33DECCu;
label_33decc:
    // 0x33decc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x33deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x33ded0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ded4: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x33ded4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33ded8: 0x0  nop
    ctx->pc = 0x33ded8u;
    // NOP
    // 0x33dedc: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x33dedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x33dee0: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x33dee0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_33dee4:
    // 0x33dee4: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DEE4u;
    {
        const bool branch_taken_0x33dee4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x33DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEE4u;
        // 0x33dee8: 0x141842  srl         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dee4) {
            ctx->pc = 0x33DF00u;
            goto label_33df00;
        }
    }
    ctx->pc = 0x33DEECu;
    // 0x33deec: 0x4494b000  mtc1        $s4, $f22
    ctx->pc = 0x33deecu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33def0: 0x0  nop
    ctx->pc = 0x33def0u;
    // NOP
    // 0x33def4: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x33def4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x33def8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33DEF8u;
    {
        const bool branch_taken_0x33def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33def8) {
            ctx->pc = 0x33DF18u;
            goto label_33df18;
        }
    }
    ctx->pc = 0x33DF00u;
label_33df00:
    // 0x33df00: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x33df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x33df04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33df08: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x33df08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33df0c: 0x0  nop
    ctx->pc = 0x33df0cu;
    // NOP
    // 0x33df10: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x33df10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x33df14: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x33df14u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_33df18:
    // 0x33df18: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DF18u;
    {
        const bool branch_taken_0x33df18 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x33DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF18u;
        // 0x33df1c: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df18) {
            ctx->pc = 0x33DF34u;
            goto label_33df34;
        }
    }
    ctx->pc = 0x33DF20u;
    // 0x33df20: 0x4495a800  mtc1        $s5, $f21
    ctx->pc = 0x33df20u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x33df24: 0x0  nop
    ctx->pc = 0x33df24u;
    // NOP
    // 0x33df28: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x33df28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x33df2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33DF2Cu;
    {
        const bool branch_taken_0x33df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df2c) {
            ctx->pc = 0x33DF4Cu;
            goto label_33df4c;
        }
    }
    ctx->pc = 0x33DF34u;
label_33df34:
    // 0x33df34: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x33df34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x33df38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33df3c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x33df3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x33df40: 0x0  nop
    ctx->pc = 0x33df40u;
    // NOP
    // 0x33df44: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x33df44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x33df48: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x33df48u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_33df4c:
    // 0x33df4c: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DF4Cu;
    {
        const bool branch_taken_0x33df4c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x33DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF4Cu;
        // 0x33df50: 0xc501c348  lwc1        $f1, -0x3CB8($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294951752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df4c) {
            ctx->pc = 0x33DF68u;
            goto label_33df68;
        }
    }
    ctx->pc = 0x33DF54u;
    // 0x33df54: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x33df54u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33df58: 0x0  nop
    ctx->pc = 0x33df58u;
    // NOP
    // 0x33df5c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x33df5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x33df60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33DF60u;
    {
        const bool branch_taken_0x33df60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF60u;
        // 0x33df64: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df60) {
            ctx->pc = 0x33DF88u;
            goto label_33df88;
        }
    }
    ctx->pc = 0x33DF68u;
label_33df68:
    // 0x33df68: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x33df68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x33df6c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x33df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x33df70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33df70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33df74: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x33df74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33df78: 0x0  nop
    ctx->pc = 0x33df78u;
    // NOP
    // 0x33df7c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x33df7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x33df80: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x33df80u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x33df84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33df84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33df88:
    // 0x33df88: 0xc444d808  lwc1        $f4, -0x27F8($v0)
    ctx->pc = 0x33df88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33df8c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x33df8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x33df90: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x33df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x33df94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33df94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33df98: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x33df98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x33df9c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x33df9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dfa0: 0x0  nop
    ctx->pc = 0x33dfa0u;
    // NOP
    // 0x33dfa4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33DFA4u;
    {
        const bool branch_taken_0x33dfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFA4u;
        // 0x33dfa8: 0x2442d808  addiu       $v0, $v0, -0x27F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dfa4) {
            ctx->pc = 0x33DFB0u;
            goto label_33dfb0;
        }
    }
    ctx->pc = 0x33DFACu;
    // 0x33dfac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33dfacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_33dfb0:
    // 0x33dfb0: 0x4601dec2  mul.s       $f27, $f27, $f1
    ctx->pc = 0x33dfb0u;
    ctx->f[27] = FPU_MUL_S(ctx->f[27], ctx->f[1]);
    // 0x33dfb4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x33dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33dfb8: 0x4603dec0  add.s       $f27, $f27, $f3
    ctx->pc = 0x33dfb8u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[3]);
    // 0x33dfbc: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x33dfbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dfc0: 0x0  nop
    ctx->pc = 0x33dfc0u;
    // NOP
    // 0x33dfc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33DFC4u;
    {
        const bool branch_taken_0x33dfc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33dfc4) {
            ctx->pc = 0x33DFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DFC4u;
            // 0x33dfc8: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
            ctx->f[27] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DFCCu;
            goto label_33dfcc;
        }
    }
    ctx->pc = 0x33DFCCu;
label_33dfcc:
    // 0x33dfcc: 0x4601d682  mul.s       $f26, $f26, $f1
    ctx->pc = 0x33dfccu;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[1]);
    // 0x33dfd0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x33dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dfd4: 0x4602d680  add.s       $f26, $f26, $f2
    ctx->pc = 0x33dfd4u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[2]);
    // 0x33dfd8: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x33dfd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dfdc: 0x0  nop
    ctx->pc = 0x33dfdcu;
    // NOP
    // 0x33dfe0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33DFE0u;
    {
        const bool branch_taken_0x33dfe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33dfe0) {
            ctx->pc = 0x33DFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DFE0u;
            // 0x33dfe4: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
            ctx->f[26] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DFE8u;
            goto label_33dfe8;
        }
    }
    ctx->pc = 0x33DFE8u;
label_33dfe8:
    // 0x33dfe8: 0x4601ce42  mul.s       $f25, $f25, $f1
    ctx->pc = 0x33dfe8u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    // 0x33dfec: 0x4604ce40  add.s       $f25, $f25, $f4
    ctx->pc = 0x33dfecu;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[4]);
    // 0x33dff0: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x33dff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33dff4: 0x0  nop
    ctx->pc = 0x33dff4u;
    // NOP
    // 0x33dff8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33DFF8u;
    {
        const bool branch_taken_0x33dff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33dff8) {
            ctx->pc = 0x33DFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DFF8u;
            // 0x33dffc: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
            ctx->f[25] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E000u;
            goto label_33e000;
        }
    }
    ctx->pc = 0x33E000u;
label_33e000:
    // 0x33e000: 0x4601c602  mul.s       $f24, $f24, $f1
    ctx->pc = 0x33e000u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x33e004: 0x4603c600  add.s       $f24, $f24, $f3
    ctx->pc = 0x33e004u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
    // 0x33e008: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x33e008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e00c: 0x0  nop
    ctx->pc = 0x33e00cu;
    // NOP
    // 0x33e010: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33E010u;
    {
        const bool branch_taken_0x33e010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e010) {
            ctx->pc = 0x33E014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E010u;
            // 0x33e014: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
            ctx->f[24] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E018u;
            goto label_33e018;
        }
    }
    ctx->pc = 0x33E018u;
label_33e018:
    // 0x33e018: 0x4601bdc2  mul.s       $f23, $f23, $f1
    ctx->pc = 0x33e018u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x33e01c: 0x4602bdc0  add.s       $f23, $f23, $f2
    ctx->pc = 0x33e01cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
    // 0x33e020: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x33e020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e024: 0x0  nop
    ctx->pc = 0x33e024u;
    // NOP
    // 0x33e028: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33E028u;
    {
        const bool branch_taken_0x33e028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e028) {
            ctx->pc = 0x33E02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E028u;
            // 0x33e02c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E030u;
            goto label_33e030;
        }
    }
    ctx->pc = 0x33E030u;
label_33e030:
    // 0x33e030: 0x4601b582  mul.s       $f22, $f22, $f1
    ctx->pc = 0x33e030u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x33e034: 0x4604b580  add.s       $f22, $f22, $f4
    ctx->pc = 0x33e034u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[4]);
    // 0x33e038: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x33e038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e03c: 0x0  nop
    ctx->pc = 0x33e03cu;
    // NOP
    // 0x33e040: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33E040u;
    {
        const bool branch_taken_0x33e040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e040) {
            ctx->pc = 0x33E044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E040u;
            // 0x33e044: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E048u;
            goto label_33e048;
        }
    }
    ctx->pc = 0x33E048u;
label_33e048:
    // 0x33e048: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x33e048u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x33e04c: 0x4603ad40  add.s       $f21, $f21, $f3
    ctx->pc = 0x33e04cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x33e050: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x33e050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e054: 0x0  nop
    ctx->pc = 0x33e054u;
    // NOP
    // 0x33e058: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33E058u;
    {
        const bool branch_taken_0x33e058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e058) {
            ctx->pc = 0x33E05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E058u;
            // 0x33e05c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E060u;
            goto label_33e060;
        }
    }
    ctx->pc = 0x33E060u;
label_33e060:
    // 0x33e060: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x33e060u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x33e064: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x33e064u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x33e068: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x33e068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e06c: 0x0  nop
    ctx->pc = 0x33e06cu;
    // NOP
    // 0x33e070: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33E070u;
    {
        const bool branch_taken_0x33e070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e070) {
            ctx->pc = 0x33E074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E070u;
            // 0x33e074: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E078u;
            goto label_33e078;
        }
    }
    ctx->pc = 0x33E078u;
label_33e078:
    // 0x33e078: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E078u;
    SET_GPR_U32(ctx, 31, 0x33E080u);
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E078u, 0x33E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E080u;
label_33e080:
    // 0x33e080: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x33e080u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x33e084: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E084u;
    SET_GPR_U32(ctx, 31, 0x33E08Cu);
    ctx->pc = 0x33E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E084u;
    // 0x33e088: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E084u, 0x33E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E08Cu;
label_33e08c:
    // 0x33e08c: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x33e08cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x33e090: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E090u;
    SET_GPR_U32(ctx, 31, 0x33E098u);
    ctx->pc = 0x33E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E090u;
    // 0x33e094: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E090u, 0x33E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E098u;
label_33e098:
    // 0x33e098: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x33e098u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x33e09c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E09Cu;
    SET_GPR_U32(ctx, 31, 0x33E0A4u);
    ctx->pc = 0x33E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E09Cu;
    // 0x33e0a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E09Cu, 0x33E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0A4u;
label_33e0a4:
    // 0x33e0a4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x33e0a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x33e0a8: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E0A8u;
    SET_GPR_U32(ctx, 31, 0x33E0B0u);
    ctx->pc = 0x33E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0A8u;
    // 0x33e0ac: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E0A8u, 0x33E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0B0u;
label_33e0b0:
    // 0x33e0b0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x33e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x33e0b4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E0B4u;
    SET_GPR_U32(ctx, 31, 0x33E0BCu);
    ctx->pc = 0x33E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0B4u;
    // 0x33e0b8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E0B4u, 0x33E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0BCu;
label_33e0bc:
    // 0x33e0bc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x33e0bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x33e0c0: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E0C0u;
    SET_GPR_U32(ctx, 31, 0x33E0C8u);
    ctx->pc = 0x33E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0C0u;
    // 0x33e0c4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E0C0u, 0x33E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0C8u;
label_33e0c8:
    // 0x33e0c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x33e0c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x33e0cc: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E0CCu;
    SET_GPR_U32(ctx, 31, 0x33E0D4u);
    ctx->pc = 0x33E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0CCu;
    // 0x33e0d0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E0CCu, 0x33E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0D4u;
label_33e0d4:
    // 0x33e0d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x33e0d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e0d8: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x33E0D8u;
    SET_GPR_U32(ctx, 31, 0x33E0E0u);
    ctx->pc = 0x33E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0D8u;
    // 0x33e0dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x33E0D8u, 0x33E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0E0u;
label_33e0e0:
    // 0x33e0e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33e0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e0e4:
    // 0x33e0e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33e0e8: 0x8c43c344  lw          $v1, -0x3CBC($v0)
    ctx->pc = 0x33e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FC344u));
    // 0x33e0ec: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x33E0ECu;
    {
        const bool branch_taken_0x33e0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0ECu;
        // 0x33e0f0: 0x8fa200ac  lw          $v0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0ec) {
            ctx->pc = 0x33E194u;
            goto label_33e194;
        }
    }
    ctx->pc = 0x33E0F4u;
    // 0x33e0f4: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x33e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x33e0f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x33e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33e0fc: 0x2d72821  addu        $a1, $s6, $s7
    ctx->pc = 0x33e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x33e100: 0x3c23021  addu        $a2, $fp, $v0
    ctx->pc = 0x33e100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x33e104: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x33e104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x33e108: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e10c: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x33e10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x33e110: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x33e110u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33e114: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x33e114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e118: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33E118u;
    {
        const bool branch_taken_0x33e118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e118) {
            ctx->pc = 0x33E11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E118u;
            // 0x33e11c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E120u;
            goto label_33e120;
        }
    }
    ctx->pc = 0x33E120u;
label_33e120:
    // 0x33e120: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33e120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e124: 0x1812  mflo        $v1
    ctx->pc = 0x33e124u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33e128: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x33e128u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x33e12c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x33e12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e130: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x33e130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e134: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x33e134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e138: 0x2812  mflo        $a1
    ctx->pc = 0x33e138u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x33e13c: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x33e13cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x33e140: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33e140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e144: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x33e144u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e148: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x33e148u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e14c: 0x3012  mflo        $a2
    ctx->pc = 0x33e14cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33e150: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33e150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e154: 0xafb300ac  sw          $s3, 0xAC($sp)
    ctx->pc = 0x33e154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 19));
    // 0x33e158: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33E158u;
    {
        const bool branch_taken_0x33e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E158u;
        // 0x33e15c: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e158) {
            ctx->pc = 0x33E194u;
            goto label_33e194;
        }
    }
    ctx->pc = 0x33E160u;
label_33e160:
    // 0x33e160: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33e160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33e164: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33e168: 0x90752cc9  lbu         $s5, 0x2CC9($v1)
    ctx->pc = 0x33e168u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)FAST_READ8(0x482CC9u));
    // 0x33e16c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x33e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x33e170: 0x90542cc8  lbu         $s4, 0x2CC8($v0)
    ctx->pc = 0x33e170u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)FAST_READ8(0x482CC8u));
    // 0x33e174: 0x90922cca  lbu         $s2, 0x2CCA($a0)
    ctx->pc = 0x33e174u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)FAST_READ8(0x482CCAu));
    // 0x33e178: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x33e178u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e17c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x33e17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33e180: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x33e180u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e184: 0xafb500ac  sw          $s5, 0xAC($sp)
    ctx->pc = 0x33e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 21));
    // 0x33e188: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x33e188u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e18c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x33e18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e190: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x33e190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e194:
    // 0x33e194: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x33e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33e198: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e19c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x33e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e1a0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x33e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33e1a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33e1a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e1a8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x33e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e1ac: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33e1b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e1b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e1b4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x33e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e1b8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33e1bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33e1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33e1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33e1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e1c4: 0xc4742cb8  lwc1        $f20, 0x2CB8($v1)
    ctx->pc = 0x33e1c4u;
    { uint32_t bits = FAST_READ32(0x482CB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33e1c8: 0x0  nop
    ctx->pc = 0x33e1c8u;
    // NOP
    // 0x33e1cc: 0x0  nop
    ctx->pc = 0x33e1ccu;
    // NOP
    // 0x33e1d0: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x33e1d0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x33e1d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33E1D4u;
    SET_GPR_U32(ctx, 31, 0x33E1DCu);
    ctx->pc = 0x33E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E1D4u;
    // 0x33e1d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33E1D4u, 0x33E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E1DCu;
label_33e1dc:
    // 0x33e1dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33E1DCu;
    SET_GPR_U32(ctx, 31, 0x33E1E4u);
    ctx->pc = 0x33E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E1DCu;
    // 0x33e1e0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33E1DCu, 0x33E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E1E4u;
label_33e1e4:
    // 0x33e1e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33E1E4u;
    SET_GPR_U32(ctx, 31, 0x33E1ECu);
    ctx->pc = 0x33E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E1E4u;
    // 0x33e1e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33E1E4u, 0x33E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E1ECu;
label_33e1ec:
    // 0x33e1ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x33e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33e1f0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x33e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33e1f4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33e1f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33e1f8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33e1f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e1fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e1fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e200: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e204: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x33e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e208: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x33e208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33e20c: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x33e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e210: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33e214: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x33e214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e218: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x33e218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e21c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x33e21cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e220: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x33e220u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e224: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x33e224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33e228: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x33e228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33e22c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e22cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e230: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33e230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e234: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x33e234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x33e238: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x33e238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33e23c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33e23cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e240: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33e240u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e244: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e244u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e248: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e24c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e250: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x33e250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33e254: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x33e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e258: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x33e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e25c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e260: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33e260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e264: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x33e264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e268: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x33e268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33e26c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x33e26cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33e270: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e274: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x33e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e278: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x33e278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33e27c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x33e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x33e280: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x33e280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33e284: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x33e284u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33e288: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x33e288u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33e28c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x33e28cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e290: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e294: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x33e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e298: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x33e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e29c: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x33e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33e2a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33e2a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x33e2a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x33e2a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x33e2a8: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x33e2a8u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x33e2ac: 0x46060184  c1          0x60184
    ctx->pc = 0x33e2acu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x33e2b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33e2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e2b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33e2b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33e2b8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33e2b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e2bc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e2bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e2c0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e2c4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e2c8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x33e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e2cc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x33e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e2d0: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e2d4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33e2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e2d8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x33e2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e2dc: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x33e2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33e2e0: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x33e2e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33e2e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e2e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e2e8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e2ec: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x33e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x33e2f0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33e2f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e2f4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33e2f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e2f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e2f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e2fc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e300: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33e300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e304: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x33e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e308: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x33e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e30c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e310: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33e310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e314: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x33e314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e318: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x33e318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33e31c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x33e31cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33e320: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e324: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x33e324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e328: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x33e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x33e32c: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x33e32cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33e330: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x33e330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33e334: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x33e334u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33e338: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x33e338u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e33c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e340: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x33e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e344: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x33e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e348: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x33e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33e34c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33e34cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x33e350: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x33e350u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x33e354: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x33e354u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x33e358: 0x46050144  c1          0x50144
    ctx->pc = 0x33e358u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x33e35c: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x33e35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e360: 0x0  nop
    ctx->pc = 0x33e360u;
    // NOP
    // 0x33e364: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33E364u;
    {
        const bool branch_taken_0x33e364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e364) {
            ctx->pc = 0x33E368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E364u;
            // 0x33e368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E36Cu;
            goto label_33e36c;
        }
    }
    ctx->pc = 0x33E36Cu;
label_33e36c:
    // 0x33e36c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x33e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33e370: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x33e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33e374: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e378: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33e378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e37c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e37cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e380: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e384: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e388: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33e38c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x33e38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e390: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x33e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e394: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e398: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33e398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e39c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x33e39cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e3a0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x33e3a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33e3a4: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x33e3a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33e3a8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33e3a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e3ac: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e3b0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x33e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x33e3b4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x33e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33e3b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e3bc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33e3bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e3c0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e3c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e3c4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e3c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33e3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e3cc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x33e3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e3d0: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x33e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e3d4: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e3d8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33e3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e3dc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x33e3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e3e0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x33e3e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33e3e4: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x33e3e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33e3e8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33e3e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e3ec: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x33e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e3f0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x33e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x33e3f4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x33e3f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33e3f8: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x33e3f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33e3fc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x33e3fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33e400: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x33e400u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e404: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e408: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x33e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e40c: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x33e40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e410: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x33e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33e414: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33e414u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x33e418: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x33e418u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x33e41c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x33e41cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x33e420: 0x46000004  c1          0x4
    ctx->pc = 0x33e420u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x33e424: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x33e424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e428: 0x0  nop
    ctx->pc = 0x33e428u;
    // NOP
    // 0x33e42c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33E42Cu;
    {
        const bool branch_taken_0x33e42c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e42c) {
            ctx->pc = 0x33E444u;
            goto label_33e444;
        }
    }
    ctx->pc = 0x33E434u;
    // 0x33e434: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x33e434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e438: 0x0  nop
    ctx->pc = 0x33e438u;
    // NOP
    // 0x33e43c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x33E43Cu;
    {
        const bool branch_taken_0x33e43c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e43c) {
            ctx->pc = 0x33E440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E43Cu;
            // 0x33e440: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E444u;
            goto label_33e444;
        }
    }
    ctx->pc = 0x33E444u;
label_33e444:
    // 0x33e444: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x33E444u;
    {
        const bool branch_taken_0x33e444 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E444u;
        // 0x33e448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e444) {
            ctx->pc = 0x33E474u;
            goto label_33e474;
        }
    }
    ctx->pc = 0x33E44Cu;
    // 0x33e44c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x33e450: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x33e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e454: 0x24436fd0  addiu       $v1, $v0, 0x6FD0
    ctx->pc = 0x33e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28624));
    // 0x33e458: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x33e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33e45c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33e45cu;
    { uint32_t bits = FAST_READ32(0x5B6FD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e460: 0xc4416fd0  lwc1        $f1, 0x6FD0($v0)
    ctx->pc = 0x33e460u;
    { uint32_t bits = FAST_READ32(0x5B6FD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e464: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x33e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e468: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x33e468u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x33e46c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33E46Cu;
    {
        const bool branch_taken_0x33e46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E46Cu;
        // 0x33e470: 0xc7a60034  lwc1        $f6, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e46c) {
            ctx->pc = 0x33E4A0u;
            goto label_33e4a0;
        }
    }
    ctx->pc = 0x33E474u;
label_33e474:
    // 0x33e474: 0x14c2001a  bne         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33E474u;
    {
        const bool branch_taken_0x33e474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E474u;
        // 0x33e478: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e474) {
            ctx->pc = 0x33E4E0u;
            goto label_33e4e0;
        }
    }
    ctx->pc = 0x33E47Cu;
    // 0x33e47c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x33e480: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x33e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e484: 0x24436fd0  addiu       $v1, $v0, 0x6FD0
    ctx->pc = 0x33e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28624));
    // 0x33e488: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x33e488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33e48c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x33e48cu;
    { uint32_t bits = FAST_READ32(0x5B6FD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e490: 0xc4416fd0  lwc1        $f1, 0x6FD0($v0)
    ctx->pc = 0x33e490u;
    { uint32_t bits = FAST_READ32(0x5B6FD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e494: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x33e494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e498: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x33e498u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x33e49c: 0xc7a60038  lwc1        $f6, 0x38($sp)
    ctx->pc = 0x33e49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_33e4a0:
    // 0x33e4a0: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x33e4a0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x33e4a4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x33e4a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x33e4a8: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x33e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33e4ac: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x33e4acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x33e4b0: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x33e4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33e4b4: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x33e4b4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x33e4b8: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x33e4b8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x33e4bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33e4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33e4c0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33e4c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33e4c4: 0x46143f42  mul.s       $f29, $f7, $f20
    ctx->pc = 0x33e4c4u;
    ctx->f[29] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x33e4c8: 0x46141f02  mul.s       $f28, $f3, $f20
    ctx->pc = 0x33e4c8u;
    ctx->f[28] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x33e4cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x33e4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x33e4d0: 0x461427c2  mul.s       $f31, $f4, $f20
    ctx->pc = 0x33e4d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x33e4d4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x33e4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x33e4d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33E4D8u;
    {
        const bool branch_taken_0x33e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4D8u;
        // 0x33e4dc: 0x46142f82  mul.s       $f30, $f5, $f20 (Delay Slot)
        ctx->f[30] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4d8) {
            ctx->pc = 0x33E548u;
            goto label_33e548;
        }
    }
    ctx->pc = 0x33E4E0u;
label_33e4e0:
    // 0x33e4e0: 0x14c2001a  bne         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33E4E0u;
    {
        const bool branch_taken_0x33e4e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4E0u;
        // 0x33e4e4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4e0) {
            ctx->pc = 0x33E54Cu;
            goto label_33e54c;
        }
    }
    ctx->pc = 0x33E4E8u;
    // 0x33e4e8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x33e4ec: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x33e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33e4f0: 0x24426fd0  addiu       $v0, $v0, 0x6FD0
    ctx->pc = 0x33e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28624));
    // 0x33e4f4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x33e4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e4f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33e4f8u;
    { uint32_t bits = FAST_READ32(0x5B6FD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e4fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33e4fcu;
    { uint32_t bits = FAST_READ32(0x5B6FD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e500: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x33e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e504: 0x46060981  sub.s       $f6, $f1, $f6
    ctx->pc = 0x33e504u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x33e508: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x33e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33e50c: 0x460308c1  sub.s       $f3, $f1, $f3
    ctx->pc = 0x33e50cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33e510: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x33e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33e514: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33e514u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33e518: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x33e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33e51c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x33e51cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x33e520: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x33e520u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x33e524: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x33e524u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x33e528: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33e528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33e52c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33e52cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33e530: 0x46143f42  mul.s       $f29, $f7, $f20
    ctx->pc = 0x33e530u;
    ctx->f[29] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x33e534: 0x46143702  mul.s       $f28, $f6, $f20
    ctx->pc = 0x33e534u;
    ctx->f[28] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x33e538: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x33e538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x33e53c: 0x46142fc2  mul.s       $f31, $f5, $f20
    ctx->pc = 0x33e53cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x33e540: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x33e540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x33e544: 0x46141f82  mul.s       $f30, $f3, $f20
    ctx->pc = 0x33e544u;
    ctx->f[30] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_33e548:
    // 0x33e548: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33e548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33e54c:
    // 0x33e54c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33e54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33e550: 0xc4402cc4  lwc1        $f0, 0x2CC4($v0)
    ctx->pc = 0x33e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e554: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x33e554u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e558: 0x0  nop
    ctx->pc = 0x33e558u;
    // NOP
    // 0x33e55c: 0x4501009f  bc1t        . + 4 + (0x9F << 2)
    ctx->pc = 0x33E55Cu;
    {
        const bool branch_taken_0x33e55c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E55Cu;
        // 0x33e560: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e55c) {
            ctx->pc = 0x33E7DCu;
            goto label_33e7dc;
        }
    }
    ctx->pc = 0x33E564u;
    // 0x33e564: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x33e564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e56c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33E56Cu;
    SET_GPR_U32(ctx, 31, 0x33E574u);
    ctx->pc = 0x33E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E56Cu;
    // 0x33e570: 0xe7b40074  swc1        $f20, 0x74($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33E56Cu, 0x33E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E574u;
label_33e574:
    // 0x33e574: 0x461de802  mul.s       $f0, $f29, $f29
    ctx->pc = 0x33e574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[29]);
    // 0x33e578: 0xe7bd0070  swc1        $f29, 0x70($sp)
    ctx->pc = 0x33e578u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e57c: 0x461ce042  mul.s       $f1, $f28, $f28
    ctx->pc = 0x33e57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[28]);
    // 0x33e580: 0xe7bc0074  swc1        $f28, 0x74($sp)
    ctx->pc = 0x33e580u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e584: 0x4614e832  c.eq.s      $f29, $f20
    ctx->pc = 0x33e584u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[29], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e588: 0xe7bd0080  swc1        $f29, 0x80($sp)
    ctx->pc = 0x33e588u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33e58c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x33e58cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33e590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33e590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33e594: 0x0  nop
    ctx->pc = 0x33e594u;
    // NOP
    // 0x33e598: 0x0  nop
    ctx->pc = 0x33e598u;
    // NOP
    // 0x33e59c: 0x46000544  c1          0x544
    ctx->pc = 0x33e59cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x33e5a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33E5A0u;
    {
        const bool branch_taken_0x33e5a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5A0u;
        // 0x33e5a4: 0xe7bc0088  swc1        $f28, 0x88($sp) (Delay Slot)
        { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e5a0) {
            ctx->pc = 0x33E5B8u;
            goto label_33e5b8;
        }
    }
    ctx->pc = 0x33E5A8u;
    // 0x33e5a8: 0x4614e032  c.eq.s      $f28, $f20
    ctx->pc = 0x33e5a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[28], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e5ac: 0x0  nop
    ctx->pc = 0x33e5acu;
    // NOP
    // 0x33e5b0: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x33E5B0u;
    {
        const bool branch_taken_0x33e5b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e5b0) {
            ctx->pc = 0x33E5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E5B0u;
            // 0x33e5b4: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E5E4u;
            goto label_33e5e4;
        }
    }
    ctx->pc = 0x33E5B8u;
label_33e5b8:
    // 0x33e5b8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x33e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33e5bc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e5bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e5c0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x33e5c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e5c4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x33e5c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e5c8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x33e5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e5cc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x33e5ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33e5d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x33e5d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33e5d4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x33e5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e5d8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e5dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33e5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e5e0: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x33e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e5e4:
    // 0x33e5e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x33e5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33e5e8: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x33e5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33e5ec: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x33e5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x33e5f0: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x33e5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x33e5f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x33e5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33e5f8: 0xc0b12d4  jal         func_2C4B50
    ctx->pc = 0x33E5F8u;
    SET_GPR_U32(ctx, 31, 0x33E600u);
    ctx->pc = 0x33E5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E5F8u;
    // 0x33e5fc: 0xc7ae0088  lwc1        $f14, 0x88($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4B50u, 0x33E5F8u, 0x33E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E600u;
label_33e600:
    // 0x33e600: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33e600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33e604: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x33e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e608: 0xc4402cc4  lwc1        $f0, 0x2CC4($v0)
    ctx->pc = 0x33e608u;
    { uint32_t bits = FAST_READ32(0x482CC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e60c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x33e60cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x33e610: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x33E610u;
    SET_GPR_U32(ctx, 31, 0x33E618u);
    ctx->pc = 0x33E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E610u;
    // 0x33e614: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x33E610u, 0x33E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E618u;
label_33e618:
    // 0x33e618: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33e618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33e61c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x33e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e620: 0xc4612cc4  lwc1        $f1, 0x2CC4($v1)
    ctx->pc = 0x33e620u;
    { uint32_t bits = FAST_READ32(0x482CC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e624: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33e624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x33e628: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x33e628u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x33e62c: 0x46150742  mul.s       $f29, $f0, $f21
    ctx->pc = 0x33e62cu;
    ctx->f[29] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33e630: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x33E630u;
    SET_GPR_U32(ctx, 31, 0x33E638u);
    ctx->pc = 0x33E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E630u;
    // 0x33e634: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x33E630u, 0x33E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E638u;
label_33e638:
    // 0x33e638: 0x461ff842  mul.s       $f1, $f31, $f31
    ctx->pc = 0x33e638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[31], ctx->f[31]);
    // 0x33e63c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x33e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x33e640: 0x461ef082  mul.s       $f2, $f30, $f30
    ctx->pc = 0x33e640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[30]);
    // 0x33e644: 0xe7bf0070  swc1        $f31, 0x70($sp)
    ctx->pc = 0x33e644u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e648: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x33e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e64c: 0x46150702  mul.s       $f28, $f0, $f21
    ctx->pc = 0x33e64cu;
    ctx->f[28] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33e650: 0xe7be0074  swc1        $f30, 0x74($sp)
    ctx->pc = 0x33e650u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e654: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x33e654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x33e658: 0xe7bf0080  swc1        $f31, 0x80($sp)
    ctx->pc = 0x33e658u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33e65c: 0x4603f832  c.eq.s      $f31, $f3
    ctx->pc = 0x33e65cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[31], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e660: 0x0  nop
    ctx->pc = 0x33e660u;
    // NOP
    // 0x33e664: 0x0  nop
    ctx->pc = 0x33e664u;
    // NOP
    // 0x33e668: 0x46010544  c1          0x10544
    ctx->pc = 0x33e668u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x33e66c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33E66Cu;
    {
        const bool branch_taken_0x33e66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E66Cu;
        // 0x33e670: 0xe7be0088  swc1        $f30, 0x88($sp) (Delay Slot)
        { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e66c) {
            ctx->pc = 0x33E684u;
            goto label_33e684;
        }
    }
    ctx->pc = 0x33E674u;
    // 0x33e674: 0x4603f032  c.eq.s      $f30, $f3
    ctx->pc = 0x33e674u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[30], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e678: 0x0  nop
    ctx->pc = 0x33e678u;
    // NOP
    // 0x33e67c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x33E67Cu;
    {
        const bool branch_taken_0x33e67c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e67c) {
            ctx->pc = 0x33E680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E67Cu;
            // 0x33e680: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E6A8u;
            goto label_33e6a8;
        }
    }
    ctx->pc = 0x33E684u;
label_33e684:
    // 0x33e684: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x33e684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e688: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x33e688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e68c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x33e68cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e690: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x33e690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e694: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x33e694u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33e698: 0x4a0003bf  vwaitq
    ctx->pc = 0x33e698u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33e69c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x33e69cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e6a0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e6a4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x33e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e6a8:
    // 0x33e6a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x33e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33e6ac: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x33e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33e6b0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x33e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x33e6b4: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x33e6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x33e6b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x33e6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33e6bc: 0xc0b12d4  jal         func_2C4B50
    ctx->pc = 0x33E6BCu;
    SET_GPR_U32(ctx, 31, 0x33E6C4u);
    ctx->pc = 0x33E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6BCu;
    // 0x33e6c0: 0xc7ae0088  lwc1        $f14, 0x88($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4B50u, 0x33E6BCu, 0x33E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E6C4u;
label_33e6c4:
    // 0x33e6c4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x33e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x33e6c8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x33e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e6cc: 0xc4802cc4  lwc1        $f0, 0x2CC4($a0)
    ctx->pc = 0x33e6ccu;
    { uint32_t bits = FAST_READ32(0x482CC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e6d0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x33e6d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x33e6d4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x33E6D4u;
    SET_GPR_U32(ctx, 31, 0x33E6DCu);
    ctx->pc = 0x33E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6D4u;
    // 0x33e6d8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x33E6D4u, 0x33E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E6DCu;
label_33e6dc:
    // 0x33e6dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33e6e0: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x33e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e6e4: 0xc4412cc4  lwc1        $f1, 0x2CC4($v0)
    ctx->pc = 0x33e6e4u;
    { uint32_t bits = FAST_READ32(0x482CC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e6e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33e6e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x33e6ec: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x33e6ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x33e6f0: 0x461507c2  mul.s       $f31, $f0, $f21
    ctx->pc = 0x33e6f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33e6f4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x33E6F4u;
    SET_GPR_U32(ctx, 31, 0x33E6FCu);
    ctx->pc = 0x33E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E6F4u;
    // 0x33e6f8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x33E6F4u, 0x33E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E6FCu;
label_33e6fc:
    // 0x33e6fc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x33e6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e700: 0x46150782  mul.s       $f30, $f0, $f21
    ctx->pc = 0x33e700u;
    ctx->f[30] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33e704: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x33e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e708: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x33e708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x33e70c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x33e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x33e710: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x33e710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x33e714: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x33e714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33e718: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x33e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e71c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x33e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e720: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x33e720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x33e724: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x33e724u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e728: 0x46032032  c.eq.s      $f4, $f3
    ctx->pc = 0x33e728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e72c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x33e72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e730: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x33e730u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33e734: 0x0  nop
    ctx->pc = 0x33e734u;
    // NOP
    // 0x33e738: 0x0  nop
    ctx->pc = 0x33e738u;
    // NOP
    // 0x33e73c: 0x46010544  c1          0x10544
    ctx->pc = 0x33e73cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x33e740: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33E740u;
    {
        const bool branch_taken_0x33e740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E740u;
        // 0x33e744: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e740) {
            ctx->pc = 0x33E758u;
            goto label_33e758;
        }
    }
    ctx->pc = 0x33E748u;
    // 0x33e748: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x33e748u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e74c: 0x0  nop
    ctx->pc = 0x33e74cu;
    // NOP
    // 0x33e750: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x33E750u;
    {
        const bool branch_taken_0x33e750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e750) {
            ctx->pc = 0x33E754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E750u;
            // 0x33e754: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E77Cu;
            goto label_33e77c;
        }
    }
    ctx->pc = 0x33E758u;
label_33e758:
    // 0x33e758: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x33e758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e75c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x33e75cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e760: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x33e760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e764: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x33e764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33e768: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x33e768u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33e76c: 0x4a0003bf  vwaitq
    ctx->pc = 0x33e76cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33e770: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x33e770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e774: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e778: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x33e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33e77c:
    // 0x33e77c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x33e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33e780: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x33e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33e784: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x33e784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x33e788: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x33e788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x33e78c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x33e78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33e790: 0xc0b12d4  jal         func_2C4B50
    ctx->pc = 0x33E790u;
    SET_GPR_U32(ctx, 31, 0x33E798u);
    ctx->pc = 0x33E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E790u;
    // 0x33e794: 0xc7ae0088  lwc1        $f14, 0x88($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4B50u, 0x33E790u, 0x33E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E798u;
label_33e798:
    // 0x33e798: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33e798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33e79c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x33e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e7a0: 0xc4402cc4  lwc1        $f0, 0x2CC4($v0)
    ctx->pc = 0x33e7a0u;
    { uint32_t bits = FAST_READ32(0x482CC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e7a4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x33e7a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x33e7a8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x33E7A8u;
    SET_GPR_U32(ctx, 31, 0x33E7B0u);
    ctx->pc = 0x33E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E7A8u;
    // 0x33e7ac: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x33E7A8u, 0x33E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7B0u;
label_33e7b0:
    // 0x33e7b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33e7b4: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x33e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e7b8: 0xc4612cc4  lwc1        $f1, 0x2CC4($v1)
    ctx->pc = 0x33e7b8u;
    { uint32_t bits = FAST_READ32(0x482CC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e7bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33e7bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x33e7c0: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x33e7c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x33e7c4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33e7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33e7c8: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x33e7c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x33e7cc: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x33E7CCu;
    SET_GPR_U32(ctx, 31, 0x33E7D4u);
    ctx->pc = 0x33E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E7CCu;
    // 0x33e7d0: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x33E7CCu, 0x33E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7D4u;
label_33e7d4:
    // 0x33e7d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33e7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33e7d8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x33e7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_33e7dc:
    // 0x33e7dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33e7e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33e7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33e7e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33e7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e7e8: 0xc4402cbc  lwc1        $f0, 0x2CBC($v0)
    ctx->pc = 0x33e7e8u;
    { uint32_t bits = FAST_READ32(0x482CBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e7ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33e7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e7f0: 0x0  nop
    ctx->pc = 0x33e7f0u;
    // NOP
    // 0x33e7f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x33E7F4u;
    {
        const bool branch_taken_0x33e7f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e7f4) {
            ctx->pc = 0x33E814u;
            goto label_33e814;
        }
    }
    ctx->pc = 0x33E7FCu;
    // 0x33e7fc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33e7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e800: 0x4600ef42  mul.s       $f29, $f29, $f0
    ctx->pc = 0x33e800u;
    ctx->f[29] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x33e804: 0x4600ffc2  mul.s       $f31, $f31, $f0
    ctx->pc = 0x33e804u;
    ctx->f[31] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
    // 0x33e808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33e808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e80c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33E80Cu;
    {
        const bool branch_taken_0x33e80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E80Cu;
        // 0x33e810: 0xe7a100a4  swc1        $f1, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e80c) {
            ctx->pc = 0x33E84Cu;
            goto label_33e84c;
        }
    }
    ctx->pc = 0x33E814u;
label_33e814:
    // 0x33e814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33e814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e818: 0x0  nop
    ctx->pc = 0x33e818u;
    // NOP
    // 0x33e81c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x33E81Cu;
    {
        const bool branch_taken_0x33e81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E81Cu;
        // 0x33e820: 0xc7a200a8  lwc1        $f2, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e81c) {
            ctx->pc = 0x33E84Cu;
            goto label_33e84c;
        }
    }
    ctx->pc = 0x33E824u;
    // 0x33e824: 0x0  nop
    ctx->pc = 0x33e824u;
    // NOP
    // 0x33e828: 0x0  nop
    ctx->pc = 0x33e828u;
    // NOP
    // 0x33e82c: 0x4600e703  div.s       $f28, $f28, $f0
    ctx->pc = 0x33e82cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = FPU_DIV_S(ctx->f[28], ctx->f[0]); }
    // 0x33e830: 0x0  nop
    ctx->pc = 0x33e830u;
    // NOP
    // 0x33e834: 0x0  nop
    ctx->pc = 0x33e834u;
    // NOP
    // 0x33e838: 0x4600f783  div.s       $f30, $f30, $f0
    ctx->pc = 0x33e838u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[30] = FPU_DIV_S(ctx->f[30], ctx->f[0]); }
    // 0x33e83c: 0x0  nop
    ctx->pc = 0x33e83cu;
    // NOP
    // 0x33e840: 0x0  nop
    ctx->pc = 0x33e840u;
    // NOP
    // 0x33e844: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x33e844u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x33e848: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x33e848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_33e84c:
    // 0x33e84c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x33e84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x33e850: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x33e850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x33e854: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33e854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e858: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x33e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33e85c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x33e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e860: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x33e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33e864: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x33e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e868: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x33e868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x33e86c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x33e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33e870: 0xc7a5000c  lwc1        $f5, 0xC($sp)
    ctx->pc = 0x33e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33e874: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x33e874u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x33e878: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x33e878u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x33e87c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33e87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33e880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33e880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e884: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x33e884u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33e888: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x33e888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33e88c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x33e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e890: 0x4600ef40  add.s       $f29, $f29, $f0
    ctx->pc = 0x33e890u;
    ctx->f[29] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    // 0x33e894: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x33e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e898: 0x4600e700  add.s       $f28, $f28, $f0
    ctx->pc = 0x33e898u;
    ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[0]);
    // 0x33e89c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33e89cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33e8a0: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x33e8a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33e8a4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x33e8a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33e8a8: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x33e8a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x33e8ac: 0x4600ffc0  add.s       $f31, $f31, $f0
    ctx->pc = 0x33e8acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[0]);
    // 0x33e8b0: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x33e8b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x33e8b4: 0x4600f780  add.s       $f30, $f30, $f0
    ctx->pc = 0x33e8b4u;
    ctx->f[30] = FPU_ADD_S(ctx->f[30], ctx->f[0]);
    // 0x33e8b8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x33e8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x33e8bc: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x33e8bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x33e8c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33e8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e8c4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33e8c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e8c8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e8c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e8cc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e8d0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e8d4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x33e8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e8d8: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x33e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e8dc: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x33e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e8e0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x33e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33e8e4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x33e8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33e8e8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x33e8e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x33e8ec: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e8ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x33e8f0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x33e8f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e8f4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x33e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e8f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x33e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33e8fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33e8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e900: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33e900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e904: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33e904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e908: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e90c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e910: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e914: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x33e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e918: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x33e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e91c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x33e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e920: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x33e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33e924: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x33e924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33e928: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x33e928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x33e92c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e92cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x33e930: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x33e930u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e934: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x33e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e938: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33e93c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33e93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e940: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33e940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e944: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x33e944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e948: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33e948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33e94c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e950: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e954: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x33e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e958: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x33e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e95c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x33e95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33e960: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x33e960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33e964: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x33e964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33e968: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x33e968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x33e96c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x33e96cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x33e970: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x33e970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33e974: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x33e974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33e978: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x33e978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x33e97c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x33e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e980: 0x8cc42cd0  lw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33e980u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33e984: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x33e984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x33e988: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x33e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e990: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x33e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e994: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x33e994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x33e998: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x33e998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x33e99c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x33e99cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x33e9a0: 0x8cc32cd0  lw          $v1, 0x2CD0($a2)
    ctx->pc = 0x33e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33e9a4: 0x90e42ccb  lbu         $a0, 0x2CCB($a3)
    ctx->pc = 0x33e9a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x482CCBu));
    // 0x33e9a8: 0xa0760008  sb          $s6, 0x8($v1)
    ctx->pc = 0x33e9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 22));
    // 0x33e9ac: 0xa064000b  sb          $a0, 0xB($v1)
    ctx->pc = 0x33e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x33e9b0: 0xa0770009  sb          $s7, 0x9($v1)
    ctx->pc = 0x33e9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 23));
    // 0x33e9b4: 0xa071000a  sb          $s1, 0xA($v1)
    ctx->pc = 0x33e9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 17));
    // 0x33e9b8: 0x8cc42cd0  lw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33e9bc: 0xe49d0000  swc1        $f29, 0x0($a0)
    ctx->pc = 0x33e9bcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33e9c0: 0x8cc32cd0  lw          $v1, 0x2CD0($a2)
    ctx->pc = 0x33e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33e9c4: 0xe47c0004  swc1        $f28, 0x4($v1)
    ctx->pc = 0x33e9c4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33e9c8: 0x8cc42cd0  lw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33e9cc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x33e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33e9d0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x33e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e9d4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x33e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x33e9d8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x33e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e9dc: 0xacc42cd0  sw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33e9dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CD0u, _value); } while (0);
    // 0x33e9e0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x33e9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x33e9e4: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x33e9e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x33e9e8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x33e9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x33e9ec: 0x90e52ccb  lbu         $a1, 0x2CCB($a3)
    ctx->pc = 0x33e9ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x482CCBu));
    // 0x33e9f0: 0x8cc32cd0  lw          $v1, 0x2CD0($a2)
    ctx->pc = 0x33e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33e9f4: 0xa065000b  sb          $a1, 0xB($v1)
    ctx->pc = 0x33e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x33e9f8: 0xa07e0008  sb          $fp, 0x8($v1)
    ctx->pc = 0x33e9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 30));
    // 0x33e9fc: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x33e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x33ea00: 0xa073000a  sb          $s3, 0xA($v1)
    ctx->pc = 0x33ea00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 19));
    // 0x33ea04: 0xa0640009  sb          $a0, 0x9($v1)
    ctx->pc = 0x33ea04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ea08: 0x8cc42cd0  lw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33ea0c: 0xe49f0000  swc1        $f31, 0x0($a0)
    ctx->pc = 0x33ea0cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ea10: 0x8cc32cd0  lw          $v1, 0x2CD0($a2)
    ctx->pc = 0x33ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33ea14: 0xe47e0004  swc1        $f30, 0x4($v1)
    ctx->pc = 0x33ea14u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33ea18: 0x8cc42cd0  lw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33ea1c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x33ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ea20: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x33ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ea24: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x33ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x33ea28: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x33ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ea2c: 0xacc42cd0  sw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33ea2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CD0u, _value); } while (0);
    // 0x33ea30: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x33ea30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x33ea34: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x33ea34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x33ea38: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x33ea38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x33ea3c: 0x8cc32cd0  lw          $v1, 0x2CD0($a2)
    ctx->pc = 0x33ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33ea40: 0x90e52ccb  lbu         $a1, 0x2CCB($a3)
    ctx->pc = 0x33ea40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x482CCBu));
    // 0x33ea44: 0xa0740008  sb          $s4, 0x8($v1)
    ctx->pc = 0x33ea44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 20));
    // 0x33ea48: 0xa065000b  sb          $a1, 0xB($v1)
    ctx->pc = 0x33ea48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x33ea4c: 0xa0750009  sb          $s5, 0x9($v1)
    ctx->pc = 0x33ea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 21));
    // 0x33ea50: 0xa072000a  sb          $s2, 0xA($v1)
    ctx->pc = 0x33ea50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 18));
    // 0x33ea54: 0x8cc42cd0  lw          $a0, 0x2CD0($a2)
    ctx->pc = 0x33ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33ea58: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x33ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ea5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ea60: 0x8cc52cd0  lw          $a1, 0x2CD0($a2)
    ctx->pc = 0x33ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33ea64: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x33ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ea68: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x33ea68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x33ea6c: 0x8cc32cd0  lw          $v1, 0x2CD0($a2)
    ctx->pc = 0x33ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CD0u));
    // 0x33ea70: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33ea74: 0xacc32cd0  sw          $v1, 0x2CD0($a2)
    ctx->pc = 0x33ea74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CD0u, _value); } while (0);
label_33ea78:
    // 0x33ea78: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x33ea78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33ea7c: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x33ea7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33ea80: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x33ea80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33ea84: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x33ea84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33ea88: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x33ea88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33ea8c: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x33ea8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x33ea90: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x33ea90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33ea94: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x33ea94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33ea98: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x33ea98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33ea9c: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x33ea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x33eaa0: 0xc7bf0158  lwc1        $f31, 0x158($sp)
    ctx->pc = 0x33eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x33eaa4: 0xc7be0150  lwc1        $f30, 0x150($sp)
    ctx->pc = 0x33eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x33eaa8: 0xc7bd0148  lwc1        $f29, 0x148($sp)
    ctx->pc = 0x33eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x33eaac: 0xc7bc0140  lwc1        $f28, 0x140($sp)
    ctx->pc = 0x33eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33eab0: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x33eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33eab4: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x33eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33eab8: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x33eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33eabc: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x33eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33eac0: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x33eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33eac4: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x33eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33eac8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x33eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33eacc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x33eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33ead0: 0x3e00008  jr          $ra
    ctx->pc = 0x33EAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAD0u;
        // 0x33ead4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EAD8u;
}
