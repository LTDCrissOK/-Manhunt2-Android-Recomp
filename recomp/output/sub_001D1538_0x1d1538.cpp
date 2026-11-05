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

// Function: sub_001D1538
// Address: 0x1d1538 - 0x1d19b8
void sub_001D1538_0x1d1538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1538_0x1d1538");
#endif

    switch (ctx->pc) {
        case 0x1d15b8u: goto label_1d15b8;
        case 0x1d1600u: goto label_1d1600;
        case 0x1d1668u: goto label_1d1668;
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16fcu: goto label_1d16fc;
        case 0x1d1708u: goto label_1d1708;
        case 0x1d1820u: goto label_1d1820;
        case 0x1d188cu: goto label_1d188c;
        case 0x1d194cu: goto label_1d194c;
        case 0x1d1978u: goto label_1d1978;
        default: break;
    }

    ctx->pc = 0x1d1538u;

    // 0x1d1538: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d153c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d1540: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x1d1540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x1d1544: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1d1544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1d1548: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1d1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1d154c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1d154cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d1550: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1d1550u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1d1554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1558: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1d1558u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1d155c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1d155cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1560: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1d1560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1d1564: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1d1564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1d1568: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1d1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1d156c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1d156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1d1570: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1d1570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1d1574: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1d1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1d1578: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1d1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1d157c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1d157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x1d1580: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1d1580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1d1584: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1d1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1d1588: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1d1588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1d158c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1d158cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d1590: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1594: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x1d1594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x1d1598: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x1d1598u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x1d159c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1d159cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d15a0: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x1d15a0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x1d15a4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1d15a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d15a8: 0x827e0020  lb          $fp, 0x20($s3)
    ctx->pc = 0x1d15a8u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1d15ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d15acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d15b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D15B0u;
    SET_GPR_U32(ctx, 31, 0x1D15B8u);
    ctx->pc = 0x1D15B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D15B0u;
    // 0x1d15b4: 0x7fa50070  sq          $a1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D15B0u, 0x1D15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D15B8u;
label_1d15b8:
    // 0x1d15b8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1d15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1d15bc: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x1d15bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d15c0: 0x24625b00  addiu       $v0, $v1, 0x5B00
    ctx->pc = 0x1d15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23296));
    // 0x1d15c4: 0xc4625b00  lwc1        $f2, 0x5B00($v1)
    ctx->pc = 0x1d15c4u;
    { uint32_t bits = FAST_READ32(0x575B00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d15c8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1d15c8u;
    { uint32_t bits = FAST_READ32(0x575B0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d15cc: 0x32830010  andi        $v1, $s4, 0x10
    ctx->pc = 0x1d15ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x1d15d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d15d0u;
    { uint32_t bits = FAST_READ32(0x575B04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d15d4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1d15d4u;
    { uint32_t bits = FAST_READ32(0x575B08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d15d8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1d15d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d15dc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d15dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1d15e0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1d15e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d15e4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D15E4u;
    {
        const bool branch_taken_0x1d15e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15E4u;
        // 0x1d15e8: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15e4) {
            ctx->pc = 0x1D1638u;
            goto label_1d1638;
        }
    }
    ctx->pc = 0x1D15ECu;
    // 0x1d15ec: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d15f0: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d15f4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1d15f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d15f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d15fc: 0x0  nop
    ctx->pc = 0x1d15fcu;
    // NOP
label_1d1600:
    // 0x1d1600: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x1d1600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1d1604: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d1604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d1608: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1608u;
    {
        const bool branch_taken_0x1d1608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1608u;
        // 0x1d160c: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1608) {
            ctx->pc = 0x1D1624u;
            goto label_1d1624;
        }
    }
    ctx->pc = 0x1D1610u;
    // 0x1d1610: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1d1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1d1614: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1614u;
    {
        const bool branch_taken_0x1d1614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1614) {
            ctx->pc = 0x1D1618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1614u;
            // 0x1d1618: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1628u;
            goto label_1d1628;
        }
    }
    ctx->pc = 0x1D161Cu;
    // 0x1d161c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1620: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x1d1620u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_1d1624:
    // 0x1d1624: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1d1624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1628:
    // 0x1d1628: 0x5620fff5  bnel        $s1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D1628u;
    {
        const bool branch_taken_0x1d1628 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1628) {
            ctx->pc = 0x1D162Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1628u;
            // 0x1d162c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1600;
        }
    }
    ctx->pc = 0x1D1630u;
    // 0x1d1630: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d1630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1634: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1d1634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1638:
    // 0x1d1638: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d1638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d163c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x1d163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d1640: 0xac408e88  sw          $zero, -0x7178($v0)
    ctx->pc = 0x1d1640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F8E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8E88u, _value); } while (0);
    // 0x1d1644: 0x33d70010  andi        $s7, $fp, 0x10
    ctx->pc = 0x1d1644u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x1d1648: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1d1648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d164c: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1d164cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d1650: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1d1650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1654: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d1654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d1658: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1d1658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d165c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1d165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1d1660: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1d1660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1d1664: 0x9632002a  lhu         $s2, 0x2A($s1)
    ctx->pc = 0x1d1664u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_1d1668:
    // 0x1d1668: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x1d1668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x1d166c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D166Cu;
    {
        const bool branch_taken_0x1d166c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D166Cu;
        // 0x1d1670: 0xc6340014  lwc1        $f20, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d166c) {
            ctx->pc = 0x1D1688u;
            goto label_1d1688;
        }
    }
    ctx->pc = 0x1D1674u;
    // 0x1d1674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d167c: 0x0  nop
    ctx->pc = 0x1d167cu;
    // NOP
    // 0x1d1680: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1d1680u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1d1684: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1d1684u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1d1688:
    // 0x1d1688: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d1688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d168c: 0x0  nop
    ctx->pc = 0x1d168cu;
    // NOP
    // 0x1d1690: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x1d1690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1694: 0x0  nop
    ctx->pc = 0x1d1694u;
    // NOP
    // 0x1d1698: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1698u;
    {
        const bool branch_taken_0x1d1698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1698) {
            ctx->pc = 0x1D169Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1698u;
            // 0x1d169c: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D16A0u;
            goto label_1d16a0;
        }
    }
    ctx->pc = 0x1D16A0u;
