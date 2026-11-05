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

// Function: sub_002B3340
// Address: 0x2b3340 - 0x2b3528
void sub_002B3340_0x2b3340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3340_0x2b3340");
#endif

    switch (ctx->pc) {
        case 0x2b341cu: goto label_2b341c;
        case 0x2b3474u: goto label_2b3474;
        case 0x2b34e8u: goto label_2b34e8;
        case 0x2b34f4u: goto label_2b34f4;
        default: break;
    }

    ctx->pc = 0x2b3340u;

    // 0x2b3340: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2b3340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2b3344: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2b3344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2b3348: 0x8c452c18  lw          $a1, 0x2C18($v0)
    ctx->pc = 0x2b3348u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482C18u));
    // 0x2b334c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b334cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3350: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2b3350u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3354: 0x34632d98  ori         $v1, $v1, 0x2D98
    ctx->pc = 0x2b3354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11672);
    // 0x2b3358: 0x1835821  addu        $t3, $t4, $v1
    ctx->pc = 0x2b3358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2b335c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3364: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2b3364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2b3368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b336c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2b336cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2b3370: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3374: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x2b3374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
    // 0x2b3378: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x2b3378u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x2b337c: 0x3c07005a  lui         $a3, 0x5A
    ctx->pc = 0x2b337cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)90 << 16));
    // 0x2b3380: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x2b3380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x2b3384: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2b3384u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2b3388: 0x8c432c14  lw          $v1, 0x2C14($v0)
    ctx->pc = 0x2b3388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C14u));
    // 0x2b338c: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x2b338cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x2b3390: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x2b3390u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x2b3394: 0xad630004  sw          $v1, 0x4($t3)
    ctx->pc = 0x2b3394u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
    // 0x2b3398: 0x8c8265b0  lw          $v0, 0x65B0($a0)
    ctx->pc = 0x2b3398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5A65B0u));
    // 0x2b339c: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x2b339cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x2b33a0: 0x8cc36570  lw          $v1, 0x6570($a2)
    ctx->pc = 0x2b33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5A6570u));
    // 0x2b33a4: 0xad63000c  sw          $v1, 0xC($t3)
    ctx->pc = 0x2b33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 3));
    // 0x2b33a8: 0x8ca26590  lw          $v0, 0x6590($a1)
    ctx->pc = 0x2b33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5A6590u));
    // 0x2b33ac: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x2b33acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x2b33b0: 0x8ce36630  lw          $v1, 0x6630($a3)
    ctx->pc = 0x2b33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5A6630u));
    // 0x2b33b4: 0xad63001c  sw          $v1, 0x1C($t3)
    ctx->pc = 0x2b33b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 3));
    // 0x2b33b8: 0x8d022c1c  lw          $v0, 0x2C1C($t0)
    ctx->pc = 0x2b33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482C1Cu));
    // 0x2b33bc: 0xad620014  sw          $v0, 0x14($t3)
    ctx->pc = 0x2b33bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 2));
    // 0x2b33c0: 0x8d232c20  lw          $v1, 0x2C20($t1)
    ctx->pc = 0x2b33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C20u));
    // 0x2b33c4: 0xad630024  sw          $v1, 0x24($t3)
    ctx->pc = 0x2b33c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 3));
    // 0x2b33c8: 0x9142bd24  lbu         $v0, -0x42DC($t2)
    ctx->pc = 0x2b33c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x2b33cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B33CCu;
    {
        const bool branch_taken_0x2b33cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33CCu;
        // 0x2b33d0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33cc) {
            ctx->pc = 0x2B33ECu;
            goto label_2b33ec;
        }
    }
    ctx->pc = 0x2B33D4u;
    // 0x2b33d4: 0x8c82bd20  lw          $v0, -0x42E0($a0)
    ctx->pc = 0x2b33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950176)));
    // 0x2b33d8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2b33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b33dc: 0xad630020  sw          $v1, 0x20($t3)
    ctx->pc = 0x2b33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 3));
    // 0x2b33e0: 0x8c82bd20  lw          $v0, -0x42E0($a0)
    ctx->pc = 0x2b33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950176)));
    // 0x2b33e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B33E4u;
    {
        const bool branch_taken_0x2b33e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33E4u;
        // 0x2b33e8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33e4) {
            ctx->pc = 0x2B33F4u;
            goto label_2b33f4;
        }
    }
    ctx->pc = 0x2B33ECu;