label_1d16a0:
    // 0x1d16a0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d16a4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d16a8: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1d16a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d16ac: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1d16acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1d16b0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1D16B0u;
    {
        const bool branch_taken_0x1d16b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16B0u;
        // 0x1d16b4: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16b0) {
            ctx->pc = 0x1D17B0u;
            goto label_1d17b0;
        }
    }
    ctx->pc = 0x1D16B8u;
    // 0x1d16b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D16B8u;
    {
        const bool branch_taken_0x1d16b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16B8u;
        // 0x1d16bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16b8) {
            ctx->pc = 0x1D16ECu;
            goto label_1d16ec;
        }
    }
    ctx->pc = 0x1D16C0u;
    // 0x1d16c0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1d16c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d16c4: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x1d16c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d16c8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1d16c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1d16cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d16ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d16d0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1d16d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d16d4: 0x0  nop
    ctx->pc = 0x1d16d4u;
    // NOP
    // 0x1d16d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D16D8u;
    {
        const bool branch_taken_0x1d16d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16D8u;
        // 0x1d16dc: 0xe6010078  swc1        $f1, 0x78($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16d8) {
            ctx->pc = 0x1D16ECu;
            goto label_1d16ec;
        }
    }
    ctx->pc = 0x1D16E0u;
    // 0x1d16e0: 0xc074b5e  jal         func_1D2D78
    ctx->pc = 0x1D16E0u;
    SET_GPR_U32(ctx, 31, 0x1D16E8u);
    ctx->pc = 0x1D16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16E0u;
    // 0x1d16e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2D78u, 0x1D16E0u, 0x1D16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16E8u;
label_1d16e8:
    // 0x1d16e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d16e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d16ec:
    // 0x1d16ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d16ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16f0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d16f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16f4: 0xc074ca8  jal         func_1D32A0
    ctx->pc = 0x1D16F4u;
    SET_GPR_U32(ctx, 31, 0x1D16FCu);
    ctx->pc = 0x1D16F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16F4u;
    // 0x1d16f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D32A0u, 0x1D16F4u, 0x1D16FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16FCu;