label_2b33ec:
    // 0x2b33ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2b33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b33f0: 0xad620020  sw          $v0, 0x20($t3)
    ctx->pc = 0x2b33f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 2));
label_2b33f4:
    // 0x2b33f4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2b33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2b33f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2b33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2b33fc: 0x34422dc0  ori         $v0, $v0, 0x2DC0
    ctx->pc = 0x2b33fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11712);
    // 0x2b3400: 0x2465c690  addiu       $a1, $v1, -0x3970
    ctx->pc = 0x2b3400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952592));
    // 0x2b3404: 0x1822021  addu        $a0, $t4, $v0
    ctx->pc = 0x2b3404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2b3408: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x2b3408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b340c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2b340cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2b3410: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B3410u;
    {
        const bool branch_taken_0x2b3410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3410u;
        // 0x2b3414: 0x24a20060  addiu       $v0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3410) {
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B3418u;
    // 0x2b3418: 0x3c12005b  lui         $s2, 0x5B
    ctx->pc = 0x2b3418u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)91 << 16));
label_2b341c:
    // 0x2b341c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2b341cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b3420: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2b3420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b3424: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2b3424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b3428: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2b3428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b342c: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x2b342cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2b3430: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x2b3430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2b3434: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x2b3434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2b3438: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x2b3438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2b343c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2b343cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3440: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2b3440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3444: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2b3444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3448: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2b3448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b344c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2b344cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3450: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2b3450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3454: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2b3454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3458: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2b3458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b345c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2b345cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2b3460: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B3460u;
    {
        const bool branch_taken_0x2b3460 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3460u;
        // 0x2b3464: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3460) {
            ctx->pc = 0x2B341Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b341c;
        }
    }
    ctx->pc = 0x2B3468u;
    // 0x2b3468: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B3468u;
    {
        const bool branch_taken_0x2b3468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3468u;
        // 0x2b346c: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3468) {
            ctx->pc = 0x2B34A4u;
            goto label_2b34a4;
        }
    }
    ctx->pc = 0x2B3470u;
label_2b3470:
    // 0x2b3470: 0x3c12005b  lui         $s2, 0x5B
    ctx->pc = 0x2b3470u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)91 << 16));
label_2b3474:
    // 0x2b3474: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2b3474u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b3478: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x2b3478u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b347c: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x2b347cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b3480: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x2b3480u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b3484: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2b3484u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2b3488: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2b3488u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2b348c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x2b348cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2b3490: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x2b3490u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2b3494: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2b3494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2b3498: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B3498u;
    {
        const bool branch_taken_0x2b3498 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3498u;
        // 0x2b349c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3498) {
            ctx->pc = 0x2B3474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3474;
        }
    }
    ctx->pc = 0x2B34A0u;
    // 0x2b34a0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2b34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_2b34a4:
    // 0x2b34a4: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2b34a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2b34a8: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2b34a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2b34ac: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2b34acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b34b0: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2b34b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b34b4: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x2b34b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2b34b8: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x2b34b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2b34bc: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2b34bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b34c0: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2b34c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b34c4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2b34c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b34c8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2b34c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b34cc: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2b34ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b34d0: 0x34422d98  ori         $v0, $v0, 0x2D98
    ctx->pc = 0x2b34d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11672);
    // 0x2b34d4: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2b34d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b34d8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x2b34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2b34dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b34dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34e0: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x2b34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x2b34e4: 0x245100a0  addiu       $s1, $v0, 0xA0
    ctx->pc = 0x2b34e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_2b34e8:
    // 0x2b34e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b34e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34ec: 0xc0c9a32  jal         func_3268C8
    ctx->pc = 0x2B34ECu;
    SET_GPR_U32(ctx, 31, 0x2B34F4u);
    ctx->pc = 0x2B34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B34ECu;
    // 0x2b34f0: 0x26446e00  addiu       $a0, $s2, 0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3268C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3268C8u, 0x2B34ECu, 0x2B34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B34F4u;
label_2b34f4:
    // 0x2b34f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b34f8: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x2b34f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2b34fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b34fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b3500: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b3500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b3504: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x2b3504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2b3508: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B3508u;
    {
        const bool branch_taken_0x2b3508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3508u;
        // 0x2b350c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3508) {
            ctx->pc = 0x2B34E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b34e8;
        }
    }
    ctx->pc = 0x2B3510u;
    // 0x2b3510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b3518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b351c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3520: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3520u;
        // 0x2b3524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3528u;
}