label_1d16fc:
    // 0x1d16fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d16fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1700: 0xc0742fe  jal         func_1D0BF8
    ctx->pc = 0x1D1700u;
    SET_GPR_U32(ctx, 31, 0x1D1708u);
    ctx->pc = 0x1D1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1700u;
    // 0x1d1704: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF8u, 0x1D1700u, 0x1D1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1708u;
label_1d1708:
    // 0x1d1708: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x1d1708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1d170c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d1710: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1710u;
    {
        const bool branch_taken_0x1d1710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1710u;
        // 0x1d1714: 0x32420020  andi        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1710) {
            ctx->pc = 0x1D1734u;
            goto label_1d1734;
        }
    }
    ctx->pc = 0x1D1718u;
    // 0x1d1718: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x1d1718u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x1d171c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1d171cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d1720: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1d1720u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1724: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d1724u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1728: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d1728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d172c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D172Cu;
    {
        const bool branch_taken_0x1d172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D172Cu;
        // 0x1d1730: 0x32430020  andi        $v1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d172c) {
            ctx->pc = 0x1D17A0u;
            goto label_1d17a0;
        }
    }
    ctx->pc = 0x1D1734u;
label_1d1734:
    // 0x1d1734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1734u;
    {
        const bool branch_taken_0x1d1734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1734u;
        // 0x1d1738: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1734) {
            ctx->pc = 0x1D174Cu;
            goto label_1d174c;
        }
    }
    ctx->pc = 0x1D173Cu;
    // 0x1d173c: 0x56e00007  bnel        $s7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D173Cu;
    {
        const bool branch_taken_0x1d173c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d173c) {
            ctx->pc = 0x1D1740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D173Cu;
            // 0x1d1740: 0xc6610000  lwc1        $f1, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D175Cu;
            goto label_1d175c;
        }
    }
    ctx->pc = 0x1D1744u;
    // 0x1d1744: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1744u;
    {
        const bool branch_taken_0x1d1744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1744u;
        // 0x1d1748: 0x4614bdc0  add.s       $f23, $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1744) {
            ctx->pc = 0x1D17ACu;
            goto label_1d17ac;
        }
    }
    ctx->pc = 0x1D174Cu;
label_1d174c:
    // 0x1d174c: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x1d174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
    // 0x1d1750: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1750u;
    {
        const bool branch_taken_0x1d1750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1750) {
            ctx->pc = 0x1D17A0u;
            goto label_1d17a0;
        }
    }
    ctx->pc = 0x1D1758u;
    // 0x1d1758: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d1758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d175c:
    // 0x1d175c: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1d175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1760: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1d1760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d1764: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1d1764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1d1768: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d1768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d176c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1d176cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1d1770: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1d1770u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1d1774: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1d1774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d1778: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d1778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d177c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1d177cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d1780: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1d1780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1d1784: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1d1784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1d1788: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1d1788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1d178c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1d178cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d1790: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d1790u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1794: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d1794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d1798: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d1798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d179c: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x1d179cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_1d17a0:
    // 0x1d17a0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D17A0u;
    {
        const bool branch_taken_0x1d17a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d17a0) {
            ctx->pc = 0x1D17A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D17A0u;
            // 0x1d17a4: 0x4614ad40  add.s       $f21, $f21, $f20 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D17ACu;
            goto label_1d17ac;
        }
    }
    ctx->pc = 0x1D17A8u;
    // 0x1d17a8: 0x4614bdc0  add.s       $f23, $f23, $f20
    ctx->pc = 0x1d17a8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_1d17ac:
    // 0x1d17ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d17acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d17b0:
    // 0x1d17b0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1d17b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d17b4: 0x5620ffac  bnel        $s1, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1D17B4u;
    {
        const bool branch_taken_0x1d17b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d17b4) {
            ctx->pc = 0x1D17B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D17B4u;
            // 0x1d17b8: 0x9632002a  lhu         $s2, 0x2A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1668;
        }
    }
    ctx->pc = 0x1D17BCu;
    // 0x1d17bc: 0x12e00027  beqz        $s7, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D17BCu;
    {
        const bool branch_taken_0x1d17bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17BCu;
        // 0x1d17c0: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17bc) {
            ctx->pc = 0x1D185Cu;
            goto label_1d185c;
        }
    }
    ctx->pc = 0x1D17C4u;
    // 0x1d17c4: 0x4616b834  c.lt.s      $f23, $f22
    ctx->pc = 0x1d17c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d17c8: 0x0  nop
    ctx->pc = 0x1d17c8u;
    // NOP
    // 0x1d17cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D17CCu;
    {
        const bool branch_taken_0x1d17cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d17cc) {
            ctx->pc = 0x1D17F0u;
            goto label_1d17f0;
        }
    }
    ctx->pc = 0x1D17D4u;
    // 0x1d17d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d17d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d17d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d17d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d17dc: 0x0  nop
    ctx->pc = 0x1d17dcu;
    // NOP
    // 0x1d17e0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1d17e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d17e4: 0x0  nop
    ctx->pc = 0x1d17e4u;
    // NOP
    // 0x1d17e8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1D17E8u;
    {
        const bool branch_taken_0x1d17e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d17e8) {
            ctx->pc = 0x1D185Cu;
            goto label_1d185c;
        }
    }
    ctx->pc = 0x1D17F0u;
label_1d17f0:
    // 0x1d17f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d17f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d17f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d17f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d17f8: 0x0  nop
    ctx->pc = 0x1d17f8u;
    // NOP
    // 0x1d17fc: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1d17fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1800: 0x0  nop
    ctx->pc = 0x1d1800u;
    // NOP
    // 0x1d1804: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1804u;
    {
        const bool branch_taken_0x1d1804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1804) {
            ctx->pc = 0x1D1808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1804u;
            // 0x1d1808: 0x4617b501  sub.s       $f20, $f22, $f23 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1814u;
            goto label_1d1814;
        }
    }
    ctx->pc = 0x1D180Cu;
    // 0x1d180c: 0x4617a800  add.s       $f0, $f21, $f23
    ctx->pc = 0x1d180cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x1d1810: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1d1810u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d1814:
    // 0x1d1814: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1d1814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d1818: 0xc0742fe  jal         func_1D0BF8
    ctx->pc = 0x1D1818u;
    SET_GPR_U32(ctx, 31, 0x1D1820u);
    ctx->pc = 0x1D181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1818u;
    // 0x1d181c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF8u, 0x1D1818u, 0x1D1820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1820u;
label_1d1820:
    // 0x1d1820: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x1d1820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d1824: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d1824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1828: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1d1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d182c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1d182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d1830: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d1830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1834: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1d1834u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1d1838: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d183c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1d183cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1d1840: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1d1840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1d1844: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d1844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d1848: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1d1848u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1d184c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1d184cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d1850: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1d1850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1d1854: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D1854u;
    {
        const bool branch_taken_0x1d1854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1854u;
        // 0x1d1858: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1854) {
            ctx->pc = 0x1D18C4u;
            goto label_1d18c4;
        }
    }
    ctx->pc = 0x1D185Cu;
label_1d185c:
    // 0x1d185c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D185Cu;
    {
        const bool branch_taken_0x1d185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d185c) {
            ctx->pc = 0x1D1860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D185Cu;
            // 0x1d1860: 0x92020090  lbu         $v0, 0x90($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D18E4u;
            goto label_1d18e4;
        }
    }
    ctx->pc = 0x1D1864u;
    // 0x1d1864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1868: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d1868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d186c: 0x0  nop
    ctx->pc = 0x1d186cu;
    // NOP
    // 0x1d1870: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1d1870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1874: 0x0  nop
    ctx->pc = 0x1d1874u;
    // NOP
    // 0x1d1878: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1878u;
    {
        const bool branch_taken_0x1d1878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1878u;
        // 0x1d187c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1878) {
            ctx->pc = 0x1D18E0u;
            goto label_1d18e0;
        }
    }
    ctx->pc = 0x1D1880u;
    // 0x1d1880: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1d1880u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1d1884: 0xc0742fe  jal         func_1D0BF8
    ctx->pc = 0x1D1884u;
    SET_GPR_U32(ctx, 31, 0x1D188Cu);
    ctx->pc = 0x1D1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1884u;
    // 0x1d1888: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF8u, 0x1D1884u, 0x1D188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D188Cu;
label_1d188c:
    // 0x1d188c: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x1d188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1890: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1d1890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1894: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d1894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1898: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1d1898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d189c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1d189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d18a0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1d18a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1d18a4: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1d18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d18a8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1d18a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1d18ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d18acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d18b0: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x1d18b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1d18b4: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x1d18b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1d18b8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1d18b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d18bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1d18bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1d18c0: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x1d18c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1d18c4:
    // 0x1d18c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d18c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d18c8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d18c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d18cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1d18ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d18d0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d18d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d18d4: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x1d18d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x1d18d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D18D8u;
    {
        const bool branch_taken_0x1d18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18D8u;
        // 0x1d18dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18d8) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D18E0u;
label_1d18e0:
    // 0x1d18e0: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x1d18e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
label_1d18e4:
    // 0x1d18e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d18e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d18e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D18E8u;
    {
        const bool branch_taken_0x1d18e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d18e8) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D18F0u;
    // 0x1d18f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d18f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d18f4: 0x0  nop
    ctx->pc = 0x1d18f4u;
    // NOP
    // 0x1d18f8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1d18f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d18fc: 0x0  nop
    ctx->pc = 0x1d18fcu;
    // NOP
    // 0x1d1900: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1D1900u;
    {
        const bool branch_taken_0x1d1900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1900u;
        // 0x1d1904: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1900) {
            ctx->pc = 0x1D1930u;
            goto label_1d1930;
        }
    }
    ctx->pc = 0x1D1908u;
    // 0x1d1908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d190c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d190cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1910: 0x0  nop
    ctx->pc = 0x1d1910u;
    // NOP
    // 0x1d1914: 0x0  nop
    ctx->pc = 0x1d1914u;
    // NOP
    // 0x1d1918: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1d1918u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x1d191c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d191cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d1920: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d1920u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1924: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1d1924u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1d1928: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1d1928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d192c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1d192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1d1930:
    // 0x1d1930: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1930u;
    {
        const bool branch_taken_0x1d1930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1930u;
        // 0x1d1934: 0x33c20002  andi        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1930) {
            ctx->pc = 0x1D1978u;
            goto label_1d1978;
        }
    }
    ctx->pc = 0x1D1938u;
    // 0x1d1938: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1938u;
    {
        const bool branch_taken_0x1d1938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1938u;
        // 0x1d193c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1938) {
            ctx->pc = 0x1D194Cu;
            goto label_1d194c;
        }
    }
    ctx->pc = 0x1D1940u;
    // 0x1d1940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1944: 0xc07431c  jal         func_1D0C70
    ctx->pc = 0x1D1944u;
    SET_GPR_U32(ctx, 31, 0x1D194Cu);
    ctx->pc = 0x1D1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1944u;
    // 0x1d1948: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C70u, 0x1D1944u, 0x1D194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D194Cu;
label_1d194c:
    // 0x1d194c: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x1d194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
    // 0x1d1950: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1950u;
    {
        const bool branch_taken_0x1d1950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1950u;
        // 0x1d1954: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1950) {
            ctx->pc = 0x1D195Cu;
            goto label_1d195c;
        }
    }
    ctx->pc = 0x1D1958u;
    // 0x1d1958: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x1d1958u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_1d195c:
    // 0x1d195c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1960: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d1960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1964: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1d1964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1d1968: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1d1968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d196c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1d196cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1970: 0xc0742ee  jal         func_1D0BB8
    ctx->pc = 0x1D1970u;
    SET_GPR_U32(ctx, 31, 0x1D1978u);
    ctx->pc = 0x1D1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1970u;
    // 0x1d1974: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BB8u, 0x1D1970u, 0x1D1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1978u;
label_1d1978:
    // 0x1d1978: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1d1978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d197c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1d197cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d1980: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1d1980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d1984: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1d1984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d1988: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1d1988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d198c: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1d198cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d1990: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1d1990u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d1994: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1d1994u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d1998: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1d1998u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d199c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1d199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d19a0: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1d19a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d19a4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1d19a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d19a8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1d19a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d19ac: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1d19acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d19b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19B0u;
        // 0x1d19b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19B8u;
}
